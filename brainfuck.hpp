#ifndef __BRAINFUCK_H__
#define __BRAINFUCK_H__ 1

#include <cstdio>
#include <cstdlib>
#include <cstring>

class brainfuck {
private:
    char *_data = 0;
    unsigned long long _size = 0;
    unsigned long long _cap = 0;
    unsigned char *_pos_data = 0;
    unsigned long long _pos_size = 0;
    unsigned long long _pos_cap = 0;
    unsigned long long _pos = 0;

public:
    brainfuck(const char *text = 0) {
        write(text);
    }

    brainfuck(const void *buffer, unsigned long long size) {
        writebuf(buffer, size);
    }

    ~brainfuck() {
        this->free();
    }

private:
    int _extend_size(unsigned long long size = 0) {
        if (_size + size >= _cap) {
            unsigned long long new_cap = _cap ? _cap << 1 : 512;
            while (_size + size >= new_cap) new_cap <<= 1;
            char *new_data = (char*)std::realloc(_data, new_cap);
            if (new_data == 0) return 1;
            _data = new_data;
            _cap = new_cap;
            std::memset(_data + _size, 0, _cap - _size);
        }
        return 0;
    }

public:
    brainfuck& free() {
        if (_cap) std::free(_data);
        if (_pos_cap) std::free(_pos_data);
        return *this;
    }

    brainfuck& clear() {
        this->free();
        _data = 0;
        _size = 0;
        _cap = 0;
        _pos_data = 0;
        _pos_size = 0;
        _pos_cap = 0;
        _pos = 0;
        return *this;
    }

    brainfuck& copy(brainfuck bf = brainfuck(0)) {
        this->free();
        _data = bf._data;
        _size = bf._size;
        _cap = bf._cap;
        _pos_data = bf._pos_data;
        _pos_size = bf._pos_size;
        _pos_cap = bf._pos_cap;
        _pos = bf._pos;
        return *this;
    }

    const char *data() {
        return _data;
    }

    unsigned long long size() {
        return _size;
    }

    brainfuck& write(const char *text = 0) {
        if (text == 0) return *this;
        unsigned long long size = std::strlen(text);
        if (size) {
            if (_extend_size(size)) return *this;
            std::memcpy(_data + _size, text, size);
            _size += size;
        }
        return *this;
    }

    brainfuck& writebuf(const void *buffer = 0, unsigned long long size = 0) {
        if (buffer == 0) return *this;
        if (size) {
            if (_extend_size(size)) return *this;
            std::memcpy(_data + _size, buffer, size);
            _size += size;
        }
        return *this;
    }

    brainfuck& fread(FILE *file = 0) {
        if (file == 0) return *this;
        unsigned long long save = std::ftell(file);
        std::fseek(file, 0, 2);
        unsigned long long size = std::ftell(file);
        if (size) {
            if (_extend_size(size)) {
                std::fclose(file);
                return *this;
            }
            std::fseek(file, 0, 0);
            std::fread(_data + _size, 1, size, file);
        }
        std::fseek(file, save, 0);
        return *this;
    }

    brainfuck& fread(const char *path = 0) {
        if (path == 0) return *this;
        FILE *file = std::fopen(path, "rb");
        if (file == 0) return *this;
        std::fseek(file, 0, 2);
        unsigned long long size = std::ftell(file);
        if (size) {
            if (_extend_size(size)) {
                std::fclose(file);
                return *this;
            }
            std::fseek(file, 0, 0);
            std::fread(_data + _size, 1, size, file);
        }
        std::fclose(file);
        return *this;
    }

    brainfuck& fwrite(FILE *file = 0) {
        if (file == 0) return *this;
        if (_size) std::fwrite(_data, 1, _size, file);
        return *this;
    }

    brainfuck& fwrite(const char *path = 0) {
        if (path == 0) return *this;
        FILE *file = std::fopen(path, "wb");
        if (file == 0) return *this;
        if (_size) std::fwrite(_data, 1, _size, file);
        std::fclose(file);
        return *this;
    }

    brainfuck& fappend(FILE *file = 0) {
        if (file == 0) return *this;
        if (_size) std::fwrite(_data, 1, _size, file);
        return *this;
    }

    brainfuck& fappend(const char *path = 0) {
        if (path == 0) return *this;
        FILE *file = std::fopen(path, "ab");
        if (file == 0) return *this;
        if (_size) std::fwrite(_data, 1, _size, file);
        std::fclose(file);
        return *this;
    }

    brainfuck& optimize() {
        if (_size <= 1) return *this;
        char *w = _data;
        const char *r = _data;
        char c = *r;
        char cmp;
        while (c) {
            c = *r++;
            if (c != '+' && c != '-' && c != '>' && c != '<' && c != '.' && c != ',' && c != '[' && c != ']') continue;
            if (w > _data) {
                cmp = *(w - 1);
                if ((cmp == '+' && c == '-') || (cmp == '-' && c == '+') || (cmp == '>' && c == '<') || (cmp == '<' && c == '>')) {
                    w--;
                    continue;
                }
            }
            *w++ = c;
        }
        *w = 0;
        _size = w - _data;
        return *this;
    }

private:
    void _plus() {
        if (_extend_size(1)) return;
        _data[_size] = '+';
        _size += 1;
    }

    void _minus() {
        if (_extend_size(1)) return;
        _data[_size] = '-';
        _size += 1;
    }

    void _right() {
        if (_extend_size(1)) return;
        _data[_size] = '>';
        _size += 1;
    }

    void _left() {
        if (_extend_size(1)) return;
        _data[_size] = '<';
        _size += 1;
    }

    void _put() {
        if (_extend_size(1)) return;
        _data[_size] = '.';
        _size += 1;
    }

    void _get() {
        if (_extend_size(1)) return;
        _data[_size] = ',';
        _size += 1;
    }

    void _loop() {
        if (_extend_size(1)) return;
        _data[_size] = '[';
        _size += 1;
    }

    void _end() {
        if (_extend_size(1)) return;
        _data[_size] = ']';
        _size += 1;
    }

    void _add(unsigned char count = 1) {
        if (_extend_size(count)) return;
        if (count) std::memset(_data + _size, '+', count);
        _size += count;
    }

    void _sub(unsigned char count = 1) {
        if (_extend_size(count)) return;
        if (count) std::memset(_data + _size, '-', count);
        _size += count;
    }

    void _movr(unsigned long long count = 1) {
        if (_extend_size(count)) return;
        if (count) std::memset(_data + _size, '>', count);
        _size += count;
    }

    void _movl(unsigned long long count = 1) {
        if (_extend_size(count)) return;
        if (count) std::memset(_data + _size, '<', count);
        _size += count;
    }

    void _clear() {
        if (_extend_size(3)) return;
        _data[_size] = '[';
        _data[_size + 1] = '-';
        _data[_size + 2] = ']';
        _size += 3;
    }

    void _set(unsigned char value = 0) {
        if (_extend_size(3 + value)) return;
        _data[_size] = '[';
        _data[_size + 1] = '-';
        _data[_size + 2] = ']';
        if (value) std::memset(_data + _size, '+', value);
        _size += 3 + value;
    }

    void _mov(unsigned long long pos = 0) {
        if (_pos > pos) _movl(_pos - pos);
        else if (_pos < pos) _movr(pos - _pos);
    }

    unsigned long long _map(unsigned long long pos = 0) {
        unsigned long long meta1 = _alloc(1);
        if (meta1 == -1) return -1;
        unsigned long long meta2 = _alloc(1);
        if (meta2 == -1) return -1;
        _mov(meta1); _clear(); _mov(meta2); _clear();
        _mov(pos); _loop();
            _mov(meta1); _plus();
            _mov(meta2); _plus();
            _mov(pos); _minus();
        _end();
        _mov(meta2); _loop();
            _mov(pos); _plus();
            _mov(meta2); _minus();
        _end();
        _free(meta2, 1);
        return meta1;
    }

public:
    template<typename T = unsigned long long>
    unsigned long long _alloc(T size = T(1)) {
        if ((unsigned long long)size == 0) return -1;
        unsigned long long count = 0;
        for (unsigned long long i = 0; i < _pos_size; i++) {
            if (_pos_data[i] == 0) {
                count++;
                if (count >= (unsigned long long)size) {
                    std::memset(_pos_data + i - count + 1, 1, (unsigned long long)size);
                    return i - count + 1;
                }
            }
            else count = 0;
        }
        if (_pos_size + (unsigned long long)size > _pos_cap) {
            unsigned long long new_pos_cap = _pos_cap ? _pos_cap << 1 : 64;
            while (_pos_size + (unsigned long long)size > new_pos_cap) new_pos_cap <<= 1;
            unsigned char *new_pos_data = (unsigned char*)std::realloc(_pos_data, new_pos_cap);
            if (new_pos_data == 0) return -1;
            _pos_data = new_pos_data;
            _pos_cap = new_pos_cap;
            std::memset(_pos_data + _pos_size, 0, _pos_cap - _pos_size);
        }
        std::memset(_pos_data + _pos_size, 1, (unsigned long long)size);
        unsigned long long temp = _pos_size;
        _pos_size += (unsigned long long)size;
        return temp;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& _free(T1 pos = T1(-1), T2 size = T2(1)) {
        if ((unsigned long long)pos == -1 || (unsigned long long)size == 0) return *this;
        if ((unsigned long long)pos >= _pos_size) return *this;
        if ((unsigned long long)size > _pos_size - (unsigned long long)pos) return *this;
        std::memset(_pos_data + (unsigned long long)pos, 0, (unsigned long long)size);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& movconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        _mov((unsigned long long)pos);
        _set((unsigned char)value);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& mov(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        if ((unsigned long long)pos1 == (unsigned long long)pos2) return *this;
        unsigned long long meta = _alloc(1);
        if (meta == -1) return *this;
        _mov((unsigned long long)pos1); _clear(); _mov(meta); _clear();
        _mov((unsigned long long)pos2); _loop();
            _mov(meta); _plus();
            _mov((unsigned long long)pos1); _plus();
            _mov((unsigned long long)pos2); _minus();
        _end();
        _mov(meta); _loop();
            _mov((unsigned long long)pos2); _plus();
            _mov(meta); _minus();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& addconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        _mov((unsigned long long)pos);
        _add((unsigned char)value);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& add(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta = _map((unsigned long long)pos2);
        if (meta == -1) return *this;
        _mov(meta); _loop();
            _mov((unsigned long long)pos1): _plus();
            _mov(meta); _minus();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& subconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        _mov((unsigned long long)pos);
        _sub((unsigned char)value);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& sub(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta = _map((unsigned long long)pos2);
        if (meta == -1) return *this;
        _mov(meta); _loop();
            _mov((unsigned long long)pos1): _minus();
            _mov(meta); _minus();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& mulconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        unsigned long long meta = _alloc(1);
        if (meta == -1) return *this;
        _mov(meta); _clear();
        _mov((unsigned long long)pos); _loop();
            _mov(meta); _add((unsigned char)value);
            _mov((unsigned long long)pos); _minus();
        _end();
        _mov(meta); _loop();
            _mov((unsigned long long)pos); _plus();
            _mov(meta); _minus();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& mul(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos2);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _alloc(1);
        if (meta2 == -1) return *this;
        unsigned long long meta3 = _alloc(1);
        if (meta3 == -1) return *this;
        _mov(meta3); _clear();
        _mov(meta1); _loop();
            _mov(meta2); _clear();
            _mov((unsigned long long)pos1); _loop();
                _mov(meta2); _plus();
                _mov(meta3); _plus();
                _mov((unsigned long long)pos1); _minus();
            _end();
            _mov(meta2); _loop();
                _mov((unsigned long long)pos1); _plus();
                _mov(meta2); _minus();
            _end();
        _end();
        _mov((unsigned long long)pos1); _clear();
        _mov(meta3); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta3); _minus();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
        _free(meta3, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& divconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned char)value == 0) {
            _mov((unsigned long long)pos); _clear();
            return *this;
        }
        if ((unsigned long long)pos == -1) return *this;
        unsigned long long meta = _alloc(1);
        if (meta == -1) return *this;
        _mov(meta); _clear();
        _mov((unsigned long long)pos); _loop();
            _mov(meta); _plus();
            _mov((unsigned long long)pos); _sub((unsigned char)value);
        _end();
        _mov(meta); _loop();
            _mov((unsigned long long)pos); _plus();
            _mov(meta); _minus();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& div(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos2);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _alloc(1);
        if (meta2 == -1) return *this;
        unsigned long long meta3 = _alloc(1);
        if (meta3 == -1) return *this;
        _mov(meta3); _clear();
        _mov(meta1); _loop();
            _mov(meta2); _clear();
            _mov((unsigned long long)pos1); _loop();
                _mov(meta2); _plus();
                _mov(meta3); _plus();
                _mov((unsigned long long)pos1); _minus();
            _end();
            _mov(meta2); _loop();
                _mov((unsigned long long)pos1); _plus();
                _mov(meta2); _minus();
            _end();
        _end();
        _mov((unsigned long long)pos1); _clear();
        _mov(meta3); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta3); _minus();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
        _free(meta3, 1);
        return *this;
    }
};

#undef cellint
#undef cellsize
#undef cellnull
#define cellint unsigned long long
#define cellsize unsigned long long
#define cellnull (-1ull)

#endif
