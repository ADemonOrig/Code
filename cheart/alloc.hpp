#ifndef __ALLOC_HPP__
#define __ALLOC_HPP__ 1

#include <cstdlib>

namespace heart
{
    using flagt = bool;
    using boolean = bool;
    using bytet = unsigned char;
    using sizet = signed long long int;
    using usizet = unsigned long long int;
    using ptrt = unsigned long long int;
    using indext = signed long long int;
    using ssize = signed long long int;
    using usize = unsigned long long int;

    inline constexpr int free(void *p = 0) noexcept {
        if (p == 0) return 1;
        std::free(p);
        return 0;
    }

    inline constexpr void *alloc(usizet size = 1) noexcept {
        if (size == 0) return 0;
        return std::malloc(size);
    }

    inline constexpr void *allocNull(usizet size = 1, usizet sizeone = 1) noexcept {
        if (size == 0 || sizeone == 0) return 0;
        return std::calloc(sizeone, size);
    }

    inline constexpr void *realloc(void *p = 0, usizet size = 0) noexcept {
        if (p && size) return std::realloc(p, size);
        if (p) std::free(p);
        if (size) return std::malloc(size);
        return 0;
    }

    inline constexpr void *grow(void *p = 0, usizet size = 0, usizet *cap = 0, usizet extend = 1) noexcept {
        usizet _cap = cap ? *cap : 0;
        usizet _size = size + extend;
        if (_size == 0) return 0;
        if (_size > _cap) {
            if (_cap == 0) _cap = _size;
            while (_size > _cap) _cap <<= 1;
            void *np = 0;
            if (p) np = std::realloc(p, _cap);
            else np = std::malloc(_cap);
            if (np == 0) return 0;
            if (cap) *cap = _cap;
            return np;
        }
        return p;
    }

    inline constexpr void *growNull(void *p = 0, usizet size = 0, usizet *cap = 0, usizet extend = 1) noexcept {
        usizet _cap = cap ? *cap : 0;
        usizet _size = size + extend;
        if (_size == 0) return 0;
        if (_size > _cap) {
            if (_cap == 0) _cap = _size;
            while (_size > _cap) _cap <<= 1;
            if (p) p = std::realloc(p, _cap);
            else p = std::malloc(_cap);
            if (p == 0) return 0;
            if (cap) *cap = _cap;
        }
        return p;
    }
}

#endif
