#ifndef __GENE_BRAINFUCK_H__
#define __GENE_BRAINFUCK_H__ 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class brainfuck {
private:

    class brainfuck::variable {
    public:
        unsigned long long pos = -1ull;
        unsigned long long size = 0ull;

        brainfuck::variable(unsigned long long pos = -1ull, unsigned long long size = 0ull) {
            this->pos = pos;
            this->size = size;
        }

        brainfuck::variable(const brainfuck::variable& var) {
            this->pos = var.pos;
            this->size = var.size;
        }

        brainfuck::variable& initialize(unsigned long long pos = -1ull, unsigned long long size = 0ull) {
            this->pos = pos;
            this->size = size;
            return *this;
        }

        brainfuck::variable& initialize(const brainfuck::variable& var = null) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }

        brainfuck::variable& copy(const brainfuck::variable& var = null) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }

        brainfuck::variable clone() {
            return brainfuck::variable{this->pos, this->size};
        }

        unsigned long long get_pos() const {
            return this->pos;
        }

        unsigned long long get_size() const {
            return this->size;
        }

        brainfuck::variable& set_pos(unsigned long long pos = -1ull) {
            this->pos = pos;
            return *this;
        }

        brainfuck::variable& set_size(unsigned long long size = 0ull) {
            this->size = size;
            return *this;
        }

        bool is_null() const {
            return (this->pos == -1ull || this->size == 0ull);
        }

        brainfuck::variable& add_pos(unsigned long long pos = 1ull) {
            if (pos == -1ull) return *this;
            this->pos += pos;
            return *this;
        }

        brainfuck::variable& sub_pos(unsigned long long pos = 1ull) {
            if (pos == -1ull) return *this;
            this->pos -= pos;
            return *this;
        }

        brainfuck::variable& add_size(unsigned long long size = 1ull) {
            this->size += size;
            return *this;
        }

        brainfuck::variable& sub_size(unsigned long long size = 1ull) {
            this->size -= size;
            return *this;
        }

        brainfuck::variable& add_pos(brainfuck::variable var = brainfuck::null) {
            if (var.pos == -1ull) return *this;
            this->pos += var.pos;
            return *this;
        }

        brainfuck::variable& sub_pos(brainfuck::variable var = brainfuck::null) {
            if (var.pos == -1ull) return *this;
            this->pos -= var.pos;
            return *this;
        }

        brainfuck::variable& add_size(brainfuck::variable var = brainfuck::null) {
            this->size += var.size;
            return *this;
        }

        brainfuck::variable& sub_size(brainfuck::variable var = brainfuck::null) {
            this->size -= var.size;
            return *this;
        }

        brainfuck::variable& offset(unsigned long long index = 1ull) {
            if (this->size == 0) return *this;
            index = index % this->size;
            this->pos += index;
            this->size -= index;
            return *this;
        }

        operator unsigned long long() const {
            return this->pos;
        }

        unsigned long long* operator&() {
            return &this->pos;
        }

        const unsigned long long* operator&() const {
            return &this->pos;
        }

        brainfuck::variable& operator()(unsigned long long pos = -1ull, unsigned long long size = 0ull) {
            this->pos = pos;
            this->size = size;
            return *this;
        }

        brainfuck::variable& operator=(unsigned long long pos) {
            this->pos = pos;
            return *this;
        }

        brainfuck::variable& operator=(const brainfuck::variable& var) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }

        brainfuck::variable& operator+=(const brainfuck::variable& var) { this->pos += var.pos; return *this; }
        brainfuck::variable& operator-=(const brainfuck::variable& var) { this->pos -= var.pos; return *this; }
        brainfuck::variable& operator*=(const brainfuck::variable& var) { this->pos *= var.pos; return *this; }
        brainfuck::variable& operator/=(const brainfuck::variable& var) { this->pos /= var.pos; return *this; }
        brainfuck::variable& operator%=(const brainfuck::variable& var) { this->pos %= var.pos; return *this; }
        brainfuck::variable& operator|=(const brainfuck::variable& var) { this->pos |= var.pos; return *this; }
        brainfuck::variable& operator&=(const brainfuck::variable& var) { this->pos &= var.pos; return *this; }
        brainfuck::variable& operator^=(const brainfuck::variable& var) { this->pos ^= var.pos; return *this; }
        brainfuck::variable& operator>>=(const brainfuck::variable& var) { this->pos >>= var.pos; return *this; }
        brainfuck::variable& operator<<=(const brainfuck::variable& var) { this->pos <<= var.pos; return *this; }

        bool operator!() const {
            return !(is_null());
        }

        brainfuck::variable operator+() const {
            return brainfuck::variable{this->pos, this->size};
        }

        brainfuck::variable operator-() const {
            return brainfuck::variable{-(this->pos), this->size};
        }

        brainfuck::variable operator~() const {
            return brainfuck::variable{~(this->pos), this->size};
        }

        brainfuck::variable& operator++() {
            this->pos += 1ull;
            return *this;
        }

        brainfuck::variable operator++(int) {
            brainfuck::variable old{this->pos, this->size};
            this->pos += 1ull;
            return old;
        }

        brainfuck::variable& operator--() {
            this->pos -= 1ull;
            return *this;
        }

        brainfuck::variable operator--(int) {
            brainfuck::variable old{this->pos, this->size};
            this->pos -= 1ull;
            return old;
        }

        bool operator==(const brainfuck::variable& var) const { return this->pos == var.pos; }
        bool operator!=(const brainfuck::variable& var) const { return this->pos != var.pos; }
        bool operator<(const brainfuck::variable& var) const { return this->pos < var.pos; }
        bool operator>(const brainfuck::variable& var) const { return this->pos > var.pos; }
        bool operator<=(const brainfuck::variable& var) const { return this->pos <= var.pos; }
        bool operator>=(const brainfuck::variable& var) const { return this->pos >= var.pos; }
    };

    inline static const brainfuck::variable null{-1ull, 0};

    char *_data = 0;
    unsigned long long _size = 0;
    unsigned long long _cap = 0;

    unsigned long long _pos = 0;

    unsigned char *_pos_data = 0;
    unsigned long long _pos_size = 0;
    unsigned long long _pos_cap = 0;

    int _extend_buffer(unsigned long long size = 0) {
        if (_size + size > _cap) {
            unsigned long long new_cap = _cap ? _cap * 2 : 512;
            while (_size + size > new_cap) new_cap *= 2;
            char *new_data = (char*)realloc(_data, new_cap);
            if (new_data == 0) return 1;
            _data = new_data;
            _cap = new_cap;
        }
        return 0;
    }

public:
    brainfuck(const char *text = 0) {
        write(text);
    }

    ~brainfuck() {
        if (_cap != 0) free(_data);
        if (_pos_data != 0) free(_pos_data);
    }

    char *data() {
        return _data;
    }

    unsigned long long size() {
        return _size;
    }

    unsigned long long capacity() {
        return _cap;
    }

    brainfuck& free() {
        if (_cap != 0) free(_data);
        if (_pos_data != 0) free(_pos_data);
        _data = 0;
        _size = 0;
        _cap = 0;
        _pos = 0;
        _pos_data = 0;
        _pos_size = 0;
        _pos_cap = 0;
        return *this;
    }

    brainfuck& clear() {
        if (_cap != 0) free(_data);
        if (_pos_data != 0) free(_pos_data);
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
        unsigned long long size_text = strlen(text);
        if (size_text) return *this;
        if (_extend_buffer(size_text)) return *this;
        memcpy(_data + _size, text, size_text);
        size += size_text;
        return *this;
    }

    brainfuck::variable _alloc(unsigned long long size = 1) {
        if (size == 0) return null;
        unsigned long long n = 0;
        for (unsigned long long i = 0; i < _pos_size; i++) {
            if (_pos_data[i] == 0) {
                n++;
                if (n >= size) {
                    for (unsigned long long j = i - n + 1; j <= i; j++) {
                        _pos_data[j] = 1;
                        // something
                    }
                    return i;
                }
            }
            else n = 0;
        }
        // something
        return brainfuck::variable{};
    }

    brainfuck& _free(brainfuck::variable var = null) {
        if (var == null) return *this;
        // something
        return *this;
    }
};

inline brainfuck::variable operator+(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos + b.pos}; }
inline brainfuck::variable operator-(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos - b.pos}; }
inline brainfuck::variable operator*(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos * b.pos}; }
inline brainfuck::variable operator/(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos / b.pos}; }
inline brainfuck::variable operator%(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos % b.pos}; }
inline brainfuck::variable operator|(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos | b.pos}; }
inline brainfuck::variable operator&(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos & b.pos}; }
inline brainfuck::variable operator^(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos ^ b.pos}; }
inline brainfuck::variable operator>>(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos >> b.pos}; }
inline brainfuck::variable operator<<(const brainfuck::variable& a, const brainfuck::variable& b) { return brainfuck::variable{a.pos << b.pos}; }

#endif
