#ifndef __GENE_BRAINFUCK_H__
#define __GENE_BRAINFUCK_H__ 1

#include <cstdio>
#include <cstdlib>
#include <cstring>

class brainfuck {
private:
    char *_data = 0;
    unsigned long long _size = 0;
    unsigned long long _cap = 0;
    unsigned long long _pos = 0;
    unsigned char *_pos_data = 0;
    unsigned long long _pos_size = 0;
    unsigned long long _pos_cap = 0;

    int _extend_buffer_size(unsigned long long size = 0) {
        if (_size + size >= _cap) {
            unsigned long long new_cap = _cap ? _cap * 2 : 512;
            while (_size + size > new_cap) new_cap *= 2;
            char *new_data = (char*)std::realloc(_data, new_cap);
            if (new_data == 0) return 1;
            _data = new_data;
            _cap = new_cap;
            std::memset(new_data + _size, 0, new_cap - _size);
        }
        return 0;
    }

    void _plus() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = '+';
        _size++;
    }

    void _minus() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = '-';
        _size++;
    }

    void _right() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = '>';
        _size++;
    }

    void _left() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = '<';
        _size++;
    }

    void _add(unsigned long long count = 1) {
        if (_extend_buffer_size(count)) return;
        if (count) std::memset(_data + _size, '+', count);
        _size += count;
    }

    void _sub(unsigned long long count = 1) {
        if (_extend_buffer_size(count)) return;
        if (count) std::memset(_data + _size, '-', count);
        _size += count;

    }

    void _movr(unsigned long long count = 1) {
        if (_extend_buffer_size(count)) return;
        if (count) std::memset(_data + _size, '>', count);
        _size += count;
        _pos += count;
    }

    void _movl(unsigned long long count = 1) {
        if (_extend_buffer_size(count)) return;
        if (count) std::memset(_data + _size, '<', count);
        _size += count;
        _pos -= count;
    }

    void _put() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = '.';
        _size += 1;
    }

    void _get() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = ',';
        _size += 1;
    }

    void _loop() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = '[';
        _size += 1;
    }

    void _end() {
        if (_extend_buffer_size(1)) return;
        _data[_size] = ']';
        _size += 1;
    }

    void _clear() {
        if (_extend_buffer_size(3)) return;
        _data[_size] = '[';
        _data[_size + 1] = '-';
        _data[_size + 2] = ']';
        _size += 3;
    }

    void _set(unsigned char value = 0) {
        if (_extend_buffer_size(value + 3)) return;
        _data[_size] = '[';
        _data[_size + 1] = '-';
        _data[_size + 2] = ']';
        if (value) std::memset(_data + _size + 3, '+', value);
        _size += value + 3;
    }

    void _mov(unsigned long long addr = 0) {
        if (addr > _pos) _movr(addr - _pos);
        else if (addr < _pos) _movl(_pos - addr);
    }

public:
    class variable {
    public:
        unsigned long long pos = 0;
        unsigned long long size = 0;

        template<typename T1 = unsigned long long, typename T2 = unsigned long long>
        variable(T1 pos = T1(), T2 size = T2()) {
            this->pos = (unsigned long long)pos;
            this->size = (unsigned long long)size;
        }

        variable(brainfuck::variable var) {
            this->pos = var.pos;
            this->size = var.size;
        }
    };

    inline static const brainfuck::variable null = brainfuck::variable(0, 0);

    brainfuck(const void *text = 0) {
        write(text);
    }

    ~brainfuck() {
        if (_cap) std::free(_data);
        if (_pos_cap) std::free(_pos_data);
    }

    inline const char *data() {
        if (_cap) return _data;
        return "";
    }

    inline unsigned long long size() {
        return _size;
    }

    inline unsigned long long capacity() {
        return _cap;
    }

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
        _pos = 0;
        _pos_data = 0;
        _pos_size = 0;
        _pos_cap = 0;
        return *this;
    }

    brainfuck& write(const char *text = 0) {
        if (text == 0) return *this;
        unsigned long long size = std::strlen(text);
        if (size == 0) return *this;
        if (_extend_buffer_size(size)) return *this;
        std::memcpy(_data + _size, text, size);
        _size += size;
        return *this;
    }

    brainfuck& read(const void *data = 0, unsigned long long size = 0) {
        if (data == 0) return *this;
        if (size == 0) return *this;
        if (_extend_buffer_size(size)) return *this;
        std::memcpy(_data + _size, data, size);
        _size += size;
        return *this;
    }

    brainfuck& fread(FILE *f = 0) {
        if (f == 0) return *this;
        unsigned long long save = std::ftell(f);
        std::fseek(f, 0, 2);
        unsigned long long size = std::ftell(f);
        if (size == 0) {
            std::fseek(f, save, 0);
            return *this;
        }
        if (_extend_buffer_size(size)) {
            std::fseek(f, save, 0);
            return *this;
        }
        std::fseek(f, 0, 0);
        std::fread(_data + _size, 1, size, f);
        std::fseek(f, save, 0);
        return *this;
    }

    brainfuck& fread(const char *path = 0) {
        if (path == 0) return *this;
        FILE *f = std::fopen(path, "rb");
        if (f == 0) return *this;
        std::fseek(f, 0, 2);
        unsigned long long size = std::ftell(f);
        if (size == 0) {
            std::fclose(f);
            return *this;
        }
        if (_extend_buffer_size(size)) {
            std::fclose(f);
            return *this;
        }
        std::fseek(f, 0, 0);
        std::fread(_data + _size, 1, size, f);
        std::fclose(f);
        return *this;
    }

    brainfuck& fwrite(FILE *f = 0) {
        if (f == 0) return *this;
        if (_size) {
            unsigned long long save = std::ftell(f);
            std::fseek(f, 0, 0);
            std::fwrite(_data, 1, _size, f);
            std::fseek(f, save, 0);
        }
        return *this;
    }

    brainfuck& fwrite(const char *path = 0) {
        if (path == 0) return *this;
        FILE *f = std::fopen(path, "wb");
        if (f == 0) return *this;
        if (_size) {
            std::fseek(f, 0, 0);
            std::fwrite(_data, 1, _size, f);
        }
        std::fclose(f);
        return *this;
    }

    brainfuck& fappend(FILE *f = 0) {
        if (f == 0) return *this;
        if (_size) std::fwrite(_data, 1, _size, f);
        return *this;
    }

    brainfuck& fappend(const char *path = 0) {
        if (path == 0) return *this;
        FILE *f = std::fopen(path, "ab");
        if (f == 0) return *this;
        if (_size) std::fwrite(_data, 1, _size, f);
        std::fclose(f);
        return *this;
    }

    template<typename T = unsigned long long>
    brainfuck::variable _alloc(T size = T(1)) {
        if ((unsigned long long)size == 0) return brainfuck::null;
        unsigned long long n = 0;
        for (unsigned long long i = 0; i < _pos_size; i++) {
            if (_pos_data[i] == 0) {
                n++;
                if (n >= (unsigned long long)size) {
                    std::memset(_pos_data + i - n + 1, 1, size);
                    return brainfuck::variable(i, (unsigned long long)size);
                }
            }
            else n = 0;
        }
        if (_pos_size + (unsigned long long)size > _pos_cap) {
            unsigned long long new_pos_cap = _pos_cap ? _pos_cap * 2 : 64;
            while (_pos_size + (unsigned long long)size > new_pos_cap) new_pos_cap *= 2;
            unsigned char *new_pos_data = (unsigned char*)std::realloc(_pos_data, new_pos_cap);
            if (new_pos_data == 0) return brainfuck::null;
            _pos_data = new_pos_data;
            _pos_cap = new_pos_cap;
        }
        unsigned long long tmp = _pos_size;
        std::memset(_pos_data + _pos_size, 1, (unsigned long long)size);
        _pos_size += (unsigned long long)size;
        return brainfuck::variable(tmp, (unsigned long long)size);
    }

    template<typename T1 = unsigned long long, typename T2 = unsigned long long>
    brainfuck& _free(T1 pos = T1(), T2 size = T2()) {
        if ((unsigned long long)size == 0) return *this;
        if ((unsigned long long)pos >= _pos_size) return *this;
        if ((unsigned long long)size > _pos_size - (unsigned long long)pos) return *this;
        std::memset(_pos_data + (unsigned long long)pos, 0, (unsigned long long)size);
        return *this;
    }

    brainfuck& _free(brainfuck::variable var) {
        if (var.size == 0) return *this;
        if (var.pos >= _pos_size) return *this;
        if (var.size >= _pos_size - var.pos) return *this;
        std::memset(_pos_data + var.pos, 0, var.size);
        return *this;
    }

    template<typename T = unsigned char>
    brainfuck& mov(brainfuck::variable var = brainfuck::null, T value = T()) {
        _mov(var.pos);
        _set((unsigned char)value);
        return *this;
    }

    brainfuck& mov(brainfuck::variable var1, brainfuck::variable var2) {
        if (var1.size == 0) return *this;
        if (var2.size == 0) return *this;
        brainfuck::variable meta = _alloc(1);
        if (meta.size == 0) return *this;
        _mov(var1.pos);
        _clear();
        _mov(meta.pos);
        _clear();
        _mov(var2.pos);
        _loop();
        _mov(var1.pos);
        _plus();
        _mov(meta.pos);
        _plus();
        _mov(var2.pos);
        _minus();
        _end();
        _mov(meta.pos);
        _loop();
        _mov(var2.pos);
        _plus();
        _mov(meta.pos);
        _minus();
        _end();
        _free(meta);
        return *this;
    }
};

#endif
