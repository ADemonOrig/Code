#ifndef __BF_GENE_H__
#define __BF_GENE_H__ 1

#include <cstdio>
#include <cstdlib>
#include <cstring>

char *_bf_data = 0;
unsigned long long _bf_size = 0;
unsigned long long _bf_cap = 0;
unsigned char *_bf_pos_data = 0;
unsigned long long _bf_pos_size = 0;
unsigned long long _bf_pos_cap = 0;
unsigned long long _bf_pos = 0;

#undef brainfuck_code
#undef brainfuck_size
#undef bf_code
#undef bf_size
#define brainfuck_code _bf_data
#define brainfuck_size _bf_size
#define bf_code _bf_data
#define bf_size _bf_size

int _bf_data_extend(unsigned long long size = 1) {
    if (_bf_size + size >= _bf_cap) {
        unsigned long long __cap = _bf_cap ? _bf_cap << 1 : 512;
        while (_bf_size + size >= _bf) __cap <<= 1;
        char *__data = (char*)std::realloc(_bf_data, __cap);
        if (__data == 0) return 1;
        _bf_data = __data;
        _bf_cap = __cap;
        std::memset(_bf_data + _bf_size, 0, _bf_cap - _bf_size);
    }
    return 0;
}

int _bf_pos_data_extend(unsigned long long size = 1) {
    if (_bf_pos_size + size >= _bf_pos_cap) {
        unsigned long long __cap = _bf_pos_cap ? _bf_pos_cap << 1 : 128;
        while (_bf_pos_size + size >= __cap) __cap <<= 1;
        char *__data = (char*)std::realloc(_bf_pos_data, __cap);
        if (__data == 0) return 1;
        _bf_pos_data = __data;
        _bf_pos_cap = __cap;
        std::memset(_bf_pos_data + _bf_pos_size, 0, _bf_pos_cap - _bf_pos_size);
    }
    return 0;
}

unsigned long long _bf_alloc(unsigned long long size = 1) {
    if (size == 0) return -1;
    unsigned long long count = 0;
    for (unsigned long long i = 0; i < _bf_pos_size; i++) {
        if (_bf_pos_data[i] == 0) {
            count++;
            if (count >= size) {
                std::memset(_bf_pos_data + i - size + 1, 1, size);
                return i;
            }
        } else count = 0;
    }
    if (_bf_pos_data_extend(size)) return -1;
    unsigned long long temp = _bf_pos_size;
    std::memset(_bf_pos_data + _bf_pos_size, 1, size);
    _bf_pos_size += size;
    return temp;
}

int _bf_free(unsigned long long pos = -1, unsigned long long size = 1) {
    if (pos == -1 || size == 0) return 1;
    if (pos >= _bf_pos_size) return 1;
    if ((_bf_pos_size - pos) > size) return 1;
    std::memset(_bf_pos_data + pos, 0, size);
    return 0;
}

int _bf_add(long long count = 1) {
    if (count > 0) {
        if (_bf_data_extend(count)) return 1;
        std::memset(_bf_data + _bf_size, '+', count);
        _bf_size += count;
    }
    else if (count < 0) {
        if (_bf_data_extend(-count)) return 1;
        std::memset(_bf_data + _bf_size, '-', -count);
        _bf_size += -count;
    }
}

int _bf_sub(long long count = 1) {
    return _bf_add(-count);
}

int _bf_mov(unsigned long long pos = -1) {
    if (pos == -1) return 1;
    if (_bf_pos > pos) {
        if (_bf_data_extend(_bf_pos - pos)) return 1;
        std::memset(_bf_data + _bf_size, '<', _bf_pos - pos);
        _bf_size += _bf_pos - pos;
        _pos = pos;
    }
    else if (_bf_pos < pos) {
        if (_bf_data_extend(pos - _bf_pos)) return 1;
        std::memset(_bf_data + _bf_size, '>', pos - _bf_pos);
        _bf_size += pos - _bf_pos;
        _pos = pos;
    }
    return 0;
}

int _bf_clear() {
    if (_bf_data_extend(3)) return 1;
    _bf_data[_bf_size] = '[';
    _bf_data[_bf_size + 1] = '-';
    _bf_data[_bf_size + 2] = ']';
    _bf_size += 3;
    return 0;
}

int _bf_set(unsigned char value = 0) {
    if (_bf_data_extend(value + 3)) return 1;
    _bf_data[_bf_size] = '[';
    _bf_data[_bf_size + 1] = '-';
    _bf_data[_bf_size + 2] = ']';
    std::memset(_bf_data + _bf_size + 3, '+', value);
    _bf_size += value + 3;
    return 0;
}

int _bf_put() {
    if (_bf_data_extend(1)) return 1;
    _bf_data[_bf_size] = '.';
    _bf_size++;
    return 0;
}

int _bf_get() {
    if (_bf_data_extend(1)) return 1;
    _bf_data[_bf_size] = ',';
    _bf_size++;
    return 0;
}

int _bf_loop() {
    if (_bf_data_extend(1)) return 1;
    _bf_data[_bf_size] = '[';
    _bf_size++;
    return 0;
}

int _bf_end() {
    if (_bf_data_extend(1)) return 1;
    _bf_data[_bf_size] = ']';
    _bf_size++;
    return 0;
}

class cell {
private:
    unsigned long long _pos = -1;
    unsigned long long _size = 0;

public:
    cell() = default;

    cell(unsigned long long size) {
        _pos = _bf_alloc(size);
        if (_pos == -1) return;
        _size = size;
    }

    cell(cell c) {
        _pos = c.pos();
        _size = c.size();
    }

    unsigned long long pos() const {
        return _pos;
    }

    unsigned long long size() const {
        return _size;
    }

    cell& pos(unsigned long long new_pos) {
        _pos = new_pos;
        return *this;
    }

    cell& size(unsigned long long new_size) {
        _size = new_size;
        return *this;
    }

    cell& copy(cell c = cell()) {
        _pos = c.pos();
        _size = c.size();
        return *this;
    }

    cell clone() const {
        return cell(_pos, _size);
    }

    cell& null() {
        _pos = -1;
        _size = 0;
        return *this;
    }

    bool isnull() const {
        return (_pos == -1) || (_size == 0);
    }

    cell& free() {
        _bf_free(_pos, _size);
        _pos = -1;
        _size = 0;
        return *this;
    }

    cell& alloc(unsigned long long size = 1) {
        _pos = _bf_alloc(size);
        if (_pos != -1) _size = size;
        else _size = 0;
        return *this;
    }

    template<typename T = unsigned char>
    cell& operator=(T v) const {
        if (isnull()) return *this;
        _bf_mov(_pos);
        _bf_set((unsigned char)v);
        return *this;
    }

    cell& operator=(cell c) const {
        if (isnull() || c.isnull()) return *this;
        unsigned long long meta = _bf_alloc(1);
        if (meta == -1) return *this;
        _bf_mov(meta); _bf_clear();
        _bf_mov(_pos); _bf_clear();
        _bf_mov(c.pos()); _bf_loop();
            _bf_mov(_pos); _bf_add(1);
            _bf_mov(meta); _bf_add(1);
            _bf_mov(c.pos()); _bf_sub(1);
        _bf_end();
        _bf_mov(meta); _bf_loop();
            _bf_mov(c.pos()); _bf_add(1);
            _bf_mov(meta); _bf_sub(1);
        _bf_end();
        _bf_free(meta, 1);
        return *this;
    }

    template<typename T = unsigned char>
    cell& operator+=(T v) const {
        if (isnull()) return *this;
        _bf_mov(_pos);
        _bf_add((unsigned char)v);
        return *this;
    }

    cell& operator+=(const cell c) const {
        if (isnull() || c.isnull()) return *this;
        unsigned long long meta = _bf_alloc(1);
        if (meta == -1) return *this;
        _bf_mov(meta); _bf_clear();
        _bf_mov(c.pos()); _bf_loop();
            _bf_mov(_pos); _bf_add(1);
            _bf_mov(meta); _bf_add(1);
            _bf_mov(c.pos()); _bf_sub(1);
        _bf_end();
        _bf_mov(meta); _bf_loop();
            _bf_mov(c.pos()); _bf_add(1);
            _bf_mov(meta); _bf_sub(1);
        _bf_end();
        _bf_free(meta, 1);
        return *this;
    }

    template<typename T = unsigned char>
    cell& operator-=(T v) const {
        if (isnull()) return *this;
        _bf_mov(_pos);
        _bf_sub((unsigned char)v);
        return *this;
    }

    cell& operator-=(const cell c) const {
        if (isnull() || c.isnull()) return *this;
        unsigned long long meta = _bf_alloc(1);
        if (meta == -1) return *this;
        _bf_mov(meta); _bf_clear();
        _bf_mov(c.pos()); _bf_loop();
            _bf_mov(_pos); _bf_sub(1);
            _bf_mov(meta); _bf_add(1);
            _bf_mov(c.pos()); _bf_sub(1);
        _bf_end();
        _bf_mov(meta); _bf_loop();
            _bf_mov(c.pos()); _bf_add(1);
            _bf_mov(meta); _bf_sub(1);
        _bf_end();
        _bf_free(meta, 1);
        return *this;
    }

    template<typename T = unsigned char>
    cell& operator*=(T v) const {
        if (isnull()) return *this;
        unsigned long long meta = _bf_alloc(1);
        if (meta == -1) return *this;
        _bf_mov(meta); _bf_clear();
        _bf_mov(_pos); _bf_loop();
            _bf_mov(meta); _bf_add((unsigned char)v);
            _bf_mov(_pos); _bf_sub(1);
        _bf_end();
        _bf_mov(meta); _bf_loop();
            _bf_mov(_pos); _bf_add(1);
            _bf_mov(meta); _bf_sub(1);
        _bf_end();
        _bf_free(meta, 1);
        return *this;
    }

    cell& operator*=(const cell c) const {
        if (isnull() || c.isnull()) return *this;
        unsigned long long meta = _bf_alloc(2);
        if (meta == -1) return *this;
        _bf_mov(meta); _bf_clear();
        _bf_mov(c.pos()); _bf_loop();
            _bf_mov(c.pos()); _bf_sub(1);
        _bf_end();
        _bf_free(meta, 2);
        return *this;
    }
};

#endif
