#ifndef __ALLOC_H__
#define __ALLOC_H__ 1

#include <cstdlib>
#include <cstring>

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

    inline constexpr void *mdup(const void *p = 0, unsigned long long size = 0) noexcept {
        if (size == 0) return 0;
        void *np = std::malloc(size);
        if (np == 0) return 0;
        std::memcpy(np, p, size);
        return np;
    }

    inline constexpr void mset(void *p = 0, unsigned long long size = 0, unsigned char data = 0) noexcept {
        if (p == 0 || size == 0) return;
        std::memset(p, data, size);
    }

    inline constexpr void mcopy(void *p1, const void *p2, unsigned long long size) noexcept {
        if (p1 == 0 || size == 0) return;
        if (p2 == 0) std::memset(p1, 0, size);
        else std::memcpy(p1, p2, size);
    }

    inline constexpr void mcopy(void *p1, unsigned long long size1, const void *p2, unsigned long long size2) noexcept {
        if (p1 == 0 || size1 == 0) return;
        if (p2 == 0) std::memset(p1, 0, size1);
        else {
            if (size2 > size1) std::memcpy(p1, p2, size1);
            else {
                if (size2 != 0) std::memcpy(p1, p2, size2);
                if ((size1 - size2) != 0) std::memset(p1 + size1, 0, size1 - size2);
            }
        }
    }

    inline constexpr unsigned long long slen(const char *p = 0) noexcept {
        if (p == 0) return 0;
        return strlen(p);
    }

    inline constexpr unsigned long long slenNull(const char *p = 0) noexcept {
        if (p == 0) return 0;
        return std::strlen(p) + 1;
    }

    inline constexpr char *sdup(const char *p = 0) noexcept {
        if (p == 0) return 0;
        unsigned long long size = std::strlen(p);
        char *np = (char*)std::malloc(size + 1);
        if (np == 0) return 0;
        if (size != 0) std::memcpy(np, p, size);
        np[size] = 0;
        return np;
    }

    inline constexpr void sset(char *p = 0, char data) {
        if (p == 0) return;
        unsigned long long size = std::strlen(p);
        if (size != 0) std::memset(p, data, size);
    }

    inline constexpr void scopy(char *p1 = 0, const char *p2 = 0) {
        if (p1 == 0) return;
        if (p2 == 0) mcopy(p1, std::strlen(p1), 0, 0);
        else memcopy(p1, std::strlen(p1), p2, std::strlen(p2));
    }
}

#endif
