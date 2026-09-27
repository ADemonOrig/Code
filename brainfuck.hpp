#ifndef __GENE_BRAINFUCK_H__
#define __GENE_BRAINFUCK_H__ 1

#include <cstdio>
#include <cstdlib>
#include <cstring>

class brainfuck {
private:
    char *_data = 0;
    unsigned long long _size = 0ull;
    unsigned long long _cap = 0ull;
    unsigned long long _pos = 0ull;
    unsigned char *_pos_data = 0;
    unsigned long long _pos_size = 0ull;
    unsigned long long _pos_cap = 0ull;

    int _extend_buffer(unsigned long long size = 0ull) {
        if (_size + size > _cap) {
            unsigned long long new_cap = _cap ? _cap * 2 : 512;
            while (_size + size > new_cap) new_cap *= 2;
            char *new_data = (char*)std::realloc(_data, new_cap);
            if (new_data == 0) return 1;
            _data = new_data;
            _cap = new_cap;
        }
        return 0;
    }

public:
    class variable {
    public:
        unsigned long long pos = 0ull;
        unsigned long long size = 0ull;

        template<typename T1 = unsigned long long, typename T2 = unsigned long long>
        variable(T1 pos = T1(), T2 size = T2()) {
            this->pos = (unsigned long long)pos;
            this->size = (unsigned long long)size;
        }

        variable(const brainfuck::variable& var) {
            this->pos = var.pos;
            this->size = var.size;
        }

        template<typename T1 = unsigned long long, typename T2 = unsigned long long>
        brainfuck::variable& initialize(T1 pos = T1(), T2 size = T2()) {
            this->pos = (unsigned long long)pos;
            this->size = (unsigned long long)size;
            return *this;
        }

        brainfuck::variable& initialize(const brainfuck::variable& var) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }

        brainfuck::variable& copy(const brainfuck::variable& var = brainfuck::null) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }

        brainfuck::variable clone() {
            return brainfuck::variable(this->pos, this->size);
        }

        unsigned long long get_pos() const {
            return this->pos;
        }

        unsigned long long get_size() const {
            return this->size;
        }

        inline bool isnull() const {
            return this->size == 0ull;
        }

        template<typename T = unsigned long long>
        brainfuck::variable& set_pos(T var = T()) {
            this->pos = (unsigned long long)var;
            return *this;
        }

        template<typename T = unsigned long long>
        brainfuck::variable& set_size(T var = T()) {
            this->size = (unsigned long long)var;
            return *this;
        }

        brainfuck::variable& set_pos(const brainfuck::variable& var) {
            this->pos = var.pos;
            return *this;
        }

        brainfuck::variable& set_size(const brainfuck::variable& var) {
            this->size = var.size;
            return *this;
        }

        template<typename T = long long>
        brainfuck::variable& add_pos(T var = T(1)) {
            this->pos += (long long)var;
            return *this;
        }

        template<typename T = long long>
        brainfuck::variable& sub_pos(T var = T(1)) {
            this->pos -= (long long)var;
            return *this;
        }

        template<typename T = long long>
        brainfuck::variable& add_size(T var = T(1)) {
            this->size += (long long)var;
            return *this;
        }

        template<typename T = long long>
        brainfuck::variable& sub_size(T var = T(1)) {
            this->size -= (long long)var;
            return *this;
        }

        // brainfuck::variable& add_pos(brainfuck::variable var) {
        //     this->pos += var.pos;
        //     return *this;
        // }
        //
        // brainfuck::variable& sub_pos(brainfuck::variable var) {
        //     this->pos -= var.pos;
        //     return *this;
        // }
        //
        // brainfuck::variable& add_size(brainfuck::variable var) {
        //     this->size += var.size;
        //     return *this;
        // }
        //
        // brainfuck::variable& sub_size(brainfuck::variable var) {
        //     this->size -= var.size;
        //     return *this;
        // }

        template<typename T = long long>
        brainfuck::variable& offset(T index = T(1)) {
            if (this->size == 0ull) return *this;
            index = (unsigned long long)index % this->size;
            this->pos += (unsigned long long)index;
            this->size -= (unsigned long long)index;
            return *this;
        }

        brainfuck::variable& offset(const brainfuck::variable& var) {
            if (this->size == 0ull) return *this;
            unsigned long long index = var.pos % this->size;
            this->pos += index;
            this->size -= index;
            return *this;
        }

        operator unsigned long long() const {
            return this->pos;
        }

        operator signed long long() const {
            return (signed long long)this->pos;
        }

        operator int() const {
            return (int)this->pos;
        }

        operator unsigned int() const {
            return (unsigned int)this->pos;
        }

        operator float() const {
            return (float)this->pos;
        }

        operator double() const {
            return (double)this->pos;
        }

        operator long double() const {
            return (long double)this->pos;
        }

        operator bool() const {
            return (bool)this->pos;
        }

        template<typename T = unsigned long long>
        brainfuck::variable& operator=(T pos) {
            this->pos = (unsigned long long)pos;
            return *this;
        }

        brainfuck::variable& operator=(const brainfuck::variable& var) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }

        template<typename T = unsigned long long> inline brainfuck::variable operator+(T var) const { return brainfuck::variable(this->pos + (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator-(T var) const { return brainfuck::variable(this->pos - (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator*(T var) const { return brainfuck::variable(this->pos * (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator/(T var) const { return brainfuck::variable(this->pos / (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator%(T var) const { return brainfuck::variable(this->pos % (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator|(T var) const { return brainfuck::variable(this->pos | (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator&(T var) const { return brainfuck::variable(this->pos & (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator^(T var) const { return brainfuck::variable(this->pos ^ (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator>>(T var) const { return brainfuck::variable(this->pos >> (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline brainfuck::variable operator<<(T var) const { return brainfuck::variable(this->pos << (unsigned long long)var, 0ull); }
        template<typename T = unsigned long long> inline bool operator==(T var) const { return this->pos == (unsigned long long)var; }
        template<typename T = unsigned long long> inline bool operator!=(T var) const { return this->pos != (unsigned long long)var; }
        template<typename T = unsigned long long> inline bool operator>(T var) const { return this->pos > (unsigned long long)var; }
        template<typename T = unsigned long long> inline bool operator<(T var) const { return this->pos < (unsigned long long)var; }
        template<typename T = unsigned long long> inline bool operator>=(T var) const { return this->pos >= (unsigned long long)var; }
        template<typename T = unsigned long long> inline bool operator<=(T var) const { return this->pos <= (unsigned long long)var; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator+=(T var) { this->pos += (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator-=(T var) { this->pos -= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator*=(T var) { this->pos *= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator/=(T var) { this->pos /= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator%=(T var) { this->pos %= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator|=(T var) { this->pos |= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator&=(T var) { this->pos &= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator^=(T var) { this->pos ^= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator>>=(T var) { this->pos >>= (unsigned long long)var; return *this; }
        template<typename T = unsigned long long> inline brainfuck::variable& operator<<=(T var) { this->pos <<= (unsigned long long)var; return *this; }

        bool operator!() const {
            return !(this->pos);
        }

        brainfuck::variable operator~() const {
            return brainfuck::variable(~(this->pos), this->size);
        }

        brainfuck::variable operator+() const {
            return brainfuck::variable(this->pos, this->size);
        }

        brainfuck::variable operator-() const {
            return brainfuck::variable(-(this->pos), this->size);
        }

        brainfuck::variable& operator++() {
            this->pos += 1ull;
            return *this;
        }

        brainfuck::variable operator++(int) {
            brainfuck::variable old = brainfuck::variable(this->pos, this->size);
            this->pos += 1ull;
            return old;
        }

        brainfuck::variable& operator--() {
            this->pos -= 1ull;
            return *this;
        }

        brainfuck::variable operator--(int) {
            brainfuck::variable old = brainfuck::variable(this->pos, this->size);
            this->pos -= 1ull;
            return old;
        }

        unsigned long long* operator&() {
            return &this->pos;
        }

        const unsigned long long* operator&() const {
            return &this->pos;
        }

        template<typename T1 = unsigned long long, typename T2 = unsigned long long>
        brainfuck::variable& operator()(T1 pos = T1(), T2 size = T2()) {
            this->pos = (unsigned long long)pos;
            this->size = (unsigned long long)size;
            return *this;
        }

        brainfuck::variable& operator()(const brainfuck::variable& var) {
            this->pos = var.pos;
            this->size = var.size;
            return *this;
        }
    };

    inline static const brainfuck::variable null = brainfuck::variable(0ull, 0ull);

    template<typename T = const char*>
    brainfuck(T text = T()) {
        write((const char*)text);
    }

    ~brainfuck() {
        if (_cap != 0ull) std::free(_data);
        if (_pos_cap != 0ull) std::free(_pos_data);
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
        if (_cap != 0ull) std::free(_data);
        if (_pos_cap != 0ull) std::free(_pos_data);
        _data = 0;
        _size = 0ull;
        _cap = 0ull;
        _pos = 0ull;
        _pos_data = 0;
        _pos_size = 0ull;
        _pos_cap = 0ull;
        return *this;
    }

    brainfuck& clear() {
        return this->free();
    }

    brainfuck& write(const char *text = 0) {
        if (text == 0) return *this;
        unsigned long long size_text = std::strlen(text);
        if (size_text) return *this;
        if (_extend_buffer(size_text)) return *this;
        std::memcpy(_data + _size, text, size_text);
        _size += size_text;
        return *this;
    }

    brainfuck::variable _alloc(unsigned long long size = 1ull) {
        if (size == 0ull) return brainfuck::null;
        unsigned long long n = 0ull;
        for (unsigned long long i = 0ull; i < _pos_size; i++) {
            if (_pos_data[i] == 0) {
                n++;
                if (n >= size) {
                    for (unsigned long long j = i - n + 1; j <= i; j++) {
                        _pos_data[j] = 1;
                    }
                    return brainfuck::variable(i, size);
                }
            }
            else n = 0ull;
        }
        return brainfuck::variable();
    }

    brainfuck& _free(const brainfuck::variable& var = brainfuck::null) {
        if (var.isnull()) return *this;
        return *this;
    }
};

inline unsigned long long operator+(unsigned long long a, const brainfuck::variable& b) { return a + b.pos; }
inline unsigned long long operator-(unsigned long long a, const brainfuck::variable& b) { return a - b.pos; }
inline unsigned long long operator*(unsigned long long a, const brainfuck::variable& b) { return a * b.pos; }
inline unsigned long long operator/(unsigned long long a, const brainfuck::variable& b) { return a / b.pos; }
inline unsigned long long operator%(unsigned long long a, const brainfuck::variable& b) { return a % b.pos; }
inline unsigned long long operator|(unsigned long long a, const brainfuck::variable& b) { return a | b.pos; }
inline unsigned long long operator&(unsigned long long a, const brainfuck::variable& b) { return a & b.pos; }
inline unsigned long long operator^(unsigned long long a, const brainfuck::variable& b) { return a ^ b.pos; }
inline unsigned long long operator>>(unsigned long long a, const brainfuck::variable& b) { return a >> b.pos; }
inline unsigned long long operator<<(unsigned long long a, const brainfuck::variable& b) { return a << b.pos; }
inline bool operator==(unsigned long long a, const brainfuck::variable& b) { return a == b.pos; }
inline bool operator!=(unsigned long long a, const brainfuck::variable& b) { return a != b.pos; }
inline bool operator>(unsigned long long a, const brainfuck::variable& b) { return a > b.pos; }
inline bool operator<(unsigned long long a, const brainfuck::variable& b) { return a < b.pos; }
inline bool operator>=(unsigned long long a, const brainfuck::variable& b) { return a >= b.pos; }
inline bool operator<=(unsigned long long a, const brainfuck::variable& b) { return a <= b.pos; }

inline signed long long operator+(signed long long a, const brainfuck::variable& b) { return a + b.pos; }
inline signed long long operator-(signed long long a, const brainfuck::variable& b) { return a - b.pos; }
inline signed long long operator*(signed long long a, const brainfuck::variable& b) { return a * b.pos; }
inline signed long long operator/(signed long long a, const brainfuck::variable& b) { return a / b.pos; }
inline signed long long operator%(signed long long a, const brainfuck::variable& b) { return a % b.pos; }
inline signed long long operator|(signed long long a, const brainfuck::variable& b) { return a | b.pos; }
inline signed long long operator&(signed long long a, const brainfuck::variable& b) { return a & b.pos; }
inline signed long long operator^(signed long long a, const brainfuck::variable& b) { return a ^ b.pos; }
inline signed long long operator>>(signed long long a, const brainfuck::variable& b) { return a >> b.pos; }
inline signed long long operator<<(signed long long a, const brainfuck::variable& b) { return a << b.pos; }
inline bool operator==(signed long long a, const brainfuck::variable& b) { return a == b.pos; }
inline bool operator!=(signed long long a, const brainfuck::variable& b) { return a != b.pos; }
inline bool operator>(signed long long a, const brainfuck::variable& b) { return a > b.pos; }
inline bool operator<(signed long long a, const brainfuck::variable& b) { return a < b.pos; }
inline bool operator>=(signed long long a, const brainfuck::variable& b) { return a >= b.pos; }
inline bool operator<=(signed long long a, const brainfuck::variable& b) { return a <= b.pos; }

inline int operator+(int a, const brainfuck::variable& b) { return a + b.pos; }
inline int operator-(int a, const brainfuck::variable& b) { return a - b.pos; }
inline int operator*(int a, const brainfuck::variable& b) { return a * b.pos; }
inline int operator/(int a, const brainfuck::variable& b) { return a / b.pos; }
inline int operator%(int a, const brainfuck::variable& b) { return a % b.pos; }
inline int operator|(int a, const brainfuck::variable& b) { return a | b.pos; }
inline int operator&(int a, const brainfuck::variable& b) { return a & b.pos; }
inline int operator^(int a, const brainfuck::variable& b) { return a ^ b.pos; }
inline int operator>>(int a, const brainfuck::variable& b) { return a >> b.pos; }
inline int operator<<(int a, const brainfuck::variable& b) { return a << b.pos; }
inline bool operator==(int a, const brainfuck::variable& b) { return a == b.pos; }
inline bool operator!=(int a, const brainfuck::variable& b) { return a != b.pos; }
inline bool operator>(int a, const brainfuck::variable& b) { return a > b.pos; }
inline bool operator<(int a, const brainfuck::variable& b) { return a < b.pos; }
inline bool operator>=(int a, const brainfuck::variable& b) { return a >= b.pos; }
inline bool operator<=(int a, const brainfuck::variable& b) { return a <= b.pos; }

inline float operator+(float a, const brainfuck::variable& b) { return a + (float)b.pos; }
inline float operator-(float a, const brainfuck::variable& b) { return a - (float)b.pos; }
inline float operator*(float a, const brainfuck::variable& b) { return a * (float)b.pos; }
inline float operator/(float a, const brainfuck::variable& b) { return a / (float)b.pos; }
inline bool operator==(float a, const brainfuck::variable& b) { return a == (float)b.pos; }
inline bool operator!=(float a, const brainfuck::variable& b) { return a != (float)b.pos; }
inline bool operator>(float a, const brainfuck::variable& b) { return a > (float)b.pos; }
inline bool operator<(float a, const brainfuck::variable& b) { return a < (float)b.pos; }
inline bool operator>=(float a, const brainfuck::variable& b) { return a >= (float)b.pos; }
inline bool operator<=(float a, const brainfuck::variable& b) { return a <= (float)b.pos; }

inline double operator+(double a, const brainfuck::variable& b) { return a + (double)b.pos; }
inline double operator-(double a, const brainfuck::variable& b) { return a - (double)b.pos; }
inline double operator*(double a, const brainfuck::variable& b) { return a * (double)b.pos; }
inline double operator/(double a, const brainfuck::variable& b) { return a / (double)b.pos; }
inline bool operator==(double a, const brainfuck::variable& b) { return a == (double)b.pos; }
inline bool operator!=(double a, const brainfuck::variable& b) { return a != (double)b.pos; }
inline bool operator>(double a, const brainfuck::variable& b) { return a > (double)b.pos; }
inline bool operator<(double a, const brainfuck::variable& b) { return a < (double)b.pos; }
inline bool operator>=(double a, const brainfuck::variable& b) { return a >= (double)b.pos; }
inline bool operator<=(double a, const brainfuck::variable& b) { return a <= (double)b.pos; }

inline long double operator+(long double a, const brainfuck::variable& b) { return a + b.pos; }
inline long double operator-(long double a, const brainfuck::variable& b) { return a - b.pos; }
inline long double operator*(long double a, const brainfuck::variable& b) { return a * b.pos; }
inline long double operator/(long double a, const brainfuck::variable& b) { return a / b.pos; }
inline bool operator==(long double a, const brainfuck::variable& b) { return a == (long double)b.pos; }
inline bool operator!=(long double a, const brainfuck::variable& b) { return a != (long double)b.pos; }
inline bool operator>(long double a, const brainfuck::variable& b) { return a > (long double)b.pos; }
inline bool operator<(long double a, const brainfuck::variable& b) { return a < (long double)b.pos; }
inline bool operator>=(long double a, const brainfuck::variable& b) { return a >= (long double)b.pos; }
inline bool operator<=(long double a, const brainfuck::variable& b) { return a <= (long double)b.pos; }

#endif
