#ifndef __BRAINFUCK_H__
#define __BRAINFUCK_H__ 1

#include <cstdio>
#include <cstdlib>
#include <cstring>

class brainfuck {
private:
    struct cadr {
    public:
        unsigned long long _pos = -1;
        unsigned long long _size = 0;

        cadr() = default;

        cadr(unsigned long long pos, unsigned long long size = 0) {
            _pos = pos;
            _size = size;
        }

        cadr(const cadr& cd) {
            _pos = cd._pos;
            _size = cd._size;
        }
    };

    char *_data = 0;
    unsigned long long _size = 0;
    unsigned long long _cap = 0;
    unsigned char *_pos_data = 0;
    unsigned long long _pos_size = 0;
    unsigned long long _pos_cap = 0;
    unsigned long long _pos = 0;
    cadr *_cadr_data_data = 0;
    unsigned long long _cadr_data_size = 0;
    unsigned long long _cadr_data_cap = 0;
    unsigned long long *_cadr_data = 0;
    unsigned long long _cadr_size = 0;
    unsigned long long _cadr_cap = 0;

public:
    brainfuck(const char *text = 0) {
        writestr(text);
    }

    brainfuck(const void *buffer, unsigned long long size) {
        write(buffer, size);
    }

    ~brainfuck() {
        this->free();
    }

private:
    int _extend_data(unsigned long long size = 1) {
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

    int _extend_pos(unsigned long long size = 1) {
        if (_pos_size + size > _pos_cap) {
            unsigned long long new_pos_cap = _pos_cap ? _pos_cap << 1 : 64;
            while (_pos_size + size > new_pos_cap) new_pos_cap <<= 1;
            unsigned char *new_pos_data = (unsigned char*)std::realloc(_pos_data, new_pos_cap);
            if (new_pos_data == 0) return 1;
            _pos_data = new_pos_data;
            _pos_cap = new_pos_cap;
            std::memset(_pos_data + _pos_size, 0, _pos_cap - _pos_size);
        }
        return 0;
    }

    int _extend_cadr_data() {
        if (_cadr_data_size + 1 > _cadr_data_cap) {
            unsigned long long new_cadr_data_cap = _cadr_data_cap ? _cadr_data_cap << 1 : 32;
            while (_cadr_data_size + 1 > new_cadr_data_cap) new_cadr_data_cap <<= 1;
            cadr *new_cadr_data_data = (cadr*)std::realloc(_cadr_data_data, new_cadr_data_cap * sizeof(cadr));
            if (new_cadr_data_data == 0) return 1;
            _cadr_data_data = new_cadr_data_data;
            _cadr_data_cap = new_cadr_data_cap;
        }
        return 0;
    }

    int _extend_cadr() {
        if (_cadr_size + 1 > _cadr_cap) {
            unsigned long long new_cadr_cap = _cadr_cap ? _cadr_cap << 1 : 32;
            while (_cadr_size + 1 > new_cadr_cap) new_cadr_cap <<= 1;
            unsigned long long *new_cadr_data = (unsigned long long*)std::realloc(_cadr_data, new_cadr_cap * sizeof(unsigned long long));
            if (new_cadr_data == 0) return 1;
            _cadr_data = new_cadr_data;
            _cadr_cap = new_cadr_cap;
        }
        return 0;
    }

public:
    brainfuck& free() {
        if (_cap) std::free(_data);
        if (_pos_cap) std::free(_pos_data);
        if (_cadr_data_cap) std::free(_cadr_data_data);
        if (_cadr_cap) std::free(_cadr_data);
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
        _cadr_data_data = 0;
        _cadr_data_size = 0;
        _cadr_data_cap = 0;
        _cadr_data = 0;
        _cadr_size = 0;
        _cadr_cap = 0;
        return *this;
    }

    const char *data() const {
        return _data;
    }

    unsigned long long size() const {
        return _size;
    }

    brainfuck& writestr(const char *text = 0) {
        if (text == 0) return *this;
        unsigned long long size = std::strlen(text);
        if (size) {
            if (_extend_data(size)) return *this;
            std::memcpy(_data + _size, text, size);
            _size += size;
        }
        return *this;
    }

    brainfuck& write(const void *buffer = 0, unsigned long long size = 0) {
        if (buffer == 0) return *this;
        if (size) {
            if (_extend_data(size)) return *this;
            std::memcpy(_data + _size, buffer, size);
            _size += size;
        }
        return *this;
    }

    brainfuck& read(void *buffer = 0, unsigned long long size = 0) {
        if (buffer == 0) return *this;
        if (size && _size) std::memcpy(buffer, _data, size);
        return *this;
    }

    brainfuck& readall(void *buffer = 0) {
        if (buffer == 0) return *this;
        if (_size) std::memcpy(buffer, _data, _size);
        return *this;
    }

    brainfuck& fread(FILE *file = 0) {
        if (file == 0) return *this;
        unsigned long long save = std::ftell(file);
        std::fseek(file, 0, 2);
        unsigned long long size = std::ftell(file);
        if (size) {
            if (_extend_data(size)) {
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
            if (_extend_data(size)) {
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
        if (_extend_data(1)) return;
        _data[_size] = '+';
        _size += 1;
    }

    void _minus() {
        if (_extend_data(1)) return;
        _data[_size] = '-';
        _size += 1;
    }

    void _right() {
        if (_extend_data(1)) return;
        _data[_size] = '>';
        _size += 1;
    }

    void _left() {
        if (_extend_data(1)) return;
        _data[_size] = '<';
        _size += 1;
    }

    void _put() {
        if (_extend_data(1)) return;
        _data[_size] = '.';
        _size += 1;
    }

    void _get() {
        if (_extend_data(1)) return;
        _data[_size] = ',';
        _size += 1;
    }

    void _loop() {
        if (_extend_data(1)) return;
        _data[_size] = '[';
        _size += 1;
    }

    void _end() {
        if (_extend_data(1)) return;
        _data[_size] = ']';
        _size += 1;
    }

    void _add(unsigned char count = 1) {
        if (_extend_data(count)) return;
        if (count) std::memset(_data + _size, '+', count);
        _size += count;
    }

    void _sub(unsigned char count = 1) {
        if (_extend_data(count)) return;
        if (count) std::memset(_data + _size, '-', count);
        _size += count;
    }

    void _movr(unsigned long long count = 1) {
        if (_extend_data(count)) return;
        if (count) std::memset(_data + _size, '>', count);
        _size += count;
    }

    void _movl(unsigned long long count = 1) {
        if (_extend_data(count)) return;
        if (count) std::memset(_data + _size, '<', count);
        _size += count;
    }

    void _clear() {
        if (_extend_data(3)) return;
        _data[_size] = '[';
        _data[_size + 1] = '-';
        _data[_size + 2] = ']';
        _size += 3;
    }

    void _set(unsigned char value = 0) {
        if (_extend_data(3 + value)) return;
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
        unsigned long long meta = _alloc(2);
        if (meta == -1) return -1;
        _mov(meta); _clear(); _mov(meta + 1); _clear();
        _mov(pos); _loop();
            _mov(meta); _plus();
            _mov(meta + 1); _plus();
            _mov(pos); _minus();
        _end();
        _mov(meta + 1); _loop();
            _mov(pos); _plus();
            _mov(meta + 1); _minus();
        _end();
        _free(meta + 1, 1);
        return meta;
    }

public:
    brainfuck& _stack() {
        return *this;
    }

    brainfuck& _pop() {
        return *this;
    }

    template<typename T = unsigned long long>
    unsigned long long _alloc(T size = T(1)) {
        if ((unsigned long long)size == 0) return -1;
        unsigned long long count = 0;
        for (unsigned long long i = 0; i < _pos_size; i++) {
            if (_pos_data[i] == 0) {
                count++;
                if (count >= (unsigned long long)size) {
                    if (_extend_cadr_data()) return -1;
                    _cadr_data_data[_cadr_data_size] = cadr(i - count + 1, (unsigned long long)size);
                    _cadr_data_size++;
                    std::memset(_pos_data + i - count + 1, 1, (unsigned long long)size);
                    return i - count + 1;
                }
            }
            else count = 0;
        }
        if (_extend_pos((unsigned long long)size)) return -1;
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

    template<typename T = unsigned long long>
    unsigned long long clone(T pos = T(-1)) {
        if ((unsigned long long)pos == -1) return -1;
        return _map((unsigned long long)pos);
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
            _mov((unsigned long long)pos1); _plus();
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
            _mov((unsigned long long)pos1); _minus();
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
        unsigned long long meta2 = _alloc(2);
        if (meta2 == -1) {
            _free(meta1, 1);
            return *this;
        }
        _mov(meta2 + 1); _clear();
        _mov(meta1); _loop();
            _mov(meta2); _clear();
            _mov((unsigned long long)pos1); _loop();
                _mov(meta2); _plus();
                _mov(meta2 + 1); _plus();
                _mov((unsigned long long)pos1); _minus();
            _end();
            _mov(meta2); _loop();
                _mov((unsigned long long)pos1); _plus();
                _mov(meta2); _minus();
            _end();
        _end();
        _mov((unsigned long long)pos1); _clear();
        _mov(meta2 + 1); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta2 + 1); _minus();
        _end();
        _free(meta1, 1);
        _free(meta2, 2);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& logboolconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        _mov((unsigned long long)pos);
        _set((unsigned char)value ? 1 : 0);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& logbool(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta = _map((unsigned long long)pos2);
        if (meta == -1) return *this;
        _mov((unsigned long long)pos1); _clear();
        _mov(meta); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta); _clear();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& lognotconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        _mov((unsigned long long)pos);
        _set((unsigned char)value ? 0 : 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& lognot(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta = _map((unsigned long long)pos2);
        if (meta == -1) return *this;
        _mov((unsigned long long)pos1); _set(1);
        _mov(meta); _loop();
            _mov((unsigned long long)pos1); _minus();
            _mov(meta); _clear();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& logorconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        if ((unsigned char)value) { _mov((unsigned long long)pos); _set(1); }
        else logbool((unsigned long long)pos, (unsigned long long)pos);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& logor(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos1);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _map((unsigned long long)pos2);
        if (meta2 == -1) {
            _free(meta1, 1);
            return *this;
        }
        _mov((unsigned long long)pos1); _clear();
        _mov(meta1); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta1); _clear();
        _end();
        _mov(meta1); _loop();
            _mov((unsigned long long)pos1); _set(1);
            _mov(meta1); _clear();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& logandconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        if (!(unsigned char)value) return *this;
        else logbool((unsigned long long)pos, (unsigned long long)pos);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& logand(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos1);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _map((unsigned long long)pos2);
        if (meta2 == -1) {
            _free(meta1, 1);
            return *this;
        }
        _mov((unsigned long long)pos1); _clear();
        _mov(meta1); _loop();
            _mov(meta2); _loop();
                _mov((unsigned long long)pos1); _plus();
                _mov(meta2); _clear();
            _end();
            _mov(meta1); _clear();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& logxorconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        if ((unsigned char)value) lognot((unsigned long long)pos, (unsigned long long)pos);
        else logbool((unsigned long long)pos, (unsigned long long)pos);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& logxor(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos1);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _map((unsigned long long)pos2);
        if (meta2 == -1) {
            _free(meta1, 1);
            return *this;
        }
        logbool(meta1, meta1);
        logbool(meta2, meta2);
        _mov((unsigned long long)pos1); _clear();
        _mov(meta2); _loop();
            _mov(meta1); _minus();
            _mov(meta2); _minus();
        _end();
        _mov(meta1); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta1); _clear();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& equalconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        unsigned long long meta = _map((unsigned long long)pos);
        if (meta == -1) return *this;
        _mov((unsigned long long)pos); _set(1);
        _mov(meta); _sub((unsigned char)value); _loop();
            _mov((unsigned long long)pos); _minus();
            _mov(meta); _clear();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& equal(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos1);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _map((unsigned long long)pos2);
        if (meta2 == -1) {
            _free(meta1, 1);
            return *this;
        }
        _mov((unsigned long long)pos1); _set(1);
        _mov(meta2); _loop();
            _mov(meta1); _minus();
            _mov(meta2); _minus();
        _end();
        _mov(meta1); _loop();
            _mov((unsigned long long)pos1); _minus();
            _mov(meta1); _clear();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned char>
    brainfuck& notequalconst(T1 pos = T1(-1), T2 value = T2(0)) {
        if ((unsigned long long)pos == -1) return *this;
        unsigned long long meta = _map((unsigned long long)pos);
        if (meta == -1) return *this;
        _mov((unsigned long long)pos); _clear();
        _mov(meta); _sub((unsigned char)value); _loop();
            _mov((unsigned long long)pos); _plus();
            _mov(meta); _clear();
        _end();
        _free(meta, 1);
        return *this;
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& notequal(T1 pos1 = T1(-1), T2 pos2 = T2(-1)) {
        if ((unsigned long long)pos1 == -1 || (unsigned long long)pos2 == -1) return *this;
        unsigned long long meta1 = _map((unsigned long long)pos1);
        if (meta1 == -1) return *this;
        unsigned long long meta2 = _map((unsigned long long)pos2);
        if (meta2 == -1) {
            _free(meta1, 1);
            return *this;
        }
        _mov((unsigned long long)pos1); _clear();
        _mov(meta2); _loop();
            _mov(meta1); _minus();
            _mov(meta2); _minus();
        _end();
        _mov(meta1); _loop();
            _mov((unsigned long long)pos1); _plus();
            _mov(meta1); _clear();
        _end();
        _free(meta1, 1);
        _free(meta2, 1);
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
