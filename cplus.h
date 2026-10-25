#ifndef __c_plus__
#define __c_plus__ 1

// null

typedef void nullt;

#undef null
#define null 0

#undef nullt_size
#define nullt_size 0

#undef nullt_decl
#define nullt_decl 0

#undef null_size
#define null_size 0

#undef null_decl
#define null_decl 0

// integers

typedef signed char i8t;
typedef signed short int i16t;
typedef signed int i32t;
typedef signed long long int i64t;
typedef unsigned char u8t;
typedef unsigned short int u16t;
typedef unsigned int u32t;
typedef unsigned long long int u64t;

#undef i8t_null
#define i8t_null 0
#undef i16t_null
#define i16t_null 0
#undef i32t_null
#define i32t_null 0
#undef i64t_null
#define i64t_null 0ll
#undef u8t_null
#define u8t_null 0
#undef u16t_null
#define u16t_null 0
#undef u32t_null
#define u32t_null 0u
#undef u64t_null
#define u64t_null 0ull

#undef i8t_min
#define i8t_min 0x80
#undef i16t_min
#define i16t_min 0x8000
#undef i32t_min
#define i32t_min 0x80000000
#undef i64t_min
#define i64t_min 0x8000000000000000ll
#undef u8t_min
#define u8t_min 0x00
#undef u16t_min
#define u16t_min 0x0000
#undef u32t_min
#define u32t_min 0x00000000u
#undef u64t_min
#define u64t_min 0x0000000000000000ull

#undef i8t_max
#define i8t_max 0x7f
#undef i16t_max
#define i16t_max 0x7fff
#undef i32t_max
#define i32t_max 0x7fffffff
#undef i64t_max
#define i64t_max 0x7fffffffffffffffll
#undef u8t_max
#define u8t_max 0xff
#undef u16t_max
#define u16t_max 0xffff
#undef u32t_max
#define u32t_max 0xffffffffu
#undef u64t_max
#define u64t_max 0xffffffffffffffffull

#undef i8t_size
#define i8t_size 1
#undef i16t_size
#define i16t_size 2
#undef i32t_size
#define i32t_size 4
#undef i64t_size
#define i64t_size 8
#undef u8t_size
#define u8t_size 1
#undef u16t_size
#define u16t_size 2
#undef u32t_size
#define u32t_size 4
#undef u64t_size
#define u64t_size 8

#undef i8t_cast
#define i8t_cast(va) ((i8t)(va))
#undef i16t_cast
#define i16t_cast(va) ((i16t)(va))
#undef i32t_cast
#define i32t_cast(va) ((i32t)(va))
#undef i64t_cast
#define i64t_cast(va) ((i64t)(va))
#undef u8t_cast
#define u8t_cast(va) ((u8t)(va))
#undef u16t_cast
#define u16t_cast(va) ((u16t)(va))
#undef u32t_cast
#define u32t_cast(va) ((u32t)(va))
#undef u64t_cast
#define u64t_cast(va) ((u64t)(va))

#undef i8t_decl
#define i8t_decl(va) ((i8t)va)
#undef i16t_decl
#define i16t_decl(va) ((i16t)va)
#undef i32t_decl
#define i32t_decl(va) ((i32t)va)
#undef i64t_decl
#define i64t_decl(va) ((i64t)va)
#undef u8t_decl
#define u8t_decl(va) ((u8t)va)
#undef u16t_decl
#define u16t_decl(va) ((u16t)va)
#undef u32t_decl
#define u32t_decl(va) ((u32t)va)
#undef u64t_decl
#define u64t_decl(va) ((u64t)va)

typedef signed char i8;
typedef signed short int i16;
typedef signed int i32;
typedef signed long long int i64;
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;
typedef unsigned long long int u64;

#undef i8_null
#define i8_null 0
#undef i16_null
#define i16_null 0
#undef i32_null
#define i32_null 0
#undef i64_null
#define i64_null 0ll
#undef u8_null
#define u8_null 0
#undef u16_null
#define u16_null 0
#undef u32_null
#define u32_null 0u
#undef u64_null
#define u64_null 0ull

#undef i8_min
#define i8_min 0x80
#undef i16_min
#define i16_min 0x8000
#undef i32_min
#define i32_min 0x80000000
#undef i64_min
#define i64_min 0x8000000000000000ll
#undef u8_min
#define u8_min 0x00
#undef u16_min
#define u16_min 0x0000
#undef u32_min
#define u32_min 0x00000000u
#undef u64_min
#define u64_min 0x0000000000000000ull

#undef i8_max
#define i8_max 0x7f
#undef i16_max
#define i16_max 0x7fff
#undef i32_max
#define i32_max 0x7fffffff
#undef i64_max
#define i64_max 0x7fffffffffffffffll
#undef u8_max
#define u8_max 0xff
#undef u16_max
#define u16_max 0xffff
#undef u32_max
#define u32_max 0xffffffffu
#undef u64_max
#define u64_max 0xffffffffffffffffull

#undef i8_size
#define i8_size 1
#undef i16_size
#define i16_size 2
#undef i32_size
#define i32_size 4
#undef i64_size
#define i64_size 8
#undef u8_size
#define u8_size 1
#undef u16_size
#define u16_size 2
#undef u32_size
#define u32_size 4
#undef u64_size
#define u64_size 8

#undef i8_cast
#define i8_cast(va) ((i8)(va))
#undef i16_cast
#define i16_cast(va) ((i16)(va))
#undef i32_cast
#define i32_cast(va) ((i32)(va))
#undef i64_cast
#define i64_cast(va) ((i64)(va))
#undef u8_cast
#define u8_cast(va) ((u8)(va))
#undef u16_cast
#define u16_cast(va) ((u16)(va))
#undef u32_cast
#define u32_cast(va) ((u32)(va))
#undef u64_cast
#define u64_cast(va) ((u64)(va))

#undef i8_decl
#define i8_decl(va) ((i8)(va))
#undef i16_decl
#define i16_decl(va) ((i16)(va))
#undef i32_decl
#define i32_decl(va) ((i32)(va))
#undef i64_decl
#define i64_decl(va) ((i64)(va))
#undef u8_decl
#define u8_decl(va) ((u8)(va))
#undef u16_decl
#define u16_decl(va) ((u16)(va))
#undef u32_decl
#define u32_decl(va) ((u32)(va))
#undef u64_decl
#define u64_decl(va) ((u64)(va))

// floats

typedef float f32t;
typedef double f64t;
typedef long double f80t;
typedef long double f128t;

#undef f32t_null
#define f32t_null 0.0f
#undef f64t_null
#define f64t_null 0.0
#undef f80t_null
#define f80t_null 0.0l
#undef f128t_null
#define f128t_null 0.0l

#undef f32t_min
#define f32t_min 1.175494351e-28f
#undef f64t_min
#define f64t_min 2.2250738585072014e-308
#undef f80t_min
#define f80t_min 2.2250738585072014e-308l
#undef f128t_min
#define f128t_min 2.2250738585072014e-308l

#undef f32t_max
#define f32t_max 3.402823466e+38f
#undef f64t_max
#define f64t_max 1.7976931348623158e+308
#undef f80t_max
#define f80t_max 1.7976931348623158e+308l
#undef f128t_max
#define f128t_max 1.7976931348623158e+308l

#undef f32t_size
#define f32t_size 4
#undef f64t_size
#define f64t_size 8
#undef f80t_size
#define f80t_size (sizeof(f80t))
#undef f128t_size
#define f128t_size (sizeof(f128t))

#undef f32t_cast
#define f32t_cast(va) ((f32t)(va))
#undef f64t_cast
#define f64t_cast(va) ((f64t)(va))
#undef f80t_cast
#define f80t_cast(va) ((f80t)(va))
#undef f128t_cast
#define f128t_cast(va) ((f128t)(va))

#undef f32t_decl
#define f32t_decl(va) ((f32t)(va))
#undef f64t_decl
#define f64t_decl(va) ((f64t)(va))
#undef f80t_decl
#define f80t_decl(va) ((f80t)(va))
#undef f128t_decl
#define f128t_decl(va) ((f128t)(va))

typedef float f32;
typedef double f64;
typedef long double f80;
typedef long double f128;

#undef f32_null
#define f32_null 0.0f
#undef f64_null
#define f64_null 0.0
#undef f80_null
#define f80_null 0.0l
#undef f128_null
#define f128_null 0.0l

#undef f32_min
#define f32_min 1.175494351e-28f
#undef f64_min
#define f64_min 2.2250738585072014e-308
#undef f80_min
#define f80_min 2.2250738585072014e-308l
#undef f128_min
#define f128_min 2.2250738585072014e-308l

#undef f32_max
#define f32_max 3.402823466e+38f
#undef f64_max
#define f64_max 1.7976931348623158e+308
#undef f80_max
#define f80_max 1.7976931348623158e+308l
#undef f128_max
#define f128_max 1.7976931348623158e+308l

#undef f32_size
#define f32_size 4
#undef f64_size
#define f64_size 8
#undef f80_size
#define f80_size (sizeof(f80))
#undef f128_size
#define f128_size (sizeof(f128))

#undef f32_cast
#define f32_cast(va) ((f32)(va))
#undef f64_cast
#define f64_cast(va) ((f64)(va))
#undef f80_cast
#define f80_cast(va) ((f80)(va))
#undef f128_cast
#define f128_cast(va) ((f128)(va))

#undef f32_decl
#define f32_decl(va) ((f32)(va))
#undef f64_decl
#define f64_decl(va) ((f64)(va))
#undef f80_decl
#define f80_decl(va) ((f80)(va))
#undef f128_decl
#define f128_decl(va) ((f128)(va))

// booleans

#undef false
#define false 0
#undef true
#define true 1

typedef unsigned char booleant;
typedef unsigned char boolt;

#undef booleant_null
#define booleant_null 0
#undef boolt_null
#define boolt_null 0

#undef booleant_false
#define booleant_false 0
#undef boolt_false
#define boolt_false 0

#undef booleant_true
#define booleant_true 1
#undef boolt_true
#define boolt_true 1

#undef booleant_size
#define booleant_size 1
#undef boolt_size
#define boolt_size 1

#undef booleant_cast
#define booleant_cast(va) ((va) ? 1 : 0)
#undef boolt_cast
#define boolt_cast(va) ((va) ? 1 : 0)

#undef booleant_decl
#define booleant_decl(va) ((va) ? 1 : 0)
#undef boolt_decl
#define boolt_decl(va) ((va) ? 1 : 0)

#undef booleant_is_true
#define booleant_is_true(va) ((va) ? 1 : 0)
#undef boolt_is_false
#define boolt_is_false(va) ((va) ? 0 : 1)

typedef unsigned char boolean;
typedef unsigned char bool;

#undef boolean_null
#define boolean_null 0
#undef bool_null
#define bool_null 0

#undef boolean_false
#define boolean_false 0
#undef bool_false
#define bool_false 0

#undef boolean_true
#define boolean_true 1
#undef bool_true
#define bool_true 1

#undef boolean_size
#define boolean_size 1
#undef bool_size
#define bool_size 1

#undef boolean_cast
#define boolean_cast(va) ((va) ? 1 : 0)
#undef bool_cast
#define bool_cast(va) ((va) ? 1 : 0)

#undef boolean_decl
#define boolean_decl(va) ((va) ? 1 : 0)
#undef bool_decl
#define bool_decl(va) ((va) ? 1 : 0)

#undef boolean_is_true
#define boolean_is_true(va) ((va) ? 1 : 0)
#undef bool_is_false
#define bool_is_false(va) ((va) ? 0 : 1)

// bit

typedef unsigned char bitt;

#undef bitt_null
#define bitt_null 0

#undef bitt_size
#define bitt_size 1

#undef bitt_cast
#define bitt_cast(va) ((va) ? 1 : 0)

#undef bitt_decl
#define bitt_decl(va) ((va) ? 1 : 0)

#undef bitt_flip
#define bitt_flip(va) ((va) ? 0 : 1)

typedef unsigned char bit;

#undef bit_null
#define bit_null 0

#undef bit_size
#define bit_size 1

#undef bit_cast
#define bit_cast(va) ((va) ? 1 : 0)

#undef bit_decl
#define bit_decl(va) ((va) ? 1 : 0)

#undef bit_flip
#define bit_flip(va) ((va) ? 0 : 1)

// bits

typedef unsigned char bit8t;
typedef unsigned short int bit16t;
typedef unsigned int bit32t;
typedef unsigned long long int bit64t;

#undef bit8t_null
#define bit8t_null 0x00
#undef bit16t_null
#define bit16t_null 0x0000
#undef bit32t_null
#define bit32t_null 0x00000000
#undef bit64t_null
#define bit64t_null 0x0000000000000000

#undef bit8t_min
#define bit8t_min 0x00
#undef bit16t_min
#define bit16t_min 0x0000
#undef bit32t_min
#define bit32t_min 0x00000000
#undef bit64t_min
#define bit64t_min 0x0000000000000000

#undef bit8t_max
#define bit8t_max 0xff
#undef bit16t_max
#define bit16t_max 0xffff
#undef bit32t_max
#define bit32t_max 0xffffffff
#undef bit64t_max
#define bit64t_max 0xffffffffffffffff

#undef bit8t_full
#define bit8t_full 0xff
#undef bit16t_full
#define bit16t_full 0xffff
#undef bit32t_full
#define bit32t_full 0xffffffff
#undef bit64t_full
#define bit64t_full 0xffffffffffffffff

#undef bit8t_size
#define bit8t_size 1
#undef bit16t_size
#define bit16t_size 2
#undef bit32t_size
#define bit32t_size 4
#undef bit64t_size
#define bit64t_size 8

#undef bit8t_cast
#define bit8t_cast(va) ((bit8t)(va))
#undef bit16t_cast
#define bit16t_cast(va) ((bit16t)(va))
#undef bit32t_cast
#define bit32t_cast(va) ((bit32t)(va))
#undef bit64t_cast
#define bit64t_cast(va) ((bit64t)(va))

#undef bit8t_decl
#define bit8t_decl(va) ((bit8t)(va))
#undef bit16t_decl
#define bit16t_decl(va) ((bit16t)(va))
#undef bit32t_decl
#define bit32t_decl(va) ((bit32t)(va))
#undef bit64t_decl
#define bit64t_decl(va) ((bit64t)(va))

#undef bit8t_get
#define bit8t_get(va, vb) (((va) >> (vb)) & 1)
#undef bit16t_get
#define bit16t_get(va, vb) (((va) >> (vb)) & 1)
#undef bit32t_get
#define bit32t_get(va, vb) (((va) >> (vb)) & 1)
#undef bit64t_get
#define bit64t_get(va, vb) (((va) >> (vb)) & 1)

#undef bit8t_reset
#define bit8t_reset(va, vb) ((va) & (~(1 << (vb)) & 0xff))
#undef bit16t_reset
#define bit16t_reset(va, vb) ((va) & (~(1 << (vb)) & 0xffff))
#undef bit32t_reset
#define bit32t_reset(va, vb) ((va) & (~(1 << (vb)) & 0xffffffffu))
#undef bit64t_reset
#define bit64t_reset(va, vb) ((va) & (~(1 << (vb))))

#undef bit8t_set
#define bit8t_set(va, vb) ((va) | ((1 << (vb)) & 0xff))
#undef bit16t_set
#define bit16t_set(va, vb) ((va) | ((1 << (vb)) & 0xffff))
#undef bit32t_set
#define bit32t_set(va, vb) ((va) | ((1 << (vb)) & 0xffffffffu))
#undef bit64t_set
#define bit64t_set(va, vb) ((va) | (1 << (vb)))

#undef bit8t_assign
#define bit8t_assign(va, vb, vc) (((va) & (~(1 << (vc)) & 0xff)) | ((((vb) ? 1 : 0) << (vc)) & 0xff))
#undef bit16t_assign
#define bit16t_assign(va, vb, vc) (((va) & (~(1 << (vc)) & 0xffff)) | ((((vb) ? 1 : 0) << (vc)) & 0xffff))
#undef bit32t_assign
#define bit32t_assign(va, vb, vc) (((va) & (~(1 << (vc)) & 0xffffffffu)) | ((((vb) ? 1 : 0) << (vc)) & 0xffffffffu))
#undef bit64t_assign
#define bit64t_assign(va, vb, vc) (((va) & (~(1 << (vc)))) | (((vb) ? 1 : 0) << (vc)))

#undef bit8t_flip
#define bit8t_flip(va, vb) ((va) ^ ((1 << (vb)) & 0xff))
#undef bit16t_flip
#define bit16t_flip(va, vb) ((va) ^ ((1 << (vb)) & 0xffff))
#undef bit32t_flip
#define bit32t_flip(va, vb) ((va) ^ ((1 << (vb)) & 0xffffffffu))
#undef bit64t_flip
#define bit64t_flip(va, vb) ((va) ^ (1 << (vb)))

typedef unsigned char bit8;
typedef unsigned short int bit16;
typedef unsigned int bit32;
typedef unsigned long long int bit64;

#undef bit8_null
#define bit8_null 0x00
#undef bit16_null
#define bit16_null 0x0000
#undef bit32_null
#define bit32_null 0x00000000
#undef bit64_null
#define bit64_null 0x0000000000000000

#undef bit8_min
#define bit8_min 0x00
#undef bit16_min
#define bit16_min 0x0000
#undef bit32_min
#define bit32_min 0x00000000
#undef bit64_min
#define bit64_min 0x0000000000000000

#undef bit8_max
#define bit8_max 0xff
#undef bit16_max
#define bit16_max 0xffff
#undef bit32_max
#define bit32_max 0xffffffff
#undef bit64_max
#define bit64_max 0xffffffffffffffff

#undef bit8_full
#define bit8_full 0xff
#undef bit16_full
#define bit16_full 0xffff
#undef bit32_full
#define bit32_full 0xffffffff
#undef bit64_full
#define bit64_full 0xffffffffffffffff

#undef bit8_size
#define bit8_size 1
#undef bit16_size
#define bit16_size 2
#undef bit32_size
#define bit32_size 4
#undef bit64_size
#define bit64_size 8

#undef bit8_cast
#define bit8_cast(va) ((bit8)(va))
#undef bit16_cast
#define bit16_cast(va) ((bit16)(va))
#undef bit32_cast
#define bit32_cast(va) ((bit32)(va))
#undef bit64_cast
#define bit64_cast(va) ((bit64)(va))

#undef bit8_decl
#define bit8_decl(va) ((bit8)(va))
#undef bit16_decl
#define bit16_decl(va) ((bit16)(va))
#undef bit32_decl
#define bit32_decl(va) ((bit32)(va))
#undef bit64_decl
#define bit64_decl(va) ((bit64)(va))

#undef bit8_get
#define bit8_get(va, vb) (((va) >> (vb)) & 1)
#undef bit16_get
#define bit16_get(va, vb) (((va) >> (vb)) & 1)
#undef bit32_get
#define bit32_get(va, vb) (((va) >> (vb)) & 1)
#undef bit64_get
#define bit64_get(va, vb) (((va) >> (vb)) & 1)

#undef bit8_reset
#define bit8_reset(va, vb) ((va) & (~(1 << (vb)) & 0xff))
#undef bit16_reset
#define bit16_reset(va, vb) ((va) & (~(1 << (vb)) & 0xffff))
#undef bit32_reset
#define bit32_reset(va, vb) ((va) & (~(1 << (vb)) & 0xffffffffu))
#undef bit64_reset
#define bit64_reset(va, vb) ((va) & (~(1 << (vb))))

#undef bit8_set
#define bit8_set(va, vb) ((va) | ((1 << (vb)) & 0xff))
#undef bit16_set
#define bit16_set(va, vb) ((va) | ((1 << (vb)) & 0xffff))
#undef bit32_set
#define bit32_set(va, vb) ((va) | ((1 << (vb)) & 0xffffffffu))
#undef bit64_set
#define bit64_set(va, vb) ((va) | (1 << (vb)))

#undef bit8_assign
#define bit8_assign(va, vb, vc) (((va) & (~(1 << (vc)) & 0xff)) | ((((vb) ? 1 : 0) << (vc)) & 0xff))
#undef bit16_assign
#define bit16_assign(va, vb, vc) (((va) & (~(1 << (vc)) & 0xffff)) | ((((vb) ? 1 : 0) << (vc)) & 0xffff))
#undef bit32_assign
#define bit32_assign(va, vb, vc) (((va) & (~(1 << (vc)) & 0xffffffffu)) | ((((vb) ? 1 : 0) << (vc)) & 0xffffffffu))
#undef bit64_assign
#define bit64_assign(va, vb, vc) (((va) & (~(1 << (vc)))) | (((vb) ? 1 : 0) << (vc)))

#undef bit8_flip
#define bit8_flip(va, vb) ((va) ^ ((1 << (vb)) & 0xff))
#undef bit16_flip
#define bit16_flip(va, vb) ((va) ^ ((1 << (vb)) & 0xffff))
#undef bit32_flip
#define bit32_flip(va, vb) ((va) ^ ((1 << (vb)) & 0xffffffffu))
#undef bit64_flip
#define bit64_flip(va, vb) ((va) ^ (1 << (vb)))

// machine

typedef unsigned long long int machinet;
typedef unsigned char bytet;
typedef unsigned short int wordt;
typedef unsigned int dwordt;
typedef unsigned long long int qwordt;

#undef machinet_null
#define machinet_null 0
#undef bytet_null
#define bytet_null 0
#undef wordt_null
#define wordt_null 0
#undef dwordt_null
#define dwordt_null 0
#undef qwordt_null
#define qwordt_null 0

#undef machinet_size
#define machinet_size 8
#undef bytet_size
#define bytet_size 1
#undef wordt_size
#define wordt_size 2
#undef dwordt_size
#define dwordt_size 4
#undef qwordt_size
#define qwordt_size 8

#undef machinet_cast
#define machinet_cast(va) ((machinet)(va))
#undef bytet_cast
#define bytet_cast(va) ((bytet)(va))
#undef wordt_cast
#define wordt_cast(va) ((wordt)(va))
#undef dwordt_cast
#define dwordt_cast(va) ((dwordt)(va))
#undef qwordt_cast
#define qwordt_cast(va) ((qwordt)(va))

#undef machinet_decl
#define machinet_decl(va) ((machinet)(va))
#undef bytet_decl
#define bytet_decl(va) ((bytet)(va))
#undef wordt_decl
#define wordt_decl(va) ((wordt)(va))
#undef dwordt_decl
#define dwordt_decl(va) ((dwordt)(va))
#undef qwordt_decl
#define qwordt_decl(va) ((qwordt)(va))

// numbers

typedef signed long long int numbert;
typedef unsigned long long int unumbert;
typedef float fnumbert;
typedef double dnumbert;
typedef long double ldnumbert;

#undef numbert_null
#define numbert_null 0ll
#undef unumbert_null
#define unumbert_null 0ull
#undef fnumbert_null
#define fnumbert_null 0.0f
#undef dnumbert_null
#define dnumbert_null 0.0
#undef ldnumbert_null
#define ldnumbert_null 0.0l

#undef numbert_size
#define numbert_size 8
#undef unumbert_size
#define unumbert_size 8
#undef fnumbert_size
#define fnumbert_size 4
#undef dnumbert_size
#define dnumbert_size 8
#undef ldnumbert_size
#define ldnumbert_size (sizeof(ldnumbert))

#undef numbert_cast
#define numbert_cast(va) ((numbert)(va))
#undef unumbert_cast
#define unumbert_cast(va) ((unumbert)(va))
#undef fnumbert_cast
#define fnumbert_cast(va) ((fnumbert)(va))
#undef dnumbert_cast
#define dnumbert_cast(va) ((dnumbert)(va))
#undef ldnumbert_cast
#define ldnumbert_cast(va) ((ldnumbert)(va))

#undef numbert_decl
#define numbert_decl(va) ((numbert)(va))
#undef unumbert_decl
#define unumbert_decl(va) ((unumbert)(va))
#undef fnumbert_decl
#define fnumbert_decl(va) ((fnumbert)(va))
#undef dnumbert_decl
#define dnumbert_decl(va) ((dnumbert)(va))
#undef ldnumbert_decl
#define ldnumbert_decl(va) ((ldnumbert)(va))

typedef signed long long int numt;
typedef unsigned long long int unumt;
typedef float fnumt;
typedef double dnumt;
typedef long double ldnumt;

#undef numt_null
#define numt_null 0ll
#undef unumt_null
#define unumt_null 0ull
#undef fnumt_null
#define fnumt_null 0.0f
#undef dnumt_null
#define dnumt_null 0.0
#undef ldnumt_null
#define ldnumt_null 0.0l

#undef numt_size
#define numt_size 8
#undef unumt_size
#define unumt_size 8
#undef fnumt_size
#define fnumt_size 4
#undef dnumt_size
#define dnumt_size 8
#undef ldnumt_size
#define ldnumt_size (sizeof(ldnumt))

#undef numt_cast
#define numt_cast(va) ((numt)(va))
#undef unumt_cast
#define unumt_cast(va) ((unumt)(va))
#undef fnumt_cast
#define fnumt_cast(va) ((fnumt)(va))
#undef dnumt_cast
#define dnumt_cast(va) ((dnumt)(va))
#undef ldnumt_cast
#define ldnumt_cast(va) ((ldnumt)(va))

#undef numt_decl
#define numt_decl(va) ((numt)(va))
#undef unumt_decl
#define unumt_decl(va) ((unumt)(va))
#undef fnumt_decl
#define fnumt_decl(va) ((fnumt)(va))
#undef dnumt_decl
#define dnumt_decl(va) ((dnumt)(va))
#undef ldnumt_decl
#define ldnumt_decl(va) ((ldnumt)(va))

// sizes

typedef signed long long int sizet;
typedef unsigned long long int usizet;
typedef signed long long int indext;
typedef unsigned long long int uindext;
typedef signed long long int indxt;
typedef unsigned long long int uindxt;

#undef sizet_null
#define sizet_null 0ll
#undef usizet_null
#define usizet_null 0ull
#undef indext_null
#define indext_null 0ll
#undef uindext_null
#define uindext_null 0ull

#undef sizet_size
#define sizet_size 8
#undef usizet_size
#define usizet_size 8
#undef indext_size
#define indext_size 8
#undef uindext_size
#define uindext_size 8

#undef sizet_cast
#define sizet_cast(va) ((sizet)(va))
#undef usizet_cast
#define usizet_cast(va) ((usizet)(va))
#undef indext_cast
#define indext_cast(va) ((indext)(va))
#undef uindext_cast
#define uindext_cast(va) ((uindext)(va))

#undef sizet_decl
#define sizet_decl(va) ((sizet)(va))
#undef usizet_decl
#define usizet_decl(va) ((usizet)(va))
#undef indext_decl
#define indext_decl(va) ((indext)(va))
#undef uindext_decl
#define uindext_decl(va) ((uindext)(va))

// mode

typedef unsigned char modet;
typedef unsigned char permt;

#undef modet_exec
#define modet_exec 1

#undef modet_write
#define modet_write 2

#undef modet_read
#define modet_read 4

#undef modet_null 0
#define modet_null 0

#undef modet_size 1
#define modet_size 1

#undef modet_cast
#define modet_cast(va) ((modet)(va))

#undef modet_decl
#define modet_decl(va) ((modet)(va))

#undef modet_reset_exec
#define modet_reset_exec(va) (bit8t_reset((va), 0))

#undef modet_reset_write
#define modet_reset_write(va) (bit8t_reset((va), 1))

#undef modet_reset_read
#define modet_reset_read(va) (bit8t_reset((va), 2))

#undef modet_set_exec
#define modet_set_exec(va) (bit8t_set((va), 0))

#undef modet_set_write
#define modet_set_write(va) (bit8t_set((va), 1))

#undef modet_set_read
#define modet_set_read(va) (bit8t_set((va), 2))

// color

typedef unsigned char colort;

#undef colort_null
#define colort_null 0

#undef colort_size
#define colort_size 1

#undef colort_cast
#define colort_cast(va) ((colort)(va))

#undef colort_decl
#define colort_decl(va) ((colort)(va))

#endif
