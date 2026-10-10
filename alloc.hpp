#ifndef __ALLOC_H__
#define __ALLOC_H__ 1

#include <cstdlib>

namespace memory {
    inline constexpr bool free(void *p) noexcept {
        if (p == 0) return true;
        std::free(p);
        return false;
    }

    inline constexpr void *alloc(unsigned long long size = 0) noexcept {
        if (size == 0) return 0;
        return std::malloc(size);
    }

    inline constexpr void *allocNull(unsigned long long size = 0) noexcept {
        if (size == 0) return 0;
        return std::calloc(size, 1);
    }

    inline constexpr void *allocN(unsigned long long size = 0, unsigned long long sizeone = 1) noexcept {
        if (size == 0 || sizeone == 0) return 0;
        return std::malloc(size * sizeone);
    }

    inline constexpr void *allocNullN(unsigned long long size = 0, unsigned long long sizeone = 1) noexcept {
        if (size == 0 || sizeone == 0) return 0;
        return std::calloc(size, sizeone);
    }

    inline constexpr void *realloc(void *p = 0, unsigned long long size = 0) noexcept {
        if (size == 0) {
            if (p != 0) std::free(p);
            return 0;
        }
        if (p == 0) return std::malloc(size);
        return std::realloc(p, size);
    }

    inline constexpr void *reallocN(void *p = 0, unsigned long long size = 0, unsigned long long sizeone = 1) noexcept {
        if (size == 0 || sizeone == 0) {
            if (p != 0) std::free(p);
            return 0;
        }
        if (p == 0) return std::malloc(size * sizeone);
        return std::realloc(p, size * sizeone);
    }

    inline constexpr void *allocInit(unsigned long long size = 0, unsigned char data = 0) noexcept {
        if (size == 0) return 0;
        if (data == 0) return std::calloc(size, 1);
        void *p = std::malloc(size);
        if (p == 0) return 0;
        std::memset(p, data, size);
        return p;
    }

    template<typename T = unsigned char>
    inline constexpr void *allocInitT(unsigned long long size = 0, T data = T()) noexcept {
        if (size == 0) return 0;
        T *p = (T*)std::malloc(size * sizeof(T));
        if (p == 0) return 0;
        for (unsigned long long i = 0; i < size; i++) p[i] = data;
        return (void*)p;
    }

    inline constexpr void *allocBit(unsigned long long size = 0) noexcept {
        if (size == 0) return 0;
        size = (size >> 3) + ((size & 7) ? 1 : 0);
        return std::malloc(size);
    }

    inline constexpr void *reallocBit(void *p = 0, unsigned long long size = 0) noexcept {
        if (size == 0) {
            if (p != 0) std::free(p);
            return 0;
        }
        size = (size >> 3) + ((size & 7) ? 1 : 0);
        if (p == 0) return std::malloc(size);
        return std::realloc(p, size);
    }

    inline constexpr void *allocInitBit(unsigned long long size = 0, bool data = 0) noexcept {
        if (size == 0) return 0;
        unsigned long long _size = (size >> 3) + ((size & 7) ? 1 : 0);
        if (data == 0) return std::calloc(_size, 1);
        unsigned char *p = (unsigned char*)std::malloc(_size);
        if (p == 0) return 0;
        if ((size >> 3) != 0) std::memset(p, 1, size >> 3);
        for (unsigned long long i = 0; i < (size & 7); i++) p[(size >> 3)] |= (1 << i);
        return (void*)p;
    }

    inline constexpr int mdup(const void *p = 0, unsigned long long size = 0) noexcept {}
}

#endif
