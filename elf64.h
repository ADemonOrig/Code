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

#ifndef __GEN_ELF_X64__
#define __GEN_ELF_X64__


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


#undef elf_null
#undef elf_object
#undef elf_shared_object
#undef elf_executable
#undef elf_core
#define elf_null 0
#define elf_object 1
#define elf_executable 2
#define elf_shared_object 3
#define elf_core 4


#undef segment_null
#undef segment_load
#undef segment_dynamic
#undef segment_interp
#undef segment_note
#undef segment_shlib
#undef segment_phdr
#undef segment_tls
#define segment_null 0
#define segment_load 1
#define segment_dynamic 2
#define segment_interp 3
#define segment_note 4
#define segment_shlib 5
#define segment_phdr 6
#define segment_tls 7


#undef section_null
#undef section_text
#undef section_code
#undef section_data
#undef section_rodata
#undef section_bss
#undef section_tls
#undef section_init
#undef section_fini
#define section_null 0
#define section_text ".text"
#define section_code section_text
#define section_data ".data"
#define section_rodata ".rodata"
#define section_bss ".bss"
#define section_tls ".tls"
#define section_init ".init"
#define section_fini ".fini"


#undef reg_al
#undef reg_ah
#undef reg_ax
#undef reg_eax
#undef reg_rax
#undef reg_bl
#undef reg_bh
#undef reg_bx
#undef reg_ebx
#undef reg_rbx
#undef reg_cl
#undef reg_ch
#undef reg_cx
#undef reg_ecx
#undef reg_rcx
#undef reg_dl
#undef reg_dh
#undef reg_dx
#undef reg_edx
#undef reg_rdx
#undef reg_sil
#undef reg_si
#undef reg_esi
#undef reg_rsi
#undef reg_dil
#undef reg_di
#undef reg_edi
#undef reg_rdi
#undef reg_bpl
#undef reg_bp
#undef reg_ebp
#undef reg_rbp
#undef reg_spl
#undef reg_sp
#undef reg_esp
#undef reg_rsp
#undef reg_r8b
#undef reg_r8w
#undef reg_r8d
#undef reg_r8
#undef reg_r9b
#undef reg_r9w
#undef reg_r9d
#undef reg_r9
#undef reg_r10b
#undef reg_r10w
#undef reg_r10d
#undef reg_r10
#undef reg_r11b
#undef reg_r11w
#undef reg_r11d
#undef reg_r11
#undef reg_r12b
#undef reg_r12w
#undef reg_r12d
#undef reg_r12
#undef reg_r13b
#undef reg_r13w
#undef reg_r13d
#undef reg_r13
#undef reg_r14b
#undef reg_r14w
#undef reg_r14d
#undef reg_r14
#undef reg_r15b
#undef reg_r15w
#undef reg_r15d
#undef reg_r15
#undef reg_flags
#undef reg_eflags
#undef reg_rflags
#undef reg_ip
#undef reg_eip
#undef reg_rip
#undef reg_cs
#undef reg_ds
#undef reg_es
#undef reg_fs
#undef reg_gs
#undef reg_ss
#undef reg_cr0
#undef reg_cr1
#undef reg_cr2
#undef reg_cr3
#undef reg_cr4
#undef reg_cr5
#undef reg_cr6
#undef reg_cr7
#undef reg_cr8
#undef reg_cr9
#undef reg_cr10
#undef reg_cr11
#undef reg_cr12
#undef reg_cr13
#undef reg_cr14
#undef reg_cr15
#undef reg_dr0
#undef reg_dr1
#undef reg_dr2
#undef reg_dr3
#undef reg_dr4
#undef reg_dr5
#undef reg_dr6
#undef reg_dr7
#undef reg_dr8
#undef reg_dr9
#undef reg_dr10
#undef reg_dr11
#undef reg_dr12
#undef reg_dr13
#undef reg_dr14
#undef reg_dr15
#undef reg_st0
#undef reg_st1
#undef reg_st2
#undef reg_st3
#undef reg_st4
#undef reg_st5
#undef reg_st6
#undef reg_st7
#undef reg_mm0
#undef reg_mm1
#undef reg_mm2
#undef reg_mm3
#undef reg_mm4
#undef reg_mm5
#undef reg_mm6
#undef reg_mm7
#undef reg_xmm0
#undef reg_xmm1
#undef reg_xmm2
#undef reg_xmm3
#undef reg_xmm4
#undef reg_xmm5
#undef reg_xmm6
#undef reg_xmm7
#undef reg_xmm8
#undef reg_xmm9
#undef reg_xmm10
#undef reg_xmm11
#undef reg_xmm12
#undef reg_xmm13
#undef reg_xmm14
#undef reg_xmm15
#undef reg_ymm0
#undef reg_ymm1
#undef reg_ymm2
#undef reg_ymm3
#undef reg_ymm4
#undef reg_ymm5
#undef reg_ymm6
#undef reg_ymm7
#undef reg_ymm8
#undef reg_ymm9
#undef reg_ymm10
#undef reg_ymm11
#undef reg_ymm12
#undef reg_ymm13
#undef reg_ymm14
#undef reg_ymm15
#undef reg_zmm0
#undef reg_zmm1
#undef reg_zmm2
#undef reg_zmm3
#undef reg_zmm4
#undef reg_zmm5
#undef reg_zmm6
#undef reg_zmm7
#undef reg_zmm8
#undef reg_zmm9
#undef reg_zmm10
#undef reg_zmm11
#undef reg_zmm12
#undef reg_zmm13
#undef reg_zmm14
#undef reg_zmm15
#undef reg_zmm16
#undef reg_zmm17
#undef reg_zmm18
#undef reg_zmm19
#undef reg_zmm20
#undef reg_zmm21
#undef reg_zmm22
#undef reg_zmm23
#undef reg_zmm24
#undef reg_zmm25
#undef reg_zmm26
#undef reg_zmm27
#undef reg_zmm28
#undef reg_zmm29
#undef reg_zmm30
#undef reg_zmm31
#define reg_al 0x0100
#define reg_ah 0x0101
#define reg_ax 0x0200
#define reg_eax 0x0400
#define reg_rax 0x0800
#define reg_bl 0x0102
#define reg_bh 0x0103
#define reg_bx 0x0202
#define reg_ebx 0x0402
#define reg_rbx 0x0802
#define reg_cl 0x0104
#define reg_ch 0x0105
#define reg_cx 0x0204
#define reg_ecx 0x0404
#define reg_rcx 0x0804
#define reg_dl 0x0106
#define reg_dh 0x0107
#define reg_dx 0x0206
#define reg_edx 0x0406
#define reg_rdx 0x0806
#define reg_sil 0x0108
#define reg_si 0x0208
#define reg_esi 0x0408
#define reg_rsi 0x0808
#define reg_dil 0x0109
#define reg_di 0x0209
#define reg_edi 0x0409
#define reg_rdi 0x0809
#define reg_bpl 0x010a
#define reg_bp 0x020a
#define reg_ebp 0x040a
#define reg_rbp 0x080a
#define reg_spl 0x010b
#define reg_sp 0x020b
#define reg_esp 0x040b
#define reg_rsp 0x080b
#define reg_r8b 0x010c
#define reg_r8w 0x020c
#define reg_r8d 0x040c
#define reg_r8 0x080c
#define reg_r9b 0x010d
#define reg_r9w 0x020d
#define reg_r9d 0x040d
#define reg_r9 0x080d
#define reg_r10b 0x010e
#define reg_r10w 0x020e
#define reg_r10d 0x040e
#define reg_r10 0x080e
#define reg_r11b 0x010f
#define reg_r11w 0x020f
#define reg_r11d 0x040f
#define reg_r11 0x080f
#define reg_r12b 0x0110
#define reg_r12w 0x0210
#define reg_r12d 0x0410
#define reg_r12 0x0810
#define reg_r13b 0x0111
#define reg_r13w 0x0211
#define reg_r13d 0x0411
#define reg_r13 0x0811
#define reg_r14b 0x0112
#define reg_r14w 0x0212
#define reg_r14d 0x0412
#define reg_r14 0x0812
#define reg_r15b 0x0113
#define reg_r15w 0x0213
#define reg_r15d 0x0413
#define reg_r15 0x0813
#define reg_flags 0x0214
#define reg_eflags 0x0414
#define reg_rflags 0x0814
#define reg_ip 0x0215
#define reg_eip 0x0415
#define reg_rip 0x0815
#define reg_cs 0x0216
#define reg_ds 0x0217
#define reg_es 0x0218
#define reg_fs 0x0219
#define reg_gs 0x021a
#define reg_ss 0x021b
#define reg_cr0 0x0820
#define reg_cr1 0x0821
#define reg_cr2 0x0822
#define reg_cr3 0x0823
#define reg_cr4 0x0824
#define reg_cr5 0x0825
#define reg_cr6 0x0826
#define reg_cr7 0x0827
#define reg_cr8 0x0828
#define reg_cr9 0x0829
#define reg_cr10 0x082a
#define reg_cr11 0x082b
#define reg_cr12 0x082c
#define reg_cr13 0x082d
#define reg_cr14 0x082e
#define reg_cr15 0x082f
#define reg_dr0 0x0830
#define reg_dr1 0x0831
#define reg_dr2 0x0832
#define reg_dr3 0x0833
#define reg_dr4 0x0834
#define reg_dr5 0x0835
#define reg_dr6 0x0836
#define reg_dr7 0x0837
#define reg_dr8 0x0838
#define reg_dr9 0x0839
#define reg_dr10 0x083a
#define reg_dr11 0x083b
#define reg_dr12 0x083c
#define reg_dr13 0x083d
#define reg_dr14 0x083e
#define reg_dr15 0x083f
#define reg_st0 0x0a40
#define reg_st1 0x0a41
#define reg_st2 0x0a42
#define reg_st3 0x0a43
#define reg_st4 0x0a44
#define reg_st5 0x0a45
#define reg_st6 0x0a46
#define reg_st7 0x0a47
#define reg_mm0 0x0850
#define reg_mm1 0x0851
#define reg_mm2 0x0852
#define reg_mm3 0x0853
#define reg_mm4 0x0854
#define reg_mm5 0x0855
#define reg_mm6 0x0856
#define reg_mm7 0x0857
#define reg_xmm0 0x1060
#define reg_xmm1 0x1061
#define reg_xmm2 0x1062
#define reg_xmm3 0x1063
#define reg_xmm4 0x1064
#define reg_xmm5 0x1065
#define reg_xmm6 0x1066
#define reg_xmm7 0x1067
#define reg_xmm8 0x1068
#define reg_xmm9 0x1069
#define reg_xmm10 0x106a
#define reg_xmm11 0x106b
#define reg_xmm12 0x106c
#define reg_xmm13 0x106d
#define reg_xmm14 0x106e
#define reg_xmm15 0x106f
#define reg_ymm0 0x2060
#define reg_ymm1 0x2061
#define reg_ymm2 0x2062
#define reg_ymm3 0x2063
#define reg_ymm4 0x2064
#define reg_ymm5 0x2065
#define reg_ymm6 0x2066
#define reg_ymm7 0x2067
#define reg_ymm8 0x2068
#define reg_ymm9 0x2069
#define reg_ymm10 0x206a
#define reg_ymm11 0x206b
#define reg_ymm12 0x206c
#define reg_ymm13 0x206d
#define reg_ymm14 0x206e
#define reg_ymm15 0x206f
#define reg_zmm0 0x4060
#define reg_zmm1 0x4061
#define reg_zmm2 0x4062
#define reg_zmm3 0x4063
#define reg_zmm4 0x4064
#define reg_zmm5 0x4065
#define reg_zmm6 0x4066
#define reg_zmm7 0x4067
#define reg_zmm8 0x4068
#define reg_zmm9 0x4069
#define reg_zmm10 0x406a
#define reg_zmm11 0x406b
#define reg_zmm12 0x406c
#define reg_zmm13 0x406d
#define reg_zmm14 0x406e
#define reg_zmm15 0x406f
#define reg_zmm16 0x4070
#define reg_zmm17 0x4071
#define reg_zmm18 0x4072
#define reg_zmm19 0x4073
#define reg_zmm20 0x4074
#define reg_zmm21 0x4075
#define reg_zmm22 0x4076
#define reg_zmm23 0x4077
#define reg_zmm24 0x4078
#define reg_zmm25 0x4079
#define reg_zmm26 0x407a
#define reg_zmm27 0x407b
#define reg_zmm28 0x407c
#define reg_zmm29 0x407d
#define reg_zmm30 0x407e
#define reg_zmm31 0x407f


struct gelf_segment {
    u32 type;
    u32 flags;
    u64 offset;
    u64 paddr;
    u64 vaddr;
    u64 size;
    u64 msize;
    u64 align;
};


struct gelf_address {
    char *name;
    u64 len;
    u64 offset;
};


struct gelf {
    u8 *data;
    u8 *curr;
    u64 cap;
    struct gelf_segment *segs;
    u64 seg_count;
    u64 seg_cap;
    struct gelf_address *labels;
    u64 l_count;
    u64 l_cap;
    struct gelf_address *addrs;
    u64 a_count;
    u64 a_cap;
    u64 entry;
    u8 format;
};

typedef struct gelf gelf;


u32 gelf_init(struct gelf *ge) {
    if (ge == 0) return 1;
    ge->format = 0;
    ge->entry = 0;
    ge->data = 0;
    ge->curr = 0;
    ge->cap = 0;
    ge->segs = 0;
    ge->seg_count = 0;
    ge->seg_cap = 0;
    ge->labels = 0;
    ge->l_count = 0;
    ge->l_cap = 0;
    ge->addrs = 0;
    ge->a_count = 0;
    ge->a_cap = 0;
    return 0;
}


u32 gelf_free(struct gelf *ge) {
    if (ge == 0) return 1;
    ge->format = 0;
    ge->entry = 0;
    if (ge->cap != 0) {
        free(ge->data);
        ge->data = 0;
        ge->curr = 0;
        ge->cap = 0;
    }
    if (ge->seg_cap != 0) {
        free(ge->segs);
        ge->segs = 0;
        ge->seg_count = 0;
        ge->seg_cap = 0;
    }
    if (ge->l_cap != 0) {
        for(u64 i = 0; i < ge->l_count; i++) {
            if (ge->labels[i].len != 0) free(ge->labels[i].name);
        }
        free(ge->labels);
        ge->labels = 0;
        ge->l_count = 0;
        ge->l_cap = 0;
    }
    if (ge->a_cap != 0) {
        for(u64 i = 0; i < ge->a_count; i++) {
            if (ge->addrs[i].len != 0) free(ge->addrs[i].name);
        }
        free(ge->addrs);
        ge->addrs = 0;
        ge->a_count = 0;
        ge->a_cap = 0;
    }
    return 0;
}


u32 gelf_bytes(struct gelf *ge, void *data, u64 size) {
    if (ge == 0) return 1;
    if (size == 0) return 0;
    u64 len = ge->cap ? ge->curr - ge->data : 0;
    if (len + size > ge->cap) {
        u64 new_cap = ge->cap ? ge->cap * 2 : 4096;
        while(len + size > new_cap) new_cap *= 2;
        u8 *new_data = (u8*)realloc(ge->data, new_cap);
        if (new_data == 0) return 2;
        ge->data = new_data;
        ge->curr = new_data + len;
        ge->cap = new_cap;
    }
    if (data) memcpy(ge->curr, data, size);
    else memset(ge->curr, 0, size);
    ge->curr += size;
    return 0;
}


u32 gelf_segment(struct gelf *ge, u8 flags) {
    if (ge == 0) return 1;
    return 0;
}


u32 gelf_segment_end(struct gelf *ge) {
    if (ge == 0) return 1;
    return 0;
}


u32 gelf_section()


u32 gelf_build(struct gelf *ge, const char *path) {
    if (ge == 0) return 1;
    const char *fname = path == 0 ? "a" : path;
    FILE *file = fopen(fname, "wb+");
    if (file == 0) return 2;
    if (ge->format == elf_null) {
        u64 len = ge->cap ? ge->curr - ge->data : 0;
        fwrite(ge->data, 1, len, file);
        fclose(file);
        return 0;
    }
    u8 ehdr[64];
    memset(ehdr, 0, 64);
    ehdr[0] = 0x7F;
    ehdr[1] = 'E';
    ehdr[2] = 'L';
    ehdr[3] = 'F';
    ehdr[4] = 2;
    ehdr[5] = 1;
    ehdr[6] = 1;
    ehdr[16] = ge->format;
    ehdr[18] = 0x3E;
    ehdr[20] = 1;
    if (ge->format == elf_executable) {
        ehdr[24] = (u8)(((u64)ge->entry) & 0xFF);
        ehdr[25] = (u8)(((u64)ge->entry >> 8) & 0xFF);
        ehdr[26] = (u8)(((u64)ge->entry >> 16) & 0xFF);
        ehdr[27] = (u8)(((u64)ge->entry >> 24) & 0xFF);
        ehdr[28] = (u8)(((u64)ge->entry >> 32) & 0xFF);
        ehdr[29] = (u8)(((u64)ge->entry >> 40) & 0xFF);
        ehdr[30] = (u8)(((u64)ge->entry >> 48) & 0xFF);
        ehdr[31] = (u8)(((u64)ge->entry >> 56) & 0xFF);
    }
    ehdr[32] = 64;
    ehdr[52] = 64;
    ehdr[54] = 56;
    ehdr[56] = (u8)((ge->seg_count) & 0xFF);
    ehdr[57] = (u8)((ge->seg_count >> 8) & 0xFF);
    if (fwrite(ehdr, 1, 64, file) != 64) {
        fclose(file);
        return 3;
    }
    u8 ph[56];
    for (u64 i = 0; i < ge->seg_count; i++) {
        struct gelf_segment s = ge->segs[i];
        ph[0] = (u8)(s.type) & 0xFF;
        ph[1] = (u8)(s.type >>  8) & 0xFF;
        ph[2] = (u8)(s.type >> 16) & 0xFF;
        ph[3] = (u8)(s.type >> 24) & 0xFF;
        ph[4] = (u8)(s.flags) & 0xFF;
        ph[5] = (u8)(s.flags >>  8) & 0xFF;
        ph[6] = (u8)(s.flags >> 16) & 0xFF;
        ph[7] = (u8)(s.flags >> 24) & 0xFF;
        ph[8] = (u8)(s.offset) & 0xFF;
        ph[9] = (u8)(s.offset >>  8) & 0xFF;
        ph[10] = (u8)(s.offset >> 16) & 0xFF;
        ph[11] = (u8)(s.offset >> 24) & 0xFF;
        ph[12] = (u8)(s.offset >> 32) & 0xFF;
        ph[13] = (u8)(s.offset >> 40) & 0xFF;
        ph[14] = (u8)(s.offset >> 48) & 0xFF;
        ph[15] = (u8)(s.offset >> 56) & 0xFF;
        ph[16] = (u8)(s.vaddr) & 0xFF;
        ph[17] = (u8)(s.vaddr >>  8) & 0xFF;
        ph[18] = (u8)(s.vaddr >> 16) & 0xFF;
        ph[19] = (u8)(s.vaddr >> 24) & 0xFF;
        ph[20] = (u8)(s.vaddr >> 32) & 0xFF;
        ph[21] = (u8)(s.vaddr >> 40) & 0xFF;
        ph[22] = (u8)(s.vaddr >> 48) & 0xFF;
        ph[23] = (u8)(s.vaddr >> 56) & 0xFF;
        ph[24] = (u8)(s.paddr) & 0xFF;
        ph[25] = (u8)(s.paddr >>  8) & 0xFF;
        ph[26] = (u8)(s.paddr >> 16) & 0xFF;
        ph[27] = (u8)(s.paddr >> 24) & 0xFF;
        ph[28] = (u8)(s.paddr >> 32) & 0xFF;
        ph[29] = (u8)(s.paddr >> 40) & 0xFF;
        ph[30] = (u8)(s.paddr >> 48) & 0xFF;
        ph[31] = (u8)(s.paddr >> 56) & 0xFF;
        ph[32] = (u8)(s.size) & 0xFF;
        ph[33] = (u8)(s.size >>  8) & 0xFF;
        ph[34] = (u8)(s.size >> 16) & 0xFF;
        ph[35] = (u8)(s.size >> 24) & 0xFF;
        ph[36] = (u8)(s.size >> 32) & 0xFF;
        ph[37] = (u8)(s.size >> 40) & 0xFF;
        ph[38] = (u8)(s.size >> 48) & 0xFF;
        ph[39] = (u8)(s.size >> 56) & 0xFF;
        ph[40] = (u8)(s.msize) & 0xFF;
        ph[41] = (u8)(s.msize >>  8) & 0xFF;
        ph[42] = (u8)(s.msize >> 16) & 0xFF;
        ph[43] = (u8)(s.msize >> 24) & 0xFF;
        ph[44] = (u8)(s.msize >> 32) & 0xFF;
        ph[45] = (u8)(s.msize >> 40) & 0xFF;
        ph[46] = (u8)(s.msize >> 48) & 0xFF;
        ph[47] = (u8)(s.msize >> 56) & 0xFF;
        ph[48] = (u8)(s.align) & 0xFF;
        ph[49] = (u8)(s.align >>  8) & 0xFF;
        ph[50] = (u8)(s.align >> 16) & 0xFF;
        ph[51] = (u8)(s.align >> 24) & 0xFF;
        ph[52] = (u8)(s.align >> 32) & 0xFF;
        ph[53] = (u8)(s.align >> 40) & 0xFF;
        ph[54] = (u8)(s.align >> 48) & 0xFF;
        ph[55] = (u8)(s.align >> 56) & 0xFF;
        if (fwrite(ph, 1, 56, file) != 56) {
            fclose(file);
            return 3;
        }
    }
    u64 len = ge->cap ? (u64)(ge->curr - ge->data) : 0;
    if (len) {
        if (fwrite(ge->data, 1, len, file) != len) {
            fclose(file);
            return 3;
        }
    }
    fclose(file);
    return 0;
}


u32 gelf_format(struct gelf *ge, u8 format) {
    if (ge == 0) return 1;
    ge->format = format;
    return 0;
}


u32 gelf_byte(struct gelf *ge, u8 v) {
    return gelf_bytes(ge, &v, 1);
}


u32 gelf_short(struct gelf *ge, u16 v) {
    static u8 b[2];
    b[0] = v & 0xFF;
    b[1] = (v >> 8) & 0xFF;
    return gelf_bytes(ge, &b, 2);
}


u32 gelf_int(struct gelf *ge, u32 v) {
    static u8 b[4];
    b[0] = v & 0xFF;
    b[1] = (v >> 8) & 0xFF;
    b[2] = (v >> 16) & 0xFF;
    b[3] = (v >> 24) & 0xFF;
    return gelf_bytes(ge, &b, 4);
}


u32 gelf_long(struct gelf *ge, u64 v) {
    static u8 b[8];
    b[0] = v & 0xFF;
    b[1] = (v >> 8) & 0xFF;
    b[2] = (v >> 16) & 0xFF;
    b[3] = (v >> 24) & 0xFF;
    b[4] = (v >> 32) & 0xFF;
    b[5] = (v >> 40) & 0xFF;
    b[6] = (v >> 48) & 0xFF;
    b[7] = (v >> 56) & 0xFF;
    return gelf_bytes(ge, &b, 8);
}

#endif
