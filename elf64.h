/*

simple elfembler lib for C / C++

for architecture x86-64 and os linux64

generete:
    ELF64 object
    ELF64 shared object
    ELF64 archive
    ELF64 executable PIE
    ELF64 core

warning:
    this lib for 64-bits system and architecture

*/

#ifndef __ELF64_H__
#define __ELF64_H__


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#undef i8
#undef u8
#undef i32
#undef i64
#undef i16
#undef u16
#undef u32
#undef u64
#define i8  signed char
#define i16 signed short int
#define i32 signed long int
#define i64 signed long long int
#define u8  unsigned char
#define u16 unsigned short int
#define u32 unsigned long int
#define u64 unsigned long long int
#endif


#undef null
#define null 0


#undef format_null
#undef format_bin
#undef format_elf64_object
#undef format_elf64_shared_object
#undef format_elf64_archive
#undef format_elf64_executable
#undef format_elf64_core
#define format_null 0
#define format_bin 1
#define format_elf64 2
#define format_elf64_object 2
#define format_elf64_shared_object 3
#define format_elf64_archive 4
#define format_elf64_executable 5
#define format_elf64_core 6


#undef segment_elf64_type_load
#define segment_elf64_type_load 1


#undef section_null
#undef section_text
#undef section_code
#undef section_data
#undef section_bin
#undef section_rodata
#undef section_rdata
#undef section_bss
#undef section_tls
#undef section_init
#undef section_fini
#define section_null 0
#define section_text ".text"
#define section_code section_text
#define section_data ".data"
#define section_bin section_data
#define section_rodata ".rodata"
#define section_rdata section_rodata
#define section_bss ".bss"
#define section_tls ".tls"
#define section_init ".init"
#define section_fini ".fini"


#undef al
#undef ah
#undef ax
#undef eax
#undef rax
#undef bl
#undef bh
#undef bx
#undef ebx
#undef rbx
#undef cl
#undef ch
#undef cx
#undef ecx
#undef rcx
#undef dl
#undef dh
#undef dx
#undef edx
#undef rdx
#undef sil
#undef si
#undef esi
#undef rsi
#undef dil
#undef di
#undef edi
#undef rdi
#undef bpl
#undef bp
#undef ebp
#undef rbp
#undef spl
#undef sp
#undef esp
#undef rsp
#undef r8b
#undef r8w
#undef r8d
#undef r8
#undef r9b
#undef r9w
#undef r9d
#undef r9
#undef r10b
#undef r10w
#undef r10d
#undef r10
#undef r11b
#undef r11w
#undef r11d
#undef r11
#undef r12b
#undef r12w
#undef r12d
#undef r12
#undef r13b
#undef r13w
#undef r13d
#undef r13
#undef r14b
#undef r14w
#undef r14d
#undef r14
#undef r15b
#undef r15w
#undef r15d
#undef r15
#undef flags
#undef eflags
#undef rflags
#undef ip
#undef eip
#undef rip
#undef cs
#undef ds
#undef es
#undef fs
#undef gs
#undef ss
#undef cr0
#undef cr1
#undef cr2
#undef cr3
#undef cr4
#undef cr5
#undef cr6
#undef cr7
#undef cr8
#undef cr9
#undef cr10
#undef cr11
#undef cr12
#undef cr13
#undef cr14
#undef cr15
#undef dr0
#undef dr1
#undef dr2
#undef dr3
#undef dr4
#undef dr5
#undef dr6
#undef dr7
#undef dr8
#undef dr9
#undef dr10
#undef dr11
#undef dr12
#undef dr13
#undef dr14
#undef dr15
#undef st0
#undef st1
#undef st2
#undef st3
#undef st4
#undef st5
#undef st6
#undef st7
#undef mm0
#undef mm1
#undef mm2
#undef mm3
#undef mm4
#undef mm5
#undef mm6
#undef mm7
#undef xmm0
#undef xmm1
#undef xmm2
#undef xmm3
#undef xmm4
#undef xmm5
#undef xmm6
#undef xmm7
#undef xmm8
#undef xmm9
#undef xmm10
#undef xmm11
#undef xmm12
#undef xmm13
#undef xmm14
#undef xmm15
#undef ymm0
#undef ymm1
#undef ymm2
#undef ymm3
#undef ymm4
#undef ymm5
#undef ymm6
#undef ymm7
#undef ymm8
#undef ymm9
#undef ymm10
#undef ymm11
#undef ymm12
#undef ymm13
#undef ymm14
#undef ymm15
#undef zmm0
#undef zmm1
#undef zmm2
#undef zmm3
#undef zmm4
#undef zmm5
#undef zmm6
#undef zmm7
#undef zmm8
#undef zmm9
#undef zmm10
#undef zmm11
#undef zmm12
#undef zmm13
#undef zmm14
#undef zmm15
#undef zmm16
#undef zmm17
#undef zmm18
#undef zmm19
#undef zmm20
#undef zmm21
#undef zmm22
#undef zmm23
#undef zmm24
#undef zmm25
#undef zmm26
#undef zmm27
#undef zmm28
#undef zmm29
#undef zmm30
#undef zmm31
#define al 0x0100
#define ah 0x0101
#define ax 0x0200
#define eax 0x0400
#define rax 0x0800
#define bl 0x0102
#define bh 0x0103
#define bx 0x0202
#define ebx 0x0402
#define rbx 0x0802
#define cl 0x0104
#define ch 0x0105
#define cx 0x0204
#define ecx 0x0404
#define rcx 0x0804
#define dl 0x0106
#define dh 0x0107
#define dx 0x0206
#define edx 0x0406
#define rdx 0x0806
#define sil 0x0108
#define si 0x0208
#define esi 0x0408
#define rsi 0x0808
#define dil 0x0109
#define di 0x0209
#define edi 0x0409
#define rdi 0x0809
#define bpl 0x010a
#define bp 0x020a
#define ebp 0x040a
#define rbp 0x080a
#define spl 0x010b
#define sp 0x020b
#define esp 0x040b
#define rsp 0x080b
#define r8b 0x010c
#define r8w 0x020c
#define r8d 0x040c
#define r8 0x080c
#define r9b 0x010d
#define r9w 0x020d
#define r9d 0x040d
#define r9 0x080d
#define r10b 0x010e
#define r10w 0x020e
#define r10d 0x040e
#define r10 0x080e
#define r11b 0x010f
#define r11w 0x020f
#define r11d 0x040f
#define r11 0x080f
#define r12b 0x0110
#define r12w 0x0210
#define r12d 0x0410
#define r12 0x0810
#define r13b 0x0111
#define r13w 0x0211
#define r13d 0x0411
#define r13 0x0811
#define r14b 0x0112
#define r14w 0x0212
#define r14d 0x0412
#define r14 0x0812
#define r15b 0x0113
#define r15w 0x0213
#define r15d 0x0413
#define r15 0x0813
#define flags 0x0214
#define eflags 0x0414
#define rflags 0x0814
#define ip 0x0215
#define eip 0x0415
#define rip 0x0815
#define cs 0x0216
#define ds 0x0217
#define es 0x0218
#define fs 0x0219
#define gs 0x021a
#define ss 0x021b
#define cr0 0x0820
#define cr1 0x0821
#define cr2 0x0822
#define cr3 0x0823
#define cr4 0x0824
#define cr5 0x0825
#define cr6 0x0826
#define cr7 0x0827
#define cr8 0x0828
#define cr9 0x0829
#define cr10 0x082a
#define cr11 0x082b
#define cr12 0x082c
#define cr13 0x082d
#define cr14 0x082e
#define cr15 0x082f
#define dr0 0x0830
#define dr1 0x0831
#define dr2 0x0832
#define dr3 0x0833
#define dr4 0x0834
#define dr5 0x0835
#define dr6 0x0836
#define dr7 0x0837
#define dr8 0x0838
#define dr9 0x0839
#define dr10 0x083a
#define dr11 0x083b
#define dr12 0x083c
#define dr13 0x083d
#define dr14 0x083e
#define dr15 0x083f
#define st0 0x0a40
#define st1 0x0a41
#define st2 0x0a42
#define st3 0x0a43
#define st4 0x0a44
#define st5 0x0a45
#define st6 0x0a46
#define st7 0x0a47
#define mm0 0x0850
#define mm1 0x0851
#define mm2 0x0852
#define mm3 0x0853
#define mm4 0x0854
#define mm5 0x0855
#define mm6 0x0856
#define mm7 0x0857
#define xmm0 0x1060
#define xmm1 0x1061
#define xmm2 0x1062
#define xmm3 0x1063
#define xmm4 0x1064
#define xmm5 0x1065
#define xmm6 0x1066
#define xmm7 0x1067
#define xmm8 0x1068
#define xmm9 0x1069
#define xmm10 0x106a
#define xmm11 0x106b
#define xmm12 0x106c
#define xmm13 0x106d
#define xmm14 0x106e
#define xmm15 0x106f
#define ymm0 0x2060
#define ymm1 0x2061
#define ymm2 0x2062
#define ymm3 0x2063
#define ymm4 0x2064
#define ymm5 0x2065
#define ymm6 0x2066
#define ymm7 0x2067
#define ymm8 0x2068
#define ymm9 0x2069
#define ymm10 0x206a
#define ymm11 0x206b
#define ymm12 0x206c
#define ymm13 0x206d
#define ymm14 0x206e
#define ymm15 0x206f
#define zmm0 0x4060
#define zmm1 0x4061
#define zmm2 0x4062
#define zmm3 0x4063
#define zmm4 0x4064
#define zmm5 0x4065
#define zmm6 0x4066
#define zmm7 0x4067
#define zmm8 0x4068
#define zmm9 0x4069
#define zmm10 0x406a
#define zmm11 0x406b
#define zmm12 0x406c
#define zmm13 0x406d
#define zmm14 0x406e
#define zmm15 0x406f
#define zmm16 0x4070
#define zmm17 0x4071
#define zmm18 0x4072
#define zmm19 0x4073
#define zmm20 0x4074
#define zmm21 0x4075
#define zmm22 0x4076
#define zmm23 0x4077
#define zmm24 0x4078
#define zmm25 0x4079
#define zmm26 0x407a
#define zmm27 0x407b
#define zmm28 0x407c
#define zmm29 0x407d
#define zmm30 0x407e
#define zmm31 0x407f


struct elf64_segment {
    u8 type;
    u8 *offset;
    u8 mode;
    u64 size;
    u64 msize;
    u64 align;
};


struct elf64_address {
    u8 *offset;
    char *name;
    u64 len;
};


struct elf64 {
    u8 format;
    u8 header[64];
    u8 *data;
    u8 *offset;
    u64 cap;
    struct elf64_segment *segs;
    u64 seg_count;
    u64 seg_cap;
    struct elf64_address *labels;
    u64 l_count;
    u64 l_cap;
    struct elf64_address *addrs;
    u64 a_count;
    u64 a_cap;
};


u8 elf64_init(struct elf64 *e64) {
    if (e64 == null) return 1;
    e64->format = format_null;
    e64->data = null;
    e64->offset = null;
    e64->cap = 0;
    e64->segs = null;
    e64->seg_count = 0;
    e64->seg_cap = 0;
    e64->labels = null;
    e64->l_count = 0;
    e64->l_cap = 0;
    e64->addrs = null;
    e64->a_count = 0;
    e64->a_cap = 0;
    return 0;
}


u8 elf64_free(struct elf64 *e64) {
    if (e64 == null) return 1;
    e64->format = format_null;
    if (e64->header != null) {
        free(elf->header);
        e64->header = null;
    }
    if (e64->cap != 0) {
        free(e64->data);
        e64->data = null;
        e64->offset = null;
        e64->cap = 0;
    }
    if (e64->seg_cap != 0) {
        free(e64->segs);
        e64->segs = null;
        e64->seg_count = 0;
        e64->seg_cap = 0;
    }
    if (e64->l_cap != 0) {
        for(u64 i = 0; i < e64->l_count; i++) {
            if (e64->labels[i].len != 0) free(e64->labels[i].name);
        }
        free(e64->labels);
        e64->labels = null;
        e64->l_count = 0;
        e64->l_cap = 0;
    }
    if (e64->a_cap != 0) {
        for(u64 i = 0; i < e64->a_count; i++) {
            if (e64->addrs[i].len != 0) free(e64->addrs[i].name);
        }
        free(e64->addrs);
        e64->addrs = null;
        e64->a_count = 0;
        e64->a_cap = 0;
    }
    return 0;
}

#endif
