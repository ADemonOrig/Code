#ifndef __ALLOC_HPP__
#define __ALLOC_HPP__ 1

#include <cstdlib>

namespace cva {

    inline bool free(void *p = 0) noexcept {
        if (p == 0) return 1;
        std::free(p);
        return 0;
    }
    
    inline void *alloc(unsigned long long size = 1) noexcept {
        if (size == 0) return 0;
        return std::malloc(size);
    }
    
    inline void *allocNull(unsigned long long size = 1) noexcept {
        if (size == 0) return 0;
        return std::malloc(size);
    }
    
    inline void *realloc(
}

#endif
