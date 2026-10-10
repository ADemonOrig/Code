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

    inline constexpr void *realloc(void *p = 0, unsigned long long size = 0) {
        if (size == 0) {
            if (p != 0) std::free(p);
            return 0;
        }
        if (p == 0) return std::malloc(size);
        return std::realloc(p, size);
    }

    inline constexpr void *reallocN(void *p = 0, unsigned long long size = 0, unsigned long long sizeone = 1) {
        if (size == 0 || sizeone == 0) {
            if (p != 0) std::free(p);
            return 0;
        }
        if (p == 0) return std::malloc(size * sizeone);
        return std::realloc(p, size * sizeone);
    }

    inline constexpr void *allocInit(unsigned long long size)
}

#endif
