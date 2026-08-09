#ifdef _c_cpp
#ifndef _c_cpp_dlc
#define _c_cpp_dlc

#undef _long
#undef _ulong
#undef _slong

#define _long signed long int
#define _slong _long
#define _ulong unsigned long int

#undef _imax
#undef _intmax
#undef _int_max
#undef _umax
#undef _uintmax
#undef _uint_max

#ifdef _i64
#define _imax _i64
#define _intmax _i64
#define _int_max _i64
#else
#define _imax _i32
#define _intmax _i32
#define _int_max _i32
#endif

#ifdef _u64
#define _uimax _u64
#define _uintmax _u64
#define _uint_max _u64
#else
#define _uimax _u32
#define _uintmax _u32
#define _uint_max _u32
#endif

#undef _ui8
#undef _ui16
#undef _ui32
#undef _ui64
#undef _si8
#undef _si16
#undef _si32
#undef _si64

#if defined(_s8)
#define _si8 _s8
#endif

#if defined(_s16)
#define _si16 _s16
#endif

#if defined(_s32)
#define _si32 _s32
#endif

#if defined(_s64)
#define _si64 _s64
#endif

#if defined(_u8)
#define _ui8 _u8
#endif

#if defined(_u16)
#define _ui16 _u16
#endif

#if defined(_u32)
#define _ui32 _u32
#endif

#if defined(_u64)
#define _ui64 _u64
#endif

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
