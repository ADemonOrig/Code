/*

simple assembler lib

*/

#ifndef __ASSEMBLY_H__
#define __ASSEMBLY_H__


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#undef i8
#undef u8
#undef i16
#undef u16
#undef i32
#undef u32
#undef i64
#undef u64
#undef imax
#undef umax
#undef imaxsz
#undef umaxsz
#define i8  signed char
#define u8  unsigned char
#define i16 signed short int
#define u16 unsigned short int
#if defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 4
#define i32 signed long int
#define u32 unsigned long int
#elif defined(__SIZEOF_INT__) && __SIZEOF_INT__ == 4
#define i32 signed int
#define u32 unsigned int
#else
#define i32 signed long int
#define u32 unsigned long int
#endif
#if defined(__SIZEOF_LONG__) && __SIZEOF_LONG__ == 8
#define i64 signed long int
#define u64 unsigned long int
#elif defined(__SIZEOF_LONG_LONG__) && __SIZEOF_LONG_LONG__ == 8
#define i64 signed long long int
#define u64 unsigned long long int
#elif defined(_MSC_VER) && defined(_WIN64)
#define i64 signed __int64
#define u64 unsigned __int64
#endif
#ifdef u64
#define imax u64
#define umax i64
#define imaxsz 8
#define umaxsz 8
#else
#define imax u32
#define umax i32
#define imaxsz 4
#define umaxsz 4
#endif


#undef null
#define null 0


#undef asm_null
#define asm_null 0


#undef asm_endian_null
#undef asm_endian_little
#undef asm_endian_big
#undef asm_endian_mixed
#define asm_endian_null asm_null
#define asm_endian_little 1
#define asm_endian_big 2
#define asm_endian_mixed 3


#undef asm_arch_null
#undef asm_arch_x86_32
#undef asm_arch_x86_64
#undef asm_arch_x86
#undef asm_arch_amd32
#undef asm_arch_amd64
#undef asm_arch_amd
#undef asm_arch_intel32
#undef asm_arch_intel64
#undef asm_arch_intel
#undef asm_arch_arm32
#undef asm_arch_arm64
#undef asm_arch_arm
#undef asm_arch_aarch32
#undef asm_arch_aarch64
#undef asm_arch_aarch
#undef asm_arch_riscv32
#undef asm_arch_riscv64
#undef asm_arch_riscv
#undef asm_arch_mips32
#undef asm_arch_mips64
#undef asm_arch_mips
#undef asm_arch_i386
#define asm_arch_null asm_null
#define asm_arch_x86_32 1
#define asm_arch_x86_64 2
#define asm_arch_x86 asm_arch_x86_32
#define asm_arch_amd32 asm_arch_x86_32
#define asm_arch_amd64 asm_arch_x86_64
#define asm_arch_amd asm_arch_amd64
#define asm_arch_intel32 asm_arch_x86_32
#define asm_arch_intel64 asm_arch_x86_64
#define asm_arch_intel asm_arch_intel64
#define asm_arch_arm32 3
#define asm_arch_arm64 4
#define asm_arch_arm asm_arch_arm64
#define asm_arch_aarch32 asm_arch_arm32
#define asm_arch_aarch64 asm_arch_arm64
#define asm_arch_aarch asm_arch_aarch64
#define asm_arch_riscv32 5
#define asm_arch_riscv64 6
#define asm_arch_riscv asm_arch_riscv64
#define asm_arch_mips32 7
#define asm_arch_mips64 8
#define asm_arch_mips asm_arch_mips64
#define asm_arch_i386 asm_arch_x86_32


#undef asm_format_null
#undef asm_format_bin
#undef asm_format_elf
#undef asm_format_elf64
#undef asm_format_pe
#undef asm_format_pe64
#undef asm_format_coff
#undef asm_format_macho
#undef asm_format_macho64
#undef asm_format_dos
#undef asm_format_iso
#define asm_format_null asm_null
#define asm_format_bin 1
#define asm_format_elf 2
#define asm_format_elf64 3
#define asm_format_pe 4
#define asm_format_pe64 5
#define asm_format_coff 6
#define asm_format_macho 7
#define asm_format_macho64 8
#define asm_format_dos 9
#define asm_format_iso 10


#undef asm_format_null_size
#undef asm_format_bin_size
#undef asm_format_elf_size
#undef asm_format_elf64_size
#undef asm_format_pe_size
#undef asm_format_pe64_size
#undef asm_format_coff_size
#undef asm_format_macho_size
#undef asm_format_macho64_size
#undef asm_format_dos_size
#undef asm_format_iso_size
#define asm_format_null_size asm_null
#define asm_format_bin_size 0
#define asm_format_elf_size 52
#define asm_format_elf64_size 64
#define asm_format_pe_size 312
#define asm_format_pe64_size 328
#define asm_format_coff_size 20
#define asm_format_macho_size 28
#define asm_format_macho64_size 32
#define asm_format_dos_size 64
#define asm_format_iso_size 2048


#undef asm_segment_null_size
#undef asm_segment_bin_size
#undef asm_segment_elf_size
#undef asm_segment_elf64_size
#undef asm_segment_pe_size
#undef asm_segment_pe64_size
#undef asm_segment_coff_size
#undef asm_segment_macho_size
#undef asm_segment_macho64_size
#undef asm_segment_dos_size
#undef asm_segment_iso_size
#define asm_segment_null_size asm_null
#define asm_segment_bin_size 0
#define asm_segment_elf_size 32
#define asm_segment_elf64_size 56
#define asm_segment_pe_size 40
#define asm_segment_pe64_size 40
#define asm_segment_coff_size 40
#define asm_segment_macho_size 56
#define asm_segment_macho64_size 72
#define asm_segment_dos_size 0
#define asm_segment_iso_size 34


#undef asm_section_null
#undef asm_section_text
#undef asm_section_code
#undef asm_section_data
#undef asm_section_bin
#undef asm_section_rodata
#undef asm_section_rdata
#undef asm_section_bss
#undef asm_section_tls
#undef asm_section_init
#undef asm_section_fini
#define asm_section_null asm_null
#define asm_section_text ".text"
#define asm_section_code asm_section_text
#define asm_section_data ".data"
#define asm_section_bin asm_section_data
#define asm_section_rodata ".rodata"
#define asm_section_rdata asm_section_rodata
#define asm_section_bss ".bss"
#define asm_section_tls ".tls"
#define asm_section_init ".init"
#define asm_section_fini ".fini"


#undef asm_arch_my
#undef asm_format_my
#if defined(__x86_64__) || defined(_M_X64) || defined(__amd64__) || defined(__amd64)
#define asm_arch_my asm_arch_x86_64
#elif defined(__i386__) || defined(_M_IX86) || defined(__i386) || defined(_X86_)
#define asm_arch_my asm_arch_x86_32
#elif defined(__aarch64__) || defined(_M_ARM64)
#define asm_arch_my asm_arch_arm64
#elif defined(__arm__) || defined(_M_ARM) || defined(_M_ARMT)
#define asm_arch_my asm_arch_arm32
#elif defined(__riscv) && defined(__riscv_xlen) && (__riscv_xlen == 64)
#define asm_arch_my asm_arch_riscv64
#elif defined(__riscv) && defined(__riscv_xlen) && (__riscv_xlen == 32)
#define asm_arch_my asm_arch_riscv32
#elif defined(__mips64) || defined(__mips64__)
#define asm_arch_my asm_arch_mips64
#elif defined(__mips__) || defined(__mips)
#define asm_arch_my asm_arch_mips32
#else
#define asm_arch_my asm_arch_null
#endif
#if defined(asm_arch_my) && ((asm_arch_my == asm_arch_x86_64) || (asm_arch_my == asm_arch_arm64) || (asm_arch_my == asm_arch_riscv64) || (asm_arch_my == asm_arch_mips64))
#if defined(_WIN32) || defined(_WIN64)
#define asm_format_my asm_format_pe64
#elif defined(__APPLE__) && defined(__MACH__)
#define asm_format_my asm_format_macho64
#else
#define asm_format_my asm_format_elf64
#endif
#elif defined(asm_arch_my) && ((asm_arch_my == asm_arch_x86_32) || (asm_arch_my == asm_arch_arm32) || (asm_arch_my == asm_arch_riscv32) || (asm_arch_my == asm_arch_mips32))
#if defined(_WIN32) || defined(_WIN64)
#define asm_format_my asm_format_pe
#elif defined(__APPLE__) && defined(__MACH__)
#define asm_format_my asm_format_macho
#else
#define asm_format_my asm_format_elf
#endif
#else
#define asm_format_my asm_format_null
#endif


struct segment {
    u8 *offset;
    umax size;
    u8 mode;
};


struct address {
    u8 *offset;
    char *name;
    umax len;
};


struct assembly {
    u8 arch;
    u8 format;
    u8 *header;
    u8 *data;
    u8 *offset;
    umax cap;
    struct segment *segs;
    umax seg_count;
    umax seg_cap;
    struct address *labels;
    umax l_count;
    umax l_cap;
    struct address *addrs;
    umax a_count;
    umax a_cap;
};


u8 asm_init(struct assembly *ass) {
    if (ass == null) return 1;
    ass->arch = asm_arch_null;
    ass->format = asm_format_null;
    ass->header = null;
    ass->data = null;
    ass->offset = null;
    ass->cap = 0;
    ass->segs = null;
    ass->seg_count = 0;
    ass->seg_cap = 0;
    ass->labels = null;
    ass->l_count = 0;
    ass->l_cap = 0;
    ass->addrs = null;
    ass->a_count = 0;
    ass->a_cap = 0;
    return 0;
}


u8 asm_free(struct assembly *ass) {
    if (ass == null) return 1;
    ass->arch = asm_arch_null;
    ass->format = asm_format_null;
    if (ass->header != null) {
        free(ass->header);
        ass->header = null;
    }
    if (ass->cap != 0) {
        free(ass->data);
        ass->data = null;
        ass->offset = null;
        ass->cap = 0;
    }
    if (ass->seg_cap != 0) {
        free(ass->segs);
        ass->segs = null;
        ass->seg_count = 0;
        ass->seg_cap = 0;
    }
    if (ass->l_cap != 0) {
        for(umax i = 0; i < ass->l_count; i++) {
            if (ass->labels[i].len != 0) free(ass->labels[i].name);
        }
        free(ass->labels);
        ass->labels = null;
        ass->l_count = 0;
        ass->l_cap = 0;
    }
    if (ass->a_cap != 0) {
        for(umax i = 0; i < ass->a_count; i++) {
            if (ass->addrs[i].len != 0) free(ass->addrs[i].name);
        }
        free(ass->addrs);
        ass->addrs = null;
        ass->a_count = 0;
        ass->a_cap = 0;
    }
    return 0;
}


u8 asm_clear_arch(struct assembly *ass) {
    if (ass == null) return 1;
    ass->arch = asm_arch_null;
    return 0;
}


u8 asm_clear_format(struct assembly *ass) {
    if (ass == null) return 1;
    ass->format = asm_format_null;
    return 0;
}


u8 asm_arch(struct assembly *ass, u8 arch) {
    if (ass == null) return 1;
    ass->arch = arch;
    return 0;
}


u8 asm_format(struct assembly *ass, u8 format) {
    if (ass == null) return 1;
    ass->format = format;
    return 0;
}


u8 asm_bytes(struct assembly *ass, void *data, umax size) {
    if (ass == null) return 1;
    u64 len = ass->cap ? ass->offset - ass->data : 0;
    if (len + size > ass->cap) {
        umax new_cap = ass->cap ? ass->cap * 2 : 4096;
        while(new_cap < len + size) new_cap *= 2;
        u8 *new_data = (u8*)realloc(ass->data, new_cap);
        if (new_data == null) return 2;
        ass->data = new_data;
        ass->offset = new_data + len;
        ass->cap = new_cap;
    }
    if (data == null) memset(ass->offset, 0, size);
    else memcpy(ass->offset, data, size);
    ass->offset += size;
    return 0;
}


u8 asm_int8(struct assembly *ass, u8 v) {
    return asm_bytes(ass, &v, 1);
}

u8 asm_int8le(struct assembly *ass, u8 v) {
    return asm_bytes(ass, &v, 1);
}

u8 asm_int8be(struct assembly *ass, u8 v) {
    return asm_bytes(ass, &v, 1);
}


u8 asm_int16le(struct assembly *ass, u16 v) {
    u8 b[2];
    b[0] = (u8)(v & 0xFF);
    b[1] = (u8)((v >> 8) & 0xFF);
    return asm_bytes(ass, b, 2);
}


u8 asm_int16be(struct assembly *ass, u16 v) {
    u8 b[2];
    b[0] = (u8)((v >> 8) & 0xFF);
    b[1] = (u8)(v & 0xFF);
    return asm_bytes(ass, b, 2);
}


u8 asm_int32le(struct assembly *ass, u32 v) {
    u8 b[4];
    b[0] = (u8)(v & 0xFF);
    b[1] = (u8)((v >> 8) & 0xFF);
    b[2] = (u8)((v >> 16) & 0xFF);
    b[3] = (u8)((v >> 24) & 0xFF);
    return asm_bytes(ass, b, 4);
}


u8 asm_int32be(struct assembly *ass, u32 v) {
    u8 b[4];
    b[0] = (u8)((v >> 24) & 0xFF);
    b[1] = (u8)((v >> 16) & 0xFF);
    b[2] = (u8)((v >> 8) & 0xFF);
    b[3] = (u8)(v & 0xFF);
    return asm_bytes(ass, b, 4);
}


u8 asm_int64le(struct assembly *ass, u64 v) {
    u8 b[8];
    b[0] = (u8)(v & 0xFF);
    b[1] = (u8)((v >> 8) & 0xFF);
    b[2] = (u8)((v >> 16) & 0xFF);
    b[3] = (u8)((v >> 24) & 0xFF);
    b[4] = (u8)((v >> 32) & 0xFF);
    b[5] = (u8)((v >> 40) & 0xFF);
    b[6] = (u8)((v >> 48) & 0xFF);
    b[7] = (u8)((v >> 56) & 0xFF);
    return asm_bytes(ass, b, 8);
}


u8 asm_int64be(struct assembly *ass, u64 v) {
    u8 b[8];
    b[0] = (u8)((v >> 56) & 0xFF);
    b[1] = (u8)((v >> 48) & 0xFF);
    b[2] = (u8)((v >> 40) & 0xFF);
    b[3] = (u8)((v >> 32) & 0xFF);
    b[4] = (u8)((v >> 24) & 0xFF);
    b[5] = (u8)((v >> 16) & 0xFF);
    b[6] = (u8)((v >> 8) & 0xFF);
    b[7] = (u8)(v & 0xFF);
    return asm_bytes(ass, b, 8);
}


// register

#undef asm_al
#undef asm_ah
#undef asm_ax
#undef asm_eax
#undef asm_rax
#undef asm_bl
#undef asm_bh
#undef asm_bx
#undef asm_ebx
#undef asm_rbx
#undef asm_cl
#undef asm_ch
#undef asm_cx
#undef asm_ecx
#undef asm_rcx
#undef asm_dl
#undef asm_dh
#undef asm_dx
#undef asm_edx
#undef asm_rdx
#undef asm_sil
#undef asm_si
#undef asm_esi
#undef asm_rsi
#undef asm_dil
#undef asm_di
#undef asm_edi
#undef asm_rdi
#undef asm_bpl
#undef asm_bp
#undef asm_ebp
#undef asm_rbp
#undef asm_spl
#undef asm_sp
#undef asm_esp
#undef asm_rsp
#undef asm_r8b
#undef asm_r8w
#undef asm_r8d
#undef asm_r8
#undef asm_r9b
#undef asm_r9w
#undef asm_r9d
#undef asm_r9
#undef asm_r10b
#undef asm_r10w
#undef asm_r10d
#undef asm_r10
#undef asm_r11b
#undef asm_r11w
#undef asm_r11d
#undef asm_r11
#undef asm_r12b
#undef asm_r12w
#undef asm_r12d
#undef asm_r12
#undef asm_r13b
#undef asm_r13w
#undef asm_r13d
#undef asm_r13
#undef asm_r14b
#undef asm_r14w
#undef asm_r14d
#undef asm_r14
#undef asm_r15b
#undef asm_r15w
#undef asm_r15d
#undef asm_r15
#undef asm_flags
#undef asm_eflags
#undef asm_rflags
#undef asm_ip
#undef asm_eip
#undef asm_rip
#undef asm_cs
#undef asm_ds
#undef asm_es
#undef asm_fs
#undef asm_gs
#undef asm_ss
#undef asm_cr0
#undef asm_cr1
#undef asm_cr2
#undef asm_cr3
#undef asm_cr4
#undef asm_cr5
#undef asm_cr6
#undef asm_cr7
#undef asm_cr8
#undef asm_cr9
#undef asm_cr10
#undef asm_cr11
#undef asm_cr12
#undef asm_cr13
#undef asm_cr14
#undef asm_cr15
#undef asm_dr0
#undef asm_dr1
#undef asm_dr2
#undef asm_dr3
#undef asm_dr4
#undef asm_dr5
#undef asm_dr6
#undef asm_dr7
#undef asm_dr8
#undef asm_dr9
#undef asm_dr10
#undef asm_dr11
#undef asm_dr12
#undef asm_dr13
#undef asm_dr14
#undef asm_dr15
#undef asm_st0
#undef asm_st1
#undef asm_st2
#undef asm_st3
#undef asm_st4
#undef asm_st5
#undef asm_st6
#undef asm_st7
#undef asm_mm0
#undef asm_mm1
#undef asm_mm2
#undef asm_mm3
#undef asm_mm4
#undef asm_mm5
#undef asm_mm6
#undef asm_mm7
#undef asm_xmm0
#undef asm_xmm1
#undef asm_xmm2
#undef asm_xmm3
#undef asm_xmm4
#undef asm_xmm5
#undef asm_xmm6
#undef asm_xmm7
#undef asm_xmm8
#undef asm_xmm9
#undef asm_xmm10
#undef asm_xmm11
#undef asm_xmm12
#undef asm_xmm13
#undef asm_xmm14
#undef asm_xmm15
#undef asm_ymm0
#undef asm_ymm1
#undef asm_ymm2
#undef asm_ymm3
#undef asm_ymm4
#undef asm_ymm5
#undef asm_ymm6
#undef asm_ymm7
#undef asm_ymm8
#undef asm_ymm9
#undef asm_ymm10
#undef asm_ymm11
#undef asm_ymm12
#undef asm_ymm13
#undef asm_ymm14
#undef asm_ymm15
#undef asm_zmm0
#undef asm_zmm1
#undef asm_zmm2
#undef asm_zmm3
#undef asm_zmm4
#undef asm_zmm5
#undef asm_zmm6
#undef asm_zmm7
#undef asm_zmm8
#undef asm_zmm9
#undef asm_zmm10
#undef asm_zmm11
#undef asm_zmm12
#undef asm_zmm13
#undef asm_zmm14
#undef asm_zmm15
#undef asm_zmm16
#undef asm_zmm17
#undef asm_zmm18
#undef asm_zmm19
#undef asm_zmm20
#undef asm_zmm21
#undef asm_zmm22
#undef asm_zmm23
#undef asm_zmm24
#undef asm_zmm25
#undef asm_zmm26
#undef asm_zmm27
#undef asm_zmm28
#undef asm_zmm29
#undef asm_zmm30
#undef asm_zmm31
#define asm_al 0x0100
#define asm_ah 0x0101
#define asm_ax 0x0200
#define asm_eax 0x0400
#define asm_rax 0x0800
#define asm_bl 0x0102
#define asm_bh 0x0103
#define asm_bx 0x0202
#define asm_ebx 0x0402
#define asm_rbx 0x0802
#define asm_cl 0x0104
#define asm_ch 0x0105
#define asm_cx 0x0204
#define asm_ecx 0x0404
#define asm_rcx 0x0804
#define asm_dl 0x0106
#define asm_dh 0x0107
#define asm_dx 0x0206
#define asm_edx 0x0406
#define asm_rdx 0x0806
#define asm_sil 0x0108
#define asm_si 0x0208
#define asm_esi 0x0408
#define asm_rsi 0x0808
#define asm_dil 0x0109
#define asm_di 0x0209
#define asm_edi 0x0409
#define asm_rdi 0x0809
#define asm_bpl 0x010a
#define asm_bp 0x020a
#define asm_ebp 0x040a
#define asm_rbp 0x080a
#define asm_spl 0x010b
#define asm_sp 0x020b
#define asm_esp 0x040b
#define asm_rsp 0x080b
#define asm_r8b 0x010c
#define asm_r8w 0x020c
#define asm_r8d 0x040c
#define asm_r8 0x080c
#define asm_r9b 0x010d
#define asm_r9w 0x020d
#define asm_r9d 0x040d
#define asm_r9 0x080d
#define asm_r10b 0x010e
#define asm_r10w 0x020e
#define asm_r10d 0x040e
#define asm_r10 0x080e
#define asm_r11b 0x010f
#define asm_r11w 0x020f
#define asm_r11d 0x040f
#define asm_r11 0x080f
#define asm_r12b 0x0110
#define asm_r12w 0x0210
#define asm_r12d 0x0410
#define asm_r12 0x0810
#define asm_r13b 0x0111
#define asm_r13w 0x0211
#define asm_r13d 0x0411
#define asm_r13 0x0811
#define asm_r14b 0x0112
#define asm_r14w 0x0212
#define asm_r14d 0x0412
#define asm_r14 0x0812
#define asm_r15b 0x0113
#define asm_r15w 0x0213
#define asm_r15d 0x0413
#define asm_r15 0x0813
#define asm_flags 0x0214
#define asm_eflags 0x0414
#define asm_rflags 0x0814
#define asm_ip 0x0215
#define asm_eip 0x0415
#define asm_rip 0x0815
#define asm_cs 0x0216
#define asm_ds 0x0217
#define asm_es 0x0218
#define asm_fs 0x0219
#define asm_gs 0x021a
#define asm_ss 0x021b
#define asm_cr0 0x0820
#define asm_cr1 0x0821
#define asm_cr2 0x0822
#define asm_cr3 0x0823
#define asm_cr4 0x0824
#define asm_cr5 0x0825
#define asm_cr6 0x0826
#define asm_cr7 0x0827
#define asm_cr8 0x0828
#define asm_cr9 0x0829
#define asm_cr10 0x082a
#define asm_cr11 0x082b
#define asm_cr12 0x082c
#define asm_cr13 0x082d
#define asm_cr14 0x082e
#define asm_cr15 0x082f
#define asm_dr0 0x0830
#define asm_dr1 0x0831
#define asm_dr2 0x0832
#define asm_dr3 0x0833
#define asm_dr4 0x0834
#define asm_dr5 0x0835
#define asm_dr6 0x0836
#define asm_dr7 0x0837
#define asm_dr8 0x0838
#define asm_dr9 0x0839
#define asm_dr10 0x083a
#define asm_dr11 0x083b
#define asm_dr12 0x083c
#define asm_dr13 0x083d
#define asm_dr14 0x083e
#define asm_dr15 0x083f
#define asm_st0 0x0a40
#define asm_st1 0x0a41
#define asm_st2 0x0a42
#define asm_st3 0x0a43
#define asm_st4 0x0a44
#define asm_st5 0x0a45
#define asm_st6 0x0a46
#define asm_st7 0x0a47
#define asm_mm0 0x0850
#define asm_mm1 0x0851
#define asm_mm2 0x0852
#define asm_mm3 0x0853
#define asm_mm4 0x0854
#define asm_mm5 0x0855
#define asm_mm6 0x0856
#define asm_mm7 0x0857
#define asm_xmm0 0x1060
#define asm_xmm1 0x1061
#define asm_xmm2 0x1062
#define asm_xmm3 0x1063
#define asm_xmm4 0x1064
#define asm_xmm5 0x1065
#define asm_xmm6 0x1066
#define asm_xmm7 0x1067
#define asm_xmm8 0x1068
#define asm_xmm9 0x1069
#define asm_xmm10 0x106a
#define asm_xmm11 0x106b
#define asm_xmm12 0x106c
#define asm_xmm13 0x106d
#define asm_xmm14 0x106e
#define asm_xmm15 0x106f
#define asm_ymm0 0x2060
#define asm_ymm1 0x2061
#define asm_ymm2 0x2062
#define asm_ymm3 0x2063
#define asm_ymm4 0x2064
#define asm_ymm5 0x2065
#define asm_ymm6 0x2066
#define asm_ymm7 0x2067
#define asm_ymm8 0x2068
#define asm_ymm9 0x2069
#define asm_ymm10 0x206a
#define asm_ymm11 0x206b
#define asm_ymm12 0x206c
#define asm_ymm13 0x206d
#define asm_ymm14 0x206e
#define asm_ymm15 0x206f
#define asm_zmm0 0x4060
#define asm_zmm1 0x4061
#define asm_zmm2 0x4062
#define asm_zmm3 0x4063
#define asm_zmm4 0x4064
#define asm_zmm5 0x4065
#define asm_zmm6 0x4066
#define asm_zmm7 0x4067
#define asm_zmm8 0x4068
#define asm_zmm9 0x4069
#define asm_zmm10 0x406a
#define asm_zmm11 0x406b
#define asm_zmm12 0x406c
#define asm_zmm13 0x406d
#define asm_zmm14 0x406e
#define asm_zmm15 0x406f
#define asm_zmm16 0x4070
#define asm_zmm17 0x4071
#define asm_zmm18 0x4072
#define asm_zmm19 0x4073
#define asm_zmm20 0x4074
#define asm_zmm21 0x4075
#define asm_zmm22 0x4076
#define asm_zmm23 0x4077
#define asm_zmm24 0x4078
#define asm_zmm25 0x4079
#define asm_zmm26 0x407a
#define asm_zmm27 0x407b
#define asm_zmm28 0x407c
#define asm_zmm29 0x407d
#define asm_zmm30 0x407e
#define asm_zmm31 0x407f


#endif
