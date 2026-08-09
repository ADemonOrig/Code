#ifdef _c_cpp
#ifndef _c_cpp_dlc
#define _c_cpp_dlc

#undef _malloc
#undef _calloc
#undef _realloc
#undef _free

#ifdef __cplusplus
#include <cstdlib>
#define _malloc(N) std::malloc(N)
#define _calloc(N, S) std::calloc(N, S)
#define _realloc(P, N) std::realloc(P, N)
#define _free(P) std::free(P)
#else
#include <stdlib.h>
#define _malloc(N) malloc(N)
#define _calloc(N, S) calloc(N, S)
#define _realloc(P, N) realloc(P, N)
#define _free(P) free(P)
#endif

#undef _bool
#undef _true
#undef _false
#define _bool _u8
#define _true 1
#define _false 0

#undef _void
#undef _bytes
#define _void void*
#define _bytes _void

#endif
#endif
