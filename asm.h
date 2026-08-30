#ifndef __ASM_H__
#define __ASM_H__


#undef   al
#undef   ah
#undef   ax
#undef  eax
#undef  rax

#undef   bl
#undef   bh
#undef   bx
#undef  ebx
#undef  rbx

#undef   cl
#undef   ch
#undef   cx
#undef  ecx
#undef  rcx

#undef   dl
#undef   dh
#undef   dx
#undef  edx
#undef  rdx

#undef   dil
#undef   di
#undef  edi
#undef  rdi

#undef   sil
#undef   si
#undef  esi
#undef  rsi

#undef   bpl
#undef   bp
#undef  ebp
#undef  rbp

#undef   spl
#undef   sp
#undef  esp
#undef  rsp

#undef  r8b
#undef  r8w
#undef  r8d
#undef  r8

#undef  r9b
#undef  r9w
#undef  r9d
#undef  r9

#undef  r10b
#undef  r10w
#undef  r10d
#undef  r10

#undef  r11b
#undef  r11w
#undef  r11d
#undef  r11

#undef  r12b
#undef  r12w
#undef  r12d
#undef  r12

#undef  r13b
#undef  r13w
#undef  r13d
#undef  r13

#undef  r14b
#undef  r14w
#undef  r14d
#undef  r14

#undef  r15b
#undef  r15w
#undef  r15d
#undef  r15

#undef  rip

#undef   flags
#undef  eflags
#undef  rflags

#undef   cs
#undef   ds
#undef   ss
#undef   es
#undef   fs
#undef   gs

#undef  cr0
#undef  cr2
#undef  cr3
#undef  cr4
#undef  cr8

#undef  dr0
#undef  dr1
#undef  dr2
#undef  dr3
#undef  dr6
#undef  dr7


#define  al  0x011
#define  ah  0x021
#define  ax  0x002
#define eax  0x004
#define rax  0x008

#define  bl  0x111
#define  bh  0x121
#define  bx  0x102
#define ebx  0x104
#define rbx  0x108

#define  cl  0x211
#define  ch  0x221
#define  cx  0x202
#define ecx  0x204
#define rcx  0x208

#define  dl  0x311
#define  dh  0x321
#define  dx  0x302
#define edx  0x304
#define rdx  0x308

#define  dil 0x411
#define  di  0x402
#define edi  0x404
#define rdi  0x408

#define  sil 0x511
#define  si  0x502
#define esi  0x504
#define rsi  0x508

#define  bpl 0x611
#define  bp  0x602
#define ebp  0x604
#define rbp  0x608

#define  spl 0x711
#define  sp  0x702
#define esp  0x704
#define rsp  0x708

#define r8b  0x811
#define r8w  0x802
#define r8d  0x804
#define r8   0x808

#define r9b  0x911
#define r9w  0x902
#define r9d  0x904
#define r9   0x908

#define r10b 0xa11
#define r10w 0xa02
#define r10d 0xa04
#define r10  0xa08

#define r11b 0xb11
#define r11w 0xb02
#define r11d 0xb04
#define r11  0xb08

#define r12b 0xc11
#define r12w 0xc02
#define r12d 0xc04
#define r12  0xc08

#define r13b 0xd11
#define r13w 0xd02
#define r13d 0xd04
#define r13  0xd08

#define r14b 0xe11
#define r14w 0xe02
#define r14d 0xe04
#define r14  0xe08

#define r15b 0xf11
#define r15w 0xf02
#define r15d 0xf04
#define r15  0xf08

#define rip    0x1008

#define  flags 0x2002
#define eflags 0x2004
#define rflags 0x2008

#define  cs    0x3012
#define  ds    0x3022
#define  ss    0x3032
#define  es    0x3042
#define  fs    0x3052
#define  gs    0x3062

#define cr0 0xc014
#define cr2 0xc024
#define cr3 0xc034
#define cr4 0xc044
#define cr8 0xc008

#define dr0 0xd014
#define dr1 0xd024
#define dr2 0xd034
#define dr3 0xd044
#define dr6 0xd054
#define dr7 0xd064


// #undef i8
// #undef u8
// #undef i16
// #undef u16
// #undef i32
// #undef u32
// #undef i64
// #undef u64
//
// #define i8  signed char
// #define u8  unsigned char
// #define i16 signed short int
// #define u16 unsigned short int
// #if defined(SIZEOF_LONG) && SIZEOF_LONG == 4
// #define i32 signed long int
// #define u32 unsigned long int
// #elif defined(SIZEOF_INT) && SIZEOF_INT == 4
// #define i32 signed int
// #define u32 unsigned int
// #else
// #define i32 signed long int
// #define u32 unsigned long int
// #endif
// #if defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 8
// #define i64 signed long int
// #define u64 unsigned long int
// #elif defined(__SIZEOF_LONG_LONG__) && __SIZEOF_LONG_LONG__ == 8
// #define i64 signed long long int
// #define u64 unsigned long long int
// #elif defined(_MSC_VER) && defined(_WIN64)
// #define i64 signed __int64
// #define u64 unsigned __int64
// #endif


#undef null
#define null ((void*)0)


#include "local.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum arch_t {
    x86 = 1,
    x86_64 = 2,
    ARM = 3,
    ARM64 = 4
};


enum hform_t {
    BIN,
    ELF,
    ELFshared,
    ELFexec,
    ELFexec1,
    ELFexec2,
    ELFexec3,
    ELF64,
    ELF64shared,
    ELF64exec,
    ELF64exec1,
    ELF64exec2,
    ELF64exec3,
    PE,
    PE64,
    COFF,
    MACHO,
    MACHO64
};


enum segment_t {
    SEG_NULL,
    SEG_LOAD,
    SEG_DYNAMIC,
    SEG_INTERP,
    SEG_NOTE
};


enum segment_flag {
    SEG_EXEC = 1,
    SEG_WRITE = 2,
    SEG_READ = 4
};


struct segment {
    enum segment_t type;
    u32 flag;
    u64 offset;
    u64 vaddr;
    u64 size;
    u64 align;
};


struct assembly {
    enum arch_t arch;
    enum hform_t format;
    u8 *head;
    u8 *data;
    u8 *offset;
    u64 capacity;
    struct segment *segments;
    u64 seg_count;
    u64 seg_capacity;
    u8 seg_open;
};


u8 asm_init(struct assembly *ass) {
    ass->arch = 0;
    ass->format = 0;
    ass->head = null;
    ass->data = null;
    ass->offset = null;
    ass->capacity = 0;
    ass->segments = null;
    ass->seg_count = 0;
    ass->seg_capacity = 0;
    ass->seg_open = 0;
    return 0;
}


u8 asm_free(struct assembly *ass) {
    if (ass->data != null) {
        free(ass->data);
        ass->data = null;
        ass->offset = null;
        ass->capacity = 0;
    }
    if (ass->segments != null) {
        free(ass->segments);
        ass->segments = null;
        ass->seg_count = 0;
        ass->seg_capacity = 0;
        ass->seg_open = 0;
    }
    return 0;
}


u8 asm_expand(struct assembly *ass, u64 size) {
    u64 offset = ass->offset - ass->data;
    if (offset + size > ass->capacity) {
        u64 new_capacity = ass->capacity == 0 ? 4096 : ass->capacity * 2;
        while (new_capacity < offset + size) new_capacity *= 2;
        u8 *new_data = (u8*)realloc(ass->data, new_capacity);
        if (new_data == null) return 1;
        ass->data = new_data;
        ass->offset = ass->data + offset;
        ass->capacity = new_capacity;
    }
    return 0;
}


u8 asm_write(struct assembly *ass, void* data, u64 size) {
    if (!ass->seg_open || asm_expand(ass, size)) return 1;
    memcpy(ass->offset, data, size);
    ass->offset += size;
    return 0;
}


u8 asm_segment_expand(struct assembly *ass) {
    if (ass->seg_count >= ass->seg_capacity) {
        u64 new_seg_capacity = ass->seg_capacity == 0 ? 4 : ass->seg_capacity * 2
        struct segment *new_segments = (struct segment*)realloc(ass->segments, new_seg_capacity * sizeof(struct segment));
        if (new_segments == null) return 1;
        ass->segments = new_segments;
    }
    return 0;
}


u8 asm_segment_end(struct assembly *ass) {
    if (!ass->seg_open || ass->seg_count == 0 || ass->seg_capacity == 0) return 0;
    ass->segments[ass->seg_count - 1].size = ass->offset - ass->data - ass->segments[ass->seg_count - 1].offset;
    ass->seg_open = 0;
    return 0;
}


u8 asm_segment(struct assembly* ass) {
    asm_segment_end(ass);
    asm_segment_expand(ass);

    return 0;
}


u8 asm_alignment(struct assembly *ass, u64 alignment) {
    u64 size = ass->offset - ass->data;
    u64 padding = (alignment - (size % alignment)) % alignment;
    if (padding) {
        u8* zeros = calloc(1, padding);
        if (zeros == null || asm_write(ass, zeros, padding)) return 1;
        free(zeros);
    }
    return 0;
}


u8 asm_header(struct assembly *ass) {
    switch (ass->format) {
        case BIN:
            return 0;
        case ELF:
        case ELFshared:
        case ELFexec:
        case ELFexec1:
        case ELFexec2:
        case ELFexec3: {
            u8 elf_header[52] = {0};
            elf_header[0] = 0x7f;
            elf_header[1] = 'E';
            elf_header[2] = 'L';
            elf_header[3] = 'F';
            elf_header[4] = 1;
            elf_header[5] = 1;
            elf_header[6] = 1;
            elf_header[16] = 2;
            elf_header[18] = 3;
            elf_header[20] = 1;
            return asm_write(ass, elf_header, 52);
        }
        case ELF64:
        case ELF64shared:
        case ELF64exec:
        case ELF64exec1:
        case ELF64exec2:
        case ELF64exec3: {
            u8 elf64_header[64] = {0};
            elf64_header[0] = 0x7f;
            elf64_header[1] = 'E';
            elf64_header[2] = 'L';
            elf64_header[3] = 'F';
            elf64_header[4] = 2;
            elf64_header[5] = 1;
            elf64_header[6] = 1;
            elf64_header[16] = 2;
            elf64_header[18] = 62;
            elf64_header[20] = 1;
            return asm_write(ass, elf64_header, 64);
        }
        case PE:
        case PE64: {
            u8 dos_header[64] = {0};
            dos_header[0] = 'M';
            dos_header[1] = 'Z';
            dos_header[60] = 0x40;
            return asm_write(ass, dos_header, 64);
        }
        case COFF: {
            u8 coff_header[20] = {0};
            coff_header[0] = 0x4c;
            coff_header[1] = 0x01;
            return asm_write(ass, coff_header, 20);
        }
        case MACHO: {
            u8 macho_header[28] = {0};
            macho_header[0] = 0xce;
            macho_header[1] = 0xfa;
            macho_header[2] = 0xed;
            macho_header[3] = 0xfe;
            macho_header[4] = 7;
            macho_header[12] = 2;
            macho_header[16] = 1;
            return asm_write(ass, macho_header, 28);
        }
        case MACHO64: {
            u8 macho64_header[32] = {0};
            macho64_header[0] = 0xcf;
            macho64_header[1] = 0xfa;
            macho64_header[2] = 0xed;
            macho64_header[3] = 0xfe;
            macho64_header[4] = 3;
            macho64_header[12] = 2;
            macho64_header[16] = 1;
            return asm_write(ass, macho64_header, 32);
        }
    }
    return 0;
}


u8 *asm_data(struct assembly *ass) {
    return ass->data;
}


u64 asm_size(struct assembly *ass) {
    return ass->offset - ass->data;
}


u64 asm_capacity(struct assembly *ass) {
    return ass->capacity;
}


u8 asm_which_arch(struct assembly *ass) {
    return ass->arch;
}


u8 asm_which_format(struct assembly *ass) {
    return ass->format;
}


u8 asm_arch(struct assembly *ass, enum arch_t arch) {
    ass->arch = arch;
    return 0;
}


u8 asm_format(struct assembly *ass, enum hform_t format) {
    ass->format = format;
    return 0;
}


u8 asm_char(struct assembly *ass, u8 data)   {
    return asm_write(ass, &data, 1);
}

#undef asm_byte
#define asm_byte(ass, data) (asm_char(ass, data))


u8 asm_short(struct assembly *ass, u16 data)  {
    return asm_write(ass, &data, 2);
}


u8 asm_int(struct assembly *ass, u32 data) {
    return asm_write(ass, &data, 4);
}


u8 asm_long(struct assembly *ass, u64 data) {
    return asm_write(ass, &data, 8);
}


u8 asm_(struct assembly *ass) {
    return 0;
}

#endif
