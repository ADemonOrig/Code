#ifndef __TYPES_H__
#define __TYPES_H__ 1

typedef void VOID;

#ifdef __cplusplus
typedef bool BOOLEAN;
typedef bool BOOL;
typedef bool BIT;
#else
typedef unsigned char BOOLEAN;
typedef unsigned char BOOL;
typedef unsigned char BIT;
#endif

typedef signed char CHAR;
typedef signed short int SHORT;
typedef signed int INT;
typedef signed long long int LONG;

typedef unsigned char UCHAR;
typedef unsigned short int USHORT;
typedef unsigned int UINT;
typedef unsigned long long int ULONG;

typedef float FLOAT;
typedef double DOUBLE;
typedef long double LDOUBLE;

typedef signed char I8;
typedef signed short int I16;
typedef signed int I32;
typedef signed long long int I64;

typedef unsigned char U8;
typedef unsigned short int U16;
typedef unsigned int U32;
typedef unsigned long long int U64;

typedef float F32;
typedef double F64;
typedef long double F128;

typedef signed char i8;
typedef signed short int i16;
typedef signed int i32;
typedef signed long long int i64;

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned int u32;
typedef unsigned long long int u64;

typedef float f32;
typedef double f64;
typedef long double f128;

typedef unsigned char BYTE;
typedef unsigned short int WORD;
typedef unsigned int DWORD;
typedef unsigned long long int QWORD;

typedef unsigned char* BYTES;
typedef char* STRING;
typedef const char* CSTRING;

typedef unsigned char bytet;
typedef unsigned long long int sizet;

#endif
