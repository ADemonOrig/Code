#ifndef __GENE_BIN_H__
#define __GENE_BIN_H__

#undef x86_al
#undef x86_ah
#undef x86_ax
#undef x86_eax
#undef x86_rax
#undef x86_cl
#undef x86_ch
#undef x86_cx
#undef x86_ecx
#undef x86_rcx
#undef x86_dl
#undef x86_dh
#undef x86_dx
#undef x86_edx
#undef x86_rdx
#undef x86_bl
#undef x86_bh
#undef x86_bx
#undef x86_ebx
#undef x86_rbx
#undef x86_spl
#undef x86_sp
#undef x86_esp
#undef x86_rsp
#undef x86_bpl
#undef x86_bp
#undef x86_ebp
#undef x86_rbp
#undef x86_sil
#undef x86_si
#undef x86_esi
#undef x86_rsi
#undef x86_dil
#undef x86_di
#undef x86_edi
#undef x86_rdi
#undef x86_r8b
#undef x86_r8w
#undef x86_r8d
#undef x86_r8
#undef x86_r9b
#undef x86_r9w
#undef x86_r9d
#undef x86_r9
#undef x86_r10b
#undef x86_r10w
#undef x86_r10d
#undef x86_r10
#undef x86_r11b
#undef x86_r11w
#undef x86_r11d
#undef x86_r11
#undef x86_r12b
#undef x86_r12w
#undef x86_r12d
#undef x86_r12
#undef x86_r13b
#undef x86_r13w
#undef x86_r13d
#undef x86_r13
#undef x86_r14b
#undef x86_r14w
#undef x86_r14d
#undef x86_r14
#undef x86_r15b
#undef x86_r15w
#undef x86_r15d
#undef x86_r15
#undef x86_eip
#undef x86_rip
#undef x86_eflags
#undef x86_rflags
#undef x86_cs
#undef x86_ds
#undef x86_es
#undef x86_fs
#undef x86_gs
#undef x86_ss
#undef x86_st0
#undef x86_st1
#undef x86_st2
#undef x86_st3
#undef x86_st4
#undef x86_st5
#undef x86_st6
#undef x86_st7
#undef x86_mm0
#undef x86_mm1
#undef x86_mm2
#undef x86_mm3
#undef x86_mm4
#undef x86_mm5
#undef x86_mm6
#undef x86_mm7
#undef x86_xmm0
#undef x86_xmm1
#undef x86_xmm2
#undef x86_xmm3
#undef x86_xmm4
#undef x86_xmm5
#undef x86_xmm6
#undef x86_xmm7
#undef x86_xmm8
#undef x86_xmm9
#undef x86_xmm10
#undef x86_xmm11
#undef x86_xmm12
#undef x86_xmm13
#undef x86_xmm14
#undef x86_xmm15
#undef x86_xmm16
#undef x86_xmm17
#undef x86_xmm18
#undef x86_xmm19
#undef x86_xmm20
#undef x86_xmm21
#undef x86_xmm22
#undef x86_xmm23
#undef x86_xmm24
#undef x86_xmm25
#undef x86_xmm26
#undef x86_xmm27
#undef x86_xmm28
#undef x86_xmm29
#undef x86_xmm30
#undef x86_xmm31
#undef x86_ymm0
#undef x86_ymm1
#undef x86_ymm2
#undef x86_ymm3
#undef x86_ymm4
#undef x86_ymm5
#undef x86_ymm6
#undef x86_ymm7
#undef x86_ymm8
#undef x86_ymm9
#undef x86_ymm10
#undef x86_ymm11
#undef x86_ymm12
#undef x86_ymm13
#undef x86_ymm14
#undef x86_ymm15
#undef x86_ymm16
#undef x86_ymm17
#undef x86_ymm18
#undef x86_ymm19
#undef x86_ymm20
#undef x86_ymm21
#undef x86_ymm22
#undef x86_ymm23
#undef x86_ymm24
#undef x86_ymm25
#undef x86_ymm26
#undef x86_ymm27
#undef x86_ymm28
#undef x86_ymm29
#undef x86_ymm30
#undef x86_ymm31
#undef x86_zmm0
#undef x86_zmm1
#undef x86_zmm2
#undef x86_zmm3
#undef x86_zmm4
#undef x86_zmm5
#undef x86_zmm6
#undef x86_zmm7
#undef x86_zmm8
#undef x86_zmm9
#undef x86_zmm10
#undef x86_zmm11
#undef x86_zmm12
#undef x86_zmm13
#undef x86_zmm14
#undef x86_zmm15
#undef x86_zmm16
#undef x86_zmm17
#undef x86_zmm18
#undef x86_zmm19
#undef x86_zmm20
#undef x86_zmm21
#undef x86_zmm22
#undef x86_zmm23
#undef x86_zmm24
#undef x86_zmm25
#undef x86_zmm26
#undef x86_zmm27
#undef x86_zmm28
#undef x86_zmm29
#undef x86_zmm30
#undef x86_zmm31

#undef x86_32_al
#undef x86_32_ah
#undef x86_32_ax
#undef x86_32_eax
#undef x86_32_cl
#undef x86_32_ch
#undef x86_32_cx
#undef x86_32_ecx
#undef x86_32_dl
#undef x86_32_dh
#undef x86_32_dx
#undef x86_32_edx
#undef x86_32_bl
#undef x86_32_bh
#undef x86_32_bx
#undef x86_32_ebx
#undef x86_32_sp
#undef x86_32_esp
#undef x86_32_bp
#undef x86_32_ebp
#undef x86_32_si
#undef x86_32_esi
#undef x86_32_di
#undef x86_32_edi
#undef x86_32_eip
#undef x86_32_eflags
#undef x86_32_cs
#undef x86_32_ds
#undef x86_32_es
#undef x86_32_fs
#undef x86_32_gs
#undef x86_32_ss
#undef x86_32_st0
#undef x86_32_st1
#undef x86_32_st2
#undef x86_32_st3
#undef x86_32_st4
#undef x86_32_st5
#undef x86_32_st6
#undef x86_32_st7
#undef x86_32_mm0
#undef x86_32_mm1
#undef x86_32_mm2
#undef x86_32_mm3
#undef x86_32_mm4
#undef x86_32_mm5
#undef x86_32_mm6
#undef x86_32_mm7
#undef x86_32_xmm0
#undef x86_32_xmm1
#undef x86_32_xmm2
#undef x86_32_xmm3
#undef x86_32_xmm4
#undef x86_32_xmm5
#undef x86_32_xmm6
#undef x86_32_xmm7
#undef x86_32_ymm0
#undef x86_32_ymm1
#undef x86_32_ymm2
#undef x86_32_ymm3
#undef x86_32_ymm4
#undef x86_32_ymm5
#undef x86_32_ymm6
#undef x86_32_ymm7

#undef x86_64_al
#undef x86_64_ah
#undef x86_64_ax
#undef x86_64_eax
#undef x86_64_rax
#undef x86_64_cl
#undef x86_64_ch
#undef x86_64_cx
#undef x86_64_ecx
#undef x86_64_rcx
#undef x86_64_dl
#undef x86_64_dh
#undef x86_64_dx
#undef x86_64_edx
#undef x86_64_rdx
#undef x86_64_bl
#undef x86_64_bh
#undef x86_64_bx
#undef x86_64_ebx
#undef x86_64_rbx
#undef x86_64_spl
#undef x86_64_sp
#undef x86_64_esp
#undef x86_64_rsp
#undef x86_64_bpl
#undef x86_64_bp
#undef x86_64_ebp
#undef x86_64_rbp
#undef x86_64_sil
#undef x86_64_si
#undef x86_64_esi
#undef x86_64_rsi
#undef x86_64_dil
#undef x86_64_di
#undef x86_64_edi
#undef x86_64_rdi
#undef x86_64_r8b
#undef x86_64_r8w
#undef x86_64_r8d
#undef x86_64_r8
#undef x86_64_r9b
#undef x86_64_r9w
#undef x86_64_r9d
#undef x86_64_r9
#undef x86_64_r10b
#undef x86_64_r10w
#undef x86_64_r10d
#undef x86_64_r10
#undef x86_64_r11b
#undef x86_64_r11w
#undef x86_64_r11d
#undef x86_64_r11
#undef x86_64_r12b
#undef x86_64_r12w
#undef x86_64_r12d
#undef x86_64_r12
#undef x86_64_r13b
#undef x86_64_r13w
#undef x86_64_r13d
#undef x86_64_r13
#undef x86_64_r14b
#undef x86_64_r14w
#undef x86_64_r14d
#undef x86_64_r14
#undef x86_64_r15b
#undef x86_64_r15w
#undef x86_64_r15d
#undef x86_64_r15
#undef x86_64_rip
#undef x86_64_rflags
#undef x86_64_cs
#undef x86_64_ds
#undef x86_64_es
#undef x86_64_fs
#undef x86_64_gs
#undef x86_64_ss
#undef x86_64_st0
#undef x86_64_st1
#undef x86_64_st2
#undef x86_64_st3
#undef x86_64_st4
#undef x86_64_st5
#undef x86_64_st6
#undef x86_64_st7
#undef x86_64_mm0
#undef x86_64_mm1
#undef x86_64_mm2
#undef x86_64_mm3
#undef x86_64_mm4
#undef x86_64_mm5
#undef x86_64_mm6
#undef x86_64_mm7
#undef x86_64_xmm0
#undef x86_64_xmm1
#undef x86_64_xmm2
#undef x86_64_xmm3
#undef x86_64_xmm4
#undef x86_64_xmm5
#undef x86_64_xmm6
#undef x86_64_xmm7
#undef x86_64_xmm8
#undef x86_64_xmm9
#undef x86_64_xmm10
#undef x86_64_xmm11
#undef x86_64_xmm12
#undef x86_64_xmm13
#undef x86_64_xmm14
#undef x86_64_xmm15
#undef x86_64_xmm16
#undef x86_64_xmm17
#undef x86_64_xmm18
#undef x86_64_xmm19
#undef x86_64_xmm20
#undef x86_64_xmm21
#undef x86_64_xmm22
#undef x86_64_xmm23
#undef x86_64_xmm24
#undef x86_64_xmm25
#undef x86_64_xmm26
#undef x86_64_xmm27
#undef x86_64_xmm28
#undef x86_64_xmm29
#undef x86_64_xmm30
#undef x86_64_xmm31
#undef x86_64_ymm0
#undef x86_64_ymm1
#undef x86_64_ymm2
#undef x86_64_ymm3
#undef x86_64_ymm4
#undef x86_64_ymm5
#undef x86_64_ymm6
#undef x86_64_ymm7
#undef x86_64_ymm8
#undef x86_64_ymm9
#undef x86_64_ymm10
#undef x86_64_ymm11
#undef x86_64_ymm12
#undef x86_64_ymm13
#undef x86_64_ymm14
#undef x86_64_ymm15
#undef x86_64_ymm16
#undef x86_64_ymm17
#undef x86_64_ymm18
#undef x86_64_ymm19
#undef x86_64_ymm20
#undef x86_64_ymm21
#undef x86_64_ymm22
#undef x86_64_ymm23
#undef x86_64_ymm24
#undef x86_64_ymm25
#undef x86_64_ymm26
#undef x86_64_ymm27
#undef x86_64_ymm28
#undef x86_64_ymm29
#undef x86_64_ymm30
#undef x86_64_ymm31
#undef x86_64_zmm0
#undef x86_64_zmm1
#undef x86_64_zmm2
#undef x86_64_zmm3
#undef x86_64_zmm4
#undef x86_64_zmm5
#undef x86_64_zmm6
#undef x86_64_zmm7
#undef x86_64_zmm8
#undef x86_64_zmm9
#undef x86_64_zmm10
#undef x86_64_zmm11
#undef x86_64_zmm12
#undef x86_64_zmm13
#undef x86_64_zmm14
#undef x86_64_zmm15
#undef x86_64_zmm16
#undef x86_64_zmm17
#undef x86_64_zmm18
#undef x86_64_zmm19
#undef x86_64_zmm20
#undef x86_64_zmm21
#undef x86_64_zmm22
#undef x86_64_zmm23
#undef x86_64_zmm24
#undef x86_64_zmm25
#undef x86_64_zmm26
#undef x86_64_zmm27
#undef x86_64_zmm28
#undef x86_64_zmm29
#undef x86_64_zmm30
#undef x86_64_zmm31

#undef arm64_x0
#undef arm64_x1
#undef arm64_x2
#undef arm64_x3
#undef arm64_x4
#undef arm64_x5
#undef arm64_x6
#undef arm64_x7
#undef arm64_x8
#undef arm64_x9
#undef arm64_x10
#undef arm64_x11
#undef arm64_x12
#undef arm64_x13
#undef arm64_x14
#undef arm64_x15
#undef arm64_x16
#undef arm64_x17
#undef arm64_x18
#undef arm64_x19
#undef arm64_x20
#undef arm64_x21
#undef arm64_x22
#undef arm64_x23
#undef arm64_x24
#undef arm64_x25
#undef arm64_x26
#undef arm64_x27
#undef arm64_x28
#undef arm64_x29
#undef arm64_x30
#undef arm64_sp
#undef arm64_xzr
#undef arm64_w0
#undef arm64_w1
#undef arm64_w2
#undef arm64_w3
#undef arm64_w4
#undef arm64_w5
#undef arm64_w6
#undef arm64_w7
#undef arm64_w8
#undef arm64_w9
#undef arm64_w10
#undef arm64_w11
#undef arm64_w12
#undef arm64_w13
#undef arm64_w14
#undef arm64_w15
#undef arm64_w16
#undef arm64_w17
#undef arm64_w18
#undef arm64_w19
#undef arm64_w20
#undef arm64_w21
#undef arm64_w22
#undef arm64_w23
#undef arm64_w24
#undef arm64_w25
#undef arm64_w26
#undef arm64_w27
#undef arm64_w28
#undef arm64_w29
#undef arm64_w30
#undef arm64_wzr
#undef arm64_v0
#undef arm64_v1
#undef arm64_v2
#undef arm64_v3
#undef arm64_v4
#undef arm64_v5
#undef arm64_v6
#undef arm64_v7
#undef arm64_v8
#undef arm64_v9
#undef arm64_v10
#undef arm64_v11
#undef arm64_v12
#undef arm64_v13
#undef arm64_v14
#undef arm64_v15
#undef arm64_v16
#undef arm64_v17
#undef arm64_v18
#undef arm64_v19
#undef arm64_v20
#undef arm64_v21
#undef arm64_v22
#undef arm64_v23
#undef arm64_v24
#undef arm64_v25
#undef arm64_v26
#undef arm64_v27
#undef arm64_v28
#undef arm64_v29
#undef arm64_v30
#undef arm64_v31
#undef arm64_q0
#undef arm64_q1
#undef arm64_q2
#undef arm64_q3
#undef arm64_q4
#undef arm64_q5
#undef arm64_q6
#undef arm64_q7
#undef arm64_q8
#undef arm64_q9
#undef arm64_q10
#undef arm64_q11
#undef arm64_q12
#undef arm64_q13
#undef arm64_q14
#undef arm64_q15
#undef arm64_q16
#undef arm64_q17
#undef arm64_q18
#undef arm64_q19
#undef arm64_q20
#undef arm64_q21
#undef arm64_q22
#undef arm64_q23
#undef arm64_q24
#undef arm64_q25
#undef arm64_q26
#undef arm64_q27
#undef arm64_q28
#undef arm64_q29
#undef arm64_q30
#undef arm64_q31

#undef arm32_r0
#undef arm32_r1
#undef arm32_r2
#undef arm32_r3
#undef arm32_r4
#undef arm32_r5
#undef arm32_r6
#undef arm32_r7
#undef arm32_r8
#undef arm32_r9
#undef arm32_r10
#undef arm32_r11
#undef arm32_r12
#undef arm32_sp
#undef arm32_lr
#undef arm32_pc
#undef arm32_cpsr
#undef arm32_s0
#undef arm32_s1
#undef arm32_s2
#undef arm32_s3
#undef arm32_s4
#undef arm32_s5
#undef arm32_s6
#undef arm32_s7
#undef arm32_s8
#undef arm32_s9
#undef arm32_s10
#undef arm32_s11
#undef arm32_s12
#undef arm32_s13
#undef arm32_s14
#undef arm32_s15
#undef arm32_s16
#undef arm32_s17
#undef arm32_s18
#undef arm32_s19
#undef arm32_s20
#undef arm32_s21
#undef arm32_s22
#undef arm32_s23
#undef arm32_s24
#undef arm32_s25
#undef arm32_s26
#undef arm32_s27
#undef arm32_s28
#undef arm32_s29
#undef arm32_s30
#undef arm32_s31
#undef arm32_d0
#undef arm32_d1
#undef arm32_d2
#undef arm32_d3
#undef arm32_d4
#undef arm32_d5
#undef arm32_d6
#undef arm32_d7
#undef arm32_d8
#undef arm32_d9
#undef arm32_d10
#undef arm32_d11
#undef arm32_d12
#undef arm32_d13
#undef arm32_d14
#undef arm32_d15
#undef arm32_d16
#undef arm32_d17
#undef arm32_d18
#undef arm32_d19
#undef arm32_d20
#undef arm32_d21
#undef arm32_d22
#undef arm32_d23
#undef arm32_d24
#undef arm32_d25
#undef arm32_d26
#undef arm32_d27
#undef arm32_d28
#undef arm32_d29
#undef arm32_d30
#undef arm32_d31
#undef arm32_q0
#undef arm32_q1
#undef arm32_q2
#undef arm32_q3
#undef arm32_q4
#undef arm32_q5
#undef arm32_q6
#undef arm32_q7
#undef arm32_q8
#undef arm32_q9
#undef arm32_q10
#undef arm32_q11
#undef arm32_q12
#undef arm32_q13
#undef arm32_q14
#undef arm32_q15

#define x86_al 0x0001
#define x86_ah 0x0002
#define x86_ax 0x0003
#define x86_eax 0x0004
#define x86_rax 0x0005
#define x86_cl 0x0006
#define x86_ch 0x0007
#define x86_cx 0x0008
#define x86_ecx 0x0009
#define x86_rcx 0x000A
#define x86_dl 0x000B
#define x86_dh 0x000C
#define x86_dx 0x000D
#define x86_edx 0x000E
#define x86_rdx 0x000F
#define x86_bl 0x0010
#define x86_bh 0x0011
#define x86_bx 0x0012
#define x86_ebx 0x0013
#define x86_rbx 0x0014
#define x86_spl 0x0015
#define x86_sp 0x0016
#define x86_esp 0x0017
#define x86_rsp 0x0018
#define x86_bpl 0x0019
#define x86_bp 0x001A
#define x86_ebp 0x001B
#define x86_rbp 0x001C
#define x86_sil 0x001D
#define x86_si 0x001E
#define x86_esi 0x001F
#define x86_rsi 0x0020
#define x86_dil 0x0021
#define x86_di 0x0022
#define x86_edi 0x0023
#define x86_rdi 0x0024
#define x86_r8b 0x0025
#define x86_r8w 0x0026
#define x86_r8d 0x0027
#define x86_r8 0x0028
#define x86_r9b 0x0029
#define x86_r9w 0x002A
#define x86_r9d 0x002B
#define x86_r9 0x002C
#define x86_r10b 0x002D
#define x86_r10w 0x002E
#define x86_r10d 0x002F
#define x86_r10 0x0030
#define x86_r11b 0x0031
#define x86_r11w 0x0032
#define x86_r11d 0x0033
#define x86_r11 0x0034
#define x86_r12b 0x0035
#define x86_r12w 0x0036
#define x86_r12d 0x0037
#define x86_r12 0x0038
#define x86_r13b 0x0039
#define x86_r13w 0x003A
#define x86_r13d 0x003B
#define x86_r13 0x003C
#define x86_r14b 0x003D
#define x86_r14w 0x003E
#define x86_r14d 0x003F
#define x86_r14 0x0040
#define x86_r15b 0x0041
#define x86_r15w 0x0042
#define x86_r15d 0x0043
#define x86_r15 0x0044
#define x86_eip 0x0045
#define x86_rip 0x0046
#define x86_eflags 0x0047
#define x86_rflags 0x0048
#define x86_cs 0x0049
#define x86_ds 0x004A
#define x86_es 0x004B
#define x86_fs 0x004C
#define x86_gs 0x004D
#define x86_ss 0x004E
#define x86_st0 0x004F
#define x86_st1 0x0050
#define x86_st2 0x0051
#define x86_st3 0x0052
#define x86_st4 0x0053
#define x86_st5 0x0054
#define x86_st6 0x0055
#define x86_st7 0x0056
#define x86_mm0 0x0057
#define x86_mm1 0x0058
#define x86_mm2 0x0059
#define x86_mm3 0x005A
#define x86_mm4 0x005B
#define x86_mm5 0x005C
#define x86_mm6 0x005D
#define x86_mm7 0x005E
#define x86_xmm0 0x005F
#define x86_xmm1 0x0060
#define x86_xmm2 0x0061
#define x86_xmm3 0x0062
#define x86_xmm4 0x0063
#define x86_xmm5 0x0064
#define x86_xmm6 0x0065
#define x86_xmm7 0x0066
#define x86_xmm8 0x0067
#define x86_xmm9 0x0068
#define x86_xmm10 0x0069
#define x86_xmm11 0x006A
#define x86_xmm12 0x006B
#define x86_xmm13 0x006C
#define x86_xmm14 0x006D
#define x86_xmm15 0x006E
#define x86_xmm16 0x006F
#define x86_xmm17 0x0070
#define x86_xmm18 0x0071
#define x86_xmm19 0x0072
#define x86_xmm20 0x0073
#define x86_xmm21 0x0074
#define x86_xmm22 0x0075
#define x86_xmm23 0x0076
#define x86_xmm24 0x0077
#define x86_xmm25 0x0078
#define x86_xmm26 0x0079
#define x86_xmm27 0x007A
#define x86_xmm28 0x007B
#define x86_xmm29 0x007C
#define x86_xmm30 0x007D
#define x86_xmm31 0x007E
#define x86_ymm0 0x007F
#define x86_ymm1 0x0080
#define x86_ymm2 0x0081
#define x86_ymm3 0x0082
#define x86_ymm4 0x0083
#define x86_ymm5 0x0084
#define x86_ymm6 0x0085
#define x86_ymm7 0x0086
#define x86_ymm8 0x0087
#define x86_ymm9 0x0088
#define x86_ymm10 0x0089
#define x86_ymm11 0x008A
#define x86_ymm12 0x008B
#define x86_ymm13 0x008C
#define x86_ymm14 0x008D
#define x86_ymm15 0x008E
#define x86_ymm16 0x008F
#define x86_ymm17 0x0090
#define x86_ymm18 0x0091
#define x86_ymm19 0x0092
#define x86_ymm20 0x0093
#define x86_ymm21 0x0094
#define x86_ymm22 0x0095
#define x86_ymm23 0x0096
#define x86_ymm24 0x0097
#define x86_ymm25 0x0098
#define x86_ymm26 0x0099
#define x86_ymm27 0x009A
#define x86_ymm28 0x009B
#define x86_ymm29 0x009C
#define x86_ymm30 0x009D
#define x86_ymm31 0x009E
#define x86_zmm0 0x009F
#define x86_zmm1 0x00A0
#define x86_zmm2 0x00A1
#define x86_zmm3 0x00A2
#define x86_zmm4 0x00A3
#define x86_zmm5 0x00A4
#define x86_zmm6 0x00A5
#define x86_zmm7 0x00A6
#define x86_zmm8 0x00A7
#define x86_zmm9 0x00A8
#define x86_zmm10 0x00A9
#define x86_zmm11 0x00AA
#define x86_zmm12 0x00AB
#define x86_zmm13 0x00AC
#define x86_zmm14 0x00AD
#define x86_zmm15 0x00AE
#define x86_zmm16 0x00AF
#define x86_zmm17 0x00B0
#define x86_zmm18 0x00B1
#define x86_zmm19 0x00B2
#define x86_zmm20 0x00B3
#define x86_zmm21 0x00B4
#define x86_zmm22 0x00B5
#define x86_zmm23 0x00B6
#define x86_zmm24 0x00B7
#define x86_zmm25 0x00B8
#define x86_zmm26 0x00B9
#define x86_zmm27 0x00BA
#define x86_zmm28 0x00BB
#define x86_zmm29 0x00BC
#define x86_zmm30 0x00BD
#define x86_zmm31 0x00BE

#define x86_64_al x86_al
#define x86_64_ah x86_ah
#define x86_64_ax x86_ax
#define x86_64_eax x86_eax
#define x86_64_rax x86_rax
#define x86_64_cl x86_cl
#define x86_64_ch x86_ch
#define x86_64_cx x86_cx
#define x86_64_ecx x86_ecx
#define x86_64_rcx x86_rcx
#define x86_64_dl x86_dl
#define x86_64_dh x86_dh
#define x86_64_dx x86_dx
#define x86_64_edx x86_edx
#define x86_64_rdx x86_rdx
#define x86_64_bl x86_bl
#define x86_64_bh x86_bh
#define x86_64_bx x86_bx
#define x86_64_ebx x86_ebx
#define x86_64_rbx x86_rbx
#define x86_64_spl x86_spl
#define x86_64_sp x86_sp
#define x86_64_esp x86_esp
#define x86_64_rsp x86_rsp
#define x86_64_bpl x86_bpl
#define x86_64_bp x86_bp
#define x86_64_ebp x86_ebp
#define x86_64_rbp x86_rbp
#define x86_64_sil x86_sil
#define x86_64_si x86_si
#define x86_64_esi x86_esi
#define x86_64_rsi x86_rsi
#define x86_64_dil x86_dil
#define x86_64_di x86_di
#define x86_64_edi x86_edi
#define x86_64_rdi x86_rdi
#define x86_64_r8b x86_r8b
#define x86_64_r8w x86_r8w
#define x86_64_r8d x86_r8d
#define x86_64_r8 x86_r8
#define x86_64_r9b x86_r9b
#define x86_64_r9w x86_r9w
#define x86_64_r9d x86_r9d
#define x86_64_r9 x86_r9
#define x86_64_r10b x86_r10b
#define x86_64_r10w x86_r10w
#define x86_64_r10d x86_r10d
#define x86_64_r10 x86_r10
#define x86_64_r11b x86_r11b
#define x86_64_r11w x86_r11w
#define x86_64_r11d x86_r11d
#define x86_64_r11 x86_r11
#define x86_64_r12b x86_r12b
#define x86_64_r12w x86_r12w
#define x86_64_r12d x86_r12d
#define x86_64_r12 x86_r12
#define x86_64_r13b x86_r13b
#define x86_64_r13w x86_r13w
#define x86_64_r13d x86_r13d
#define x86_64_r13 x86_r13
#define x86_64_r14b x86_r14b
#define x86_64_r14w x86_r14w
#define x86_64_r14d x86_r14d
#define x86_64_r14 x86_r14
#define x86_64_r15b x86_r15b
#define x86_64_r15w x86_r15w
#define x86_64_r15d x86_r15d
#define x86_64_r15 x86_r15
#define x86_64_rip x86_rip
#define x86_64_rflags x86_rflags
#define x86_64_cs x86_cs
#define x86_64_ds x86_ds
#define x86_64_es x86_es
#define x86_64_fs x86_fs
#define x86_64_gs x86_gs
#define x86_64_ss x86_ss
#define x86_64_st0 x86_st0
#define x86_64_st1 x86_st1
#define x86_64_st2 x86_st2
#define x86_64_st3 x86_st3
#define x86_64_st4 x86_st4
#define x86_64_st5 x86_st5
#define x86_64_st6 x86_st6
#define x86_64_st7 x86_st7
#define x86_64_mm0 x86_mm0
#define x86_64_mm1 x86_mm1
#define x86_64_mm2 x86_mm2
#define x86_64_mm3 x86_mm3
#define x86_64_mm4 x86_mm4
#define x86_64_mm5 x86_mm5
#define x86_64_mm6 x86_mm6
#define x86_64_mm7 x86_mm7
#define x86_64_xmm0 x86_xmm0
#define x86_64_xmm1 x86_xmm1
#define x86_64_xmm2 x86_xmm2
#define x86_64_xmm3 x86_xmm3
#define x86_64_xmm4 x86_xmm4
#define x86_64_xmm5 x86_xmm5
#define x86_64_xmm6 x86_xmm6
#define x86_64_xmm7 x86_xmm7
#define x86_64_xmm8 x86_xmm8
#define x86_64_xmm9 x86_xmm9
#define x86_64_xmm10 x86_xmm10
#define x86_64_xmm11 x86_xmm11
#define x86_64_xmm12 x86_xmm12
#define x86_64_xmm13 x86_xmm13
#define x86_64_xmm14 x86_xmm14
#define x86_64_xmm15 x86_xmm15
#define x86_64_xmm16 x86_xmm16
#define x86_64_xmm17 x86_xmm17
#define x86_64_xmm18 x86_xmm18
#define x86_64_xmm19 x86_xmm19
#define x86_64_xmm20 x86_xmm20
#define x86_64_xmm21 x86_xmm21
#define x86_64_xmm22 x86_xmm22
#define x86_64_xmm23 x86_xmm23
#define x86_64_xmm24 x86_xmm24
#define x86_64_xmm25 x86_xmm25
#define x86_64_xmm26 x86_xmm26
#define x86_64_xmm27 x86_xmm27
#define x86_64_xmm28 x86_xmm28
#define x86_64_xmm29 x86_xmm29
#define x86_64_xmm30 x86_xmm30
#define x86_64_xmm31 x86_xmm31
#define x86_64_ymm0 x86_ymm0
#define x86_64_ymm1 x86_ymm1
#define x86_64_ymm2 x86_ymm2
#define x86_64_ymm3 x86_ymm3
#define x86_64_ymm4 x86_ymm4
#define x86_64_ymm5 x86_ymm5
#define x86_64_ymm6 x86_ymm6
#define x86_64_ymm7 x86_ymm7
#define x86_64_ymm8 x86_ymm8
#define x86_64_ymm9 x86_ymm9
#define x86_64_ymm10 x86_ymm10
#define x86_64_ymm11 x86_ymm11
#define x86_64_ymm12 x86_ymm12
#define x86_64_ymm13 x86_ymm13
#define x86_64_ymm14 x86_ymm14
#define x86_64_ymm15 x86_ymm15
#define x86_64_ymm16 x86_ymm16
#define x86_64_ymm17 x86_ymm17
#define x86_64_ymm18 x86_ymm18
#define x86_64_ymm19 x86_ymm19
#define x86_64_ymm20 x86_ymm20
#define x86_64_ymm21 x86_ymm21
#define x86_64_ymm22 x86_ymm22
#define x86_64_ymm23 x86_ymm23
#define x86_64_ymm24 x86_ymm24
#define x86_64_ymm25 x86_ymm25
#define x86_64_ymm26 x86_ymm26
#define x86_64_ymm27 x86_ymm27
#define x86_64_ymm28 x86_ymm28
#define x86_64_ymm29 x86_ymm29
#define x86_64_ymm30 x86_ymm30
#define x86_64_ymm31 x86_ymm31
#define x86_64_zmm0 x86_zmm0
#define x86_64_zmm1 x86_zmm1
#define x86_64_zmm2 x86_zmm2
#define x86_64_zmm3 x86_zmm3
#define x86_64_zmm4 x86_zmm4
#define x86_64_zmm5 x86_zmm5
#define x86_64_zmm6 x86_zmm6
#define x86_64_zmm7 x86_zmm7
#define x86_64_zmm8 x86_zmm8
#define x86_64_zmm9 x86_zmm9
#define x86_64_zmm10 x86_zmm10
#define x86_64_zmm11 x86_zmm11
#define x86_64_zmm12 x86_zmm12
#define x86_64_zmm13 x86_zmm13
#define x86_64_zmm14 x86_zmm14
#define x86_64_zmm15 x86_zmm15
#define x86_64_zmm16 x86_zmm16
#define x86_64_zmm17 x86_zmm17
#define x86_64_zmm18 x86_zmm18
#define x86_64_zmm19 x86_zmm19
#define x86_64_zmm20 x86_zmm20
#define x86_64_zmm21 x86_zmm21
#define x86_64_zmm22 x86_zmm22
#define x86_64_zmm23 x86_zmm23
#define x86_64_zmm24 x86_zmm24
#define x86_64_zmm25 x86_zmm25
#define x86_64_zmm26 x86_zmm26
#define x86_64_zmm27 x86_zmm27
#define x86_64_zmm28 x86_zmm28
#define x86_64_zmm29 x86_zmm29
#define x86_64_zmm30 x86_zmm30
#define x86_64_zmm31 x86_zmm31

#define x86_32_al x86_al
#define x86_32_ah x86_ah
#define x86_32_ax x86_ax
#define x86_32_eax x86_eax
#define x86_32_cl x86_cl
#define x86_32_ch x86_ch
#define x86_32_cx x86_cx
#define x86_32_ecx x86_ecx
#define x86_32_dl x86_dl
#define x86_32_dh x86_dh
#define x86_32_dx x86_dx
#define x86_32_edx x86_edx
#define x86_32_bl x86_bl
#define x86_32_bh x86_bh
#define x86_32_bx x86_bx
#define x86_32_ebx x86_ebx
#define x86_32_sp x86_sp
#define x86_32_esp x86_esp
#define x86_32_bp x86_bp
#define x86_32_ebp x86_ebp
#define x86_32_si x86_si
#define x86_32_esi x86_esi
#define x86_32_di x86_di
#define x86_32_edi x86_edi
#define x86_32_eip x86_eip
#define x86_32_eflags x86_eflags
#define x86_32_cs x86_cs
#define x86_32_ds x86_ds
#define x86_32_es x86_es
#define x86_32_fs x86_fs
#define x86_32_gs x86_gs
#define x86_32_ss x86_ss
#define x86_32_st0 x86_st0
#define x86_32_st1 x86_st1
#define x86_32_st2 x86_st2
#define x86_32_st3 x86_st3
#define x86_32_st4 x86_st4
#define x86_32_st5 x86_st5
#define x86_32_st6 x86_st6
#define x86_32_st7 x86_st7
#define x86_32_mm0 x86_mm0
#define x86_32_mm1 x86_mm1
#define x86_32_mm2 x86_mm2
#define x86_32_mm3 x86_mm3
#define x86_32_mm4 x86_mm4
#define x86_32_mm5 x86_mm5
#define x86_32_mm6 x86_mm6
#define x86_32_mm7 x86_mm7
#define x86_32_xmm0 x86_xmm0
#define x86_32_xmm1 x86_xmm1
#define x86_32_xmm2 x86_xmm2
#define x86_32_xmm3 x86_xmm3
#define x86_32_xmm4 x86_xmm4
#define x86_32_xmm5 x86_xmm5
#define x86_32_xmm6 x86_xmm6
#define x86_32_xmm7 x86_xmm7
#define x86_32_ymm0 x86_ymm0
#define x86_32_ymm1 x86_ymm1
#define x86_32_ymm2 x86_ymm2
#define x86_32_ymm3 x86_ymm3
#define x86_32_ymm4 x86_ymm4
#define x86_32_ymm5 x86_ymm5
#define x86_32_ymm6 x86_ymm6
#define x86_32_ymm7 x86_ymm7

#define arm32_r0 0x0001
#define arm32_r1 0x0002
#define arm32_r2 0x0003
#define arm32_r3 0x0004
#define arm32_r4 0x0005
#define arm32_r5 0x0006
#define arm32_r6 0x0007
#define arm32_r7 0x0008
#define arm32_r8 0x0009
#define arm32_r9 0x000A
#define arm32_r10 0x000B
#define arm32_r11 0x000C
#define arm32_r12 0x000D
#define arm32_sp 0x000E
#define arm32_lr 0x000F
#define arm32_pc 0x0010
#define arm32_cpsr 0x0011
#define arm32_s0 0x0012
#define arm32_s1 0x0013
#define arm32_s2 0x0014
#define arm32_s3 0x0015
#define arm32_s4 0x0016
#define arm32_s5 0x0017
#define arm32_s6 0x0018
#define arm32_s7 0x0019
#define arm32_s8 0x001A
#define arm32_s9 0x001B
#define arm32_s10 0x001C
#define arm32_s11 0x001D
#define arm32_s12 0x001E
#define arm32_s13 0x001F
#define arm32_s14 0x0020
#define arm32_s15 0x0021
#define arm32_s16 0x0022
#define arm32_s17 0x0023
#define arm32_s18 0x0024
#define arm32_s19 0x0025
#define arm32_s20 0x0026
#define arm32_s21 0x0027
#define arm32_s22 0x0028
#define arm32_s23 0x0029
#define arm32_s24 0x002A
#define arm32_s25 0x002B
#define arm32_s26 0x002C
#define arm32_s27 0x002D
#define arm32_s28 0x002E
#define arm32_s29 0x002F
#define arm32_s30 0x0030
#define arm32_s31 0x0031
#define arm32_d0 0x0032
#define arm32_d1 0x0033
#define arm32_d2 0x0034
#define arm32_d3 0x0035
#define arm32_d4 0x0036
#define arm32_d5 0x0037
#define arm32_d6 0x0038
#define arm32_d7 0x0039
#define arm32_d8 0x003A
#define arm32_d9 0x003B
#define arm32_d10 0x003C
#define arm32_d11 0x003D
#define arm32_d12 0x003E
#define arm32_d13 0x003F
#define arm32_d14 0x0040
#define arm32_d15 0x0041
#define arm32_d16 0x0042
#define arm32_d17 0x0043
#define arm32_d18 0x0044
#define arm32_d19 0x0045
#define arm32_d20 0x0046
#define arm32_d21 0x0047
#define arm32_d22 0x0048
#define arm32_d23 0x0049
#define arm32_d24 0x004A
#define arm32_d25 0x004B
#define arm32_d26 0x004C
#define arm32_d27 0x004D
#define arm32_d28 0x004E
#define arm32_d29 0x004F
#define arm32_d30 0x0050
#define arm32_d31 0x0051
#define arm32_q0 0x0052
#define arm32_q1 0x0053
#define arm32_q2 0x0054
#define arm32_q3 0x0055
#define arm32_q4 0x0056
#define arm32_q5 0x0057
#define arm32_q6 0x0058
#define arm32_q7 0x0059
#define arm32_q8 0x005A
#define arm32_q9 0x005B
#define arm32_q10 0x005C
#define arm32_q11 0x005D
#define arm32_q12 0x005E
#define arm32_q13 0x005F
#define arm32_q14 0x0060
#define arm32_q15 0x0061

#define arm64_x0 0x0001
#define arm64_x1 0x0002
#define arm64_x2 0x0003
#define arm64_x3 0x0004
#define arm64_x4 0x0005
#define arm64_x5 0x0006
#define arm64_x6 0x0007
#define arm64_x7 0x0008
#define arm64_x8 0x0009
#define arm64_x9 0x000A
#define arm64_x10 0x000B
#define arm64_x11 0x000C
#define arm64_x12 0x000D
#define arm64_x13 0x000E
#define arm64_x14 0x000F
#define arm64_x15 0x0010
#define arm64_x16 0x0011
#define arm64_x17 0x0012
#define arm64_x18 0x0013
#define arm64_x19 0x0014
#define arm64_x20 0x0015
#define arm64_x21 0x0016
#define arm64_x22 0x0017
#define arm64_x23 0x0018
#define arm64_x24 0x0019
#define arm64_x25 0x001A
#define arm64_x26 0x001B
#define arm64_x27 0x001C
#define arm64_x28 0x001D
#define arm64_x29 0x001E
#define arm64_x30 0x001F
#define arm64_sp 0x0020
#define arm64_xzr 0x0021
#define arm64_w0 0x0022
#define arm64_w1 0x0023
#define arm64_w2 0x0024
#define arm64_w3 0x0025
#define arm64_w4 0x0026
#define arm64_w5 0x0027
#define arm64_w6 0x0028
#define arm64_w7 0x0029
#define arm64_w8 0x002A
#define arm64_w9 0x002B
#define arm64_w10 0x002C
#define arm64_w11 0x002D
#define arm64_w12 0x002E
#define arm64_w13 0x002F
#define arm64_w14 0x0030
#define arm64_w15 0x0031
#define arm64_w16 0x0032
#define arm64_w17 0x0033
#define arm64_w18 0x0034
#define arm64_w19 0x0035
#define arm64_w20 0x0036
#define arm64_w21 0x0037
#define arm64_w22 0x0038
#define arm64_w23 0x0039
#define arm64_w24 0x003A
#define arm64_w25 0x003B
#define arm64_w26 0x003C
#define arm64_w27 0x003D
#define arm64_w28 0x003E
#define arm64_w29 0x003F
#define arm64_w30 0x0040
#define arm64_wzr 0x0041
#define arm64_v0 0x0042
#define arm64_v1 0x0043
#define arm64_v2 0x0044
#define arm64_v3 0x0045
#define arm64_v4 0x0046
#define arm64_v5 0x0047
#define arm64_v6 0x0048
#define arm64_v7 0x0049
#define arm64_v8 0x004A
#define arm64_v9 0x004B
#define arm64_v10 0x004C
#define arm64_v11 0x004D
#define arm64_v12 0x004E
#define arm64_v13 0x004F
#define arm64_v14 0x0050
#define arm64_v15 0x0051
#define arm64_v16 0x0052
#define arm64_v17 0x0053
#define arm64_v18 0x0054
#define arm64_v19 0x0055
#define arm64_v20 0x0056
#define arm64_v21 0x0057
#define arm64_v22 0x0058
#define arm64_v23 0x0059
#define arm64_v24 0x005A
#define arm64_v25 0x005B
#define arm64_v26 0x005C
#define arm64_v27 0x005D
#define arm64_v28 0x005E
#define arm64_v29 0x005F
#define arm64_v30 0x0060
#define arm64_v31 0x0061
#define arm64_q0 0x0062
#define arm64_q1 0x0063
#define arm64_q2 0x0064
#define arm64_q3 0x0065
#define arm64_q4 0x0066
#define arm64_q5 0x0067
#define arm64_q6 0x0068
#define arm64_q7 0x0069
#define arm64_q8 0x006A
#define arm64_q9 0x006B
#define arm64_q10 0x006C
#define arm64_q11 0x006D
#define arm64_q12 0x006E
#define arm64_q13 0x006F
#define arm64_q14 0x0070
#define arm64_q15 0x0071
#define arm64_q16 0x0072
#define arm64_q17 0x0073
#define arm64_q18 0x0074
#define arm64_q19 0x0075
#define arm64_q20 0x0076
#define arm64_q21 0x0077
#define arm64_q22 0x0078
#define arm64_q23 0x0079
#define arm64_q24 0x007A
#define arm64_q25 0x007B
#define arm64_q26 0x007C
#define arm64_q27 0x007D
#define arm64_q28 0x007E
#define arm64_q29 0x007F
#define arm64_q30 0x0080
#define arm64_q31 0x0081

#include <stdio.h>

int bin_le_byte(void *buffer, void *pos, unsigned char data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data;
    *(unsigned long long*)pos += 1;
    return 0;
}

int bin_le_char(void *buffer, void *pos, unsigned char data) {
    return bin_le_byte(buffer, pos, data);
}

int bin_le_short(void *buffer, void *pos, unsigned short data) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 8) & 0xFF;
    *(unsigned long long*)pos += 2;
    return 0;
}

int bin_le_int(void *buffer, void *pos, unsigned int data) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 8) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 16) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (data >> 24) & 0xFF;
    *(unsigned long long*)pos += 4;
    return 0;
}

int bin_le_long(void *buffer, void *pos, unsigned long long data) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 8) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 16) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (data >> 24) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 4)) = (data >> 32) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 5)) = (data >> 40) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 6)) = (data >> 48) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 7)) = (data >> 56) & 0xFF;
    *(unsigned long long*)pos += 8;
    return 0;
}

int bin_le_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned char*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = *(const unsigned char*)data;
        data = (const unsigned char*)data + 1;
        *(unsigned long long*)pos += 1;
    }
    else while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 1;
    }
    return 0;
}

int bin_le_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_bytes(buffer, pos, data, count);
}

int bin_le_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned short*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = *(const unsigned short*)data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (*(const unsigned short*)data >> 8) & 0xFF;
        data = (const unsigned char*)data + 2;
        *(unsigned long long*)pos += 2;
    }
    else while(count--) {
        *((unsigned short*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 2;
    }
    return 0;
}

int bin_le_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned int*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = *(const unsigned int*)data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (*(const unsigned int*)data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (*(const unsigned int*)data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (*(const unsigned int*)data >> 24) & 0xFF;
        data = (const unsigned char*)data + 4;
        *(unsigned long long*)pos += 4;
    }
    else while(count--) {
        *((unsigned int*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 4;
    }
    return 0;
}

int bin_le_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned long long*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = *(const unsigned long long*)data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (*(const unsigned long long*)data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (*(const unsigned long long*)data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (*(const unsigned long long*)data >> 24) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 4)) = (*(const unsigned long long*)data >> 32) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 5)) = (*(const unsigned long long*)data >> 40) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 6)) = (*(const unsigned long long*)data >> 48) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 7)) = (*(const unsigned long long*)data >> 56) & 0xFF;
        data = (const unsigned char*)data + 8;
        *(unsigned long long*)pos += 8;
    }
    else while(count--) {
        *((unsigned long long*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 8;
    }
    return 0;
}

int bin_le_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data;
        *(unsigned long long*)pos += 1;
    }
    return 0;
}

int bin_le_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 8) & 0xFF;
        *(unsigned long long*)pos += 2;
    }
    return 0;
}

int bin_le_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (data >> 24) & 0xFF;
        *(unsigned long long*)pos += 4;
    }
    return 0;
}

int bin_le_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (data >> 24) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 4)) = (data >> 32) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 5)) = (data >> 40) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 6)) = (data >> 48) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 7)) = (data >> 56) & 0xFF;
        *(unsigned long long*)pos += 8;
    }
    return 0;
}

int bin_stringn(void *buffer, void *pos, const void *data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned char*)data == 0) return 1;
    unsigned long long size = 0;
    while (*(const unsigned char*)data) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + size)) = *(const unsigned char*)data;
        data = (const unsigned char*)data + 1;
        size++;
    }
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + size)) = 0;
    *(unsigned long long*)pos += size + 1;
    return 0;
}

int bin_string(void *buffer, void *pos, const void *data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned char*)data == 0) return 1;
    unsigned long long size = 0;
    while (*(const unsigned char*)data) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + size)) = *(const unsigned char*)data;
        data = (const unsigned char*)data + 1;
        size++;
    }
    *(unsigned long long*)pos += size;
    return 0;
}

int bin_opfile(void *buffer, void *pos, void *file) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((FILE*)file == 0) return 1;
    if (fseek((FILE*)file, 0, SEEK_END)) return 1;
    long long size = (long long)ftell((FILE*)file);
    if (size < 0) return 1;
    else if (size == 0) return 0;
    if (fseek((FILE*)file, 0, SEEK_SET)) return 1;
    if (fread((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos), 1, size, (FILE*)file) != size) return 1;
    *(unsigned long long*)pos += size;
    return 0;
}

int bin_file(void *buffer, void *pos, const void *path) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const char*)path == 0) return 1;
    FILE *file = fopen((const char*)path, "rb");
    if (file == 0) return 1;
    if (fseek(file, 0, SEEK_END)) { fclose(file); return 1; }
    long long size = (long long)ftell(file);
    if (size < 0) { fclose(file); return 1; }
    else if (size == 0) { fclose(file); return 0; }
    if (fseek(file, 0, SEEK_SET)) { fclose(file); return 1; }
    if (fread((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos), 1, size, file) != size) { fclose(file); return 1; }
    *(unsigned long long*)pos += size;
    fclose(file);
    return 0;
}

int bin_byte(void *buffer, void *pos, unsigned char data) {
    return bin_le_byte(buffer, pos, data);
}

int bin_char(void *buffer, void *pos, unsigned char data) {
    return bin_le_char(buffer, pos, data);
}

int bin_short(void *buffer, void *pos, unsigned short data) {
    return bin_le_short(buffer, pos, data);
}

int bin_int(void *buffer, void *pos, unsigned int data) {
    return bin_le_int(buffer, pos, data);
}

int bin_long(void *buffer, void *pos, unsigned long long data) {
    return bin_le_long(buffer, pos, data);
}

int bin_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_bytes(buffer, pos, data, count);
}

int bin_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_chars(buffer, pos, data, count);
}

int bin_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_shorts(buffer, pos, data, count);
}

int bin_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_ints(buffer, pos, data, count);
}

int bin_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_longs(buffer, pos, data, count);
}

int bin_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_le_dup8(buffer, pos, data, count);
}

int bin_dup(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_dup8(buffer, pos, data, count);
}

int bin_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    return bin_le_dup16(buffer, pos, data, count);
}

int bin_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    return bin_le_dup32(buffer, pos, data, count);
}

int bin_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    return bin_le_dup64(buffer, pos, data, count);
}

int bin_be_byte(void *buffer, void *pos, unsigned char data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data;
    *(unsigned long long*)pos += 1;
    return 0;
}

int bin_be_char(void *buffer, void *pos, unsigned char data) {
    return bin_be_byte(buffer, pos, data);
}

int bin_be_short(void *buffer, void *pos, unsigned short data) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = data & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (data >> 8) & 0xFF;
    *(unsigned long long*)pos += 2;
    return 0;
}

int bin_be_int(void *buffer, void *pos, unsigned int data) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = data & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 8) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 16) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (data >> 24) & 0xFF;
    *(unsigned long long*)pos += 4;
    return 0;
}

int bin_be_long(void *buffer, void *pos, unsigned long long data) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 7)) = data & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 6)) = (data >> 8) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 5)) = (data >> 16) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 4)) = (data >> 24) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (data >> 32) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 40) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 48) & 0xFF;
    *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (data >> 56) & 0xFF;
    *(unsigned long long*)pos += 8;
    return 0;
}

int bin_be_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned char*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = *(const unsigned char*)data;
        data = (const unsigned char*)data + 1;
        *(unsigned long long*)pos += 1;
    }
    else while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 1;
    }
    return 0;
}

int bin_be_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_be_bytes(buffer, pos, data, count);
}

int bin_be_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned short*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = *(const unsigned short*)data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (*(const unsigned short*)data >> 8) & 0xFF;
        data = (const unsigned char*)data + 2;
        *(unsigned long long*)pos += 2;
    }
    else while(count--) {
        *((unsigned short*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 2;
    }
    return 0;
}

int bin_be_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned int*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = *(const unsigned int*)data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (*(const unsigned int*)data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (*(const unsigned int*)data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (*(const unsigned int*)data >> 24) & 0xFF;
        data = (const unsigned char*)data + 4;
        *(unsigned long long*)pos += 4;
    }
    else while(count--) {
        *((unsigned int*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 4;
    }
    return 0;
}

int bin_be_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned long long*)data != 0) while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 7)) = *(const unsigned long long*)data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 6)) = (*(const unsigned long long*)data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 5)) = (*(const unsigned long long*)data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 4)) = (*(const unsigned long long*)data >> 24) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (*(const unsigned long long*)data >> 32) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (*(const unsigned long long*)data >> 40) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (*(const unsigned long long*)data >> 48) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (*(const unsigned long long*)data >> 56) & 0xFF;
        data = (const unsigned char*)data + 8;
        *(unsigned long long*)pos += 8;
    }
    else while(count--) {
        *((unsigned long long*)((unsigned char*)buffer + *(unsigned long long*)pos)) = 0;
        *(unsigned long long*)pos += 8;
    }
    return 0;
}

int bin_be_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = data;
        *(unsigned long long*)pos += 1;
    }
    return 0;
}

int bin_be_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (data >> 8) & 0xFF;
        *(unsigned long long*)pos += 2;
    }
    return 0;
}

int bin_be_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (data >> 24) & 0xFF;
        *(unsigned long long*)pos += 4;
    }
    return 0;
}

int bin_be_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    while(count--) {
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 7)) = data & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 6)) = (data >> 8) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 5)) = (data >> 16) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 4)) = (data >> 24) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 3)) = (data >> 32) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 2)) = (data >> 40) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos + 1)) = (data >> 48) & 0xFF;
        *((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos)) = (data >> 56) & 0xFF;
        *(unsigned long long*)pos += 8;
    }
    return 0;
}

int x86_byte(void *buffer, void *pos, unsigned char data) {
    return bin_le_byte(buffer, pos, data);
}

int x86_char(void *buffer, void *pos, unsigned char data) {
    return bin_le_char(buffer, pos, data);
}

int x86_short(void *buffer, void *pos, unsigned short data) {
    return bin_le_short(buffer, pos, data);
}

int x86_int(void *buffer, void *pos, unsigned int data) {
    return bin_le_int(buffer, pos, data);
}

int x86_long(void *buffer, void *pos, unsigned long long data) {
    return bin_le_long(buffer, pos, data);
}

int x86_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_bytes(buffer, pos, data, count);
}

int x86_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_chars(buffer, pos, data, count);
}

int x86_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_shorts(buffer, pos, data, count);
}

int x86_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_ints(buffer, pos, data, count);
}

int x86_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    return bin_le_longs(buffer, pos, data, count);
}

int x86_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_le_dup8(buffer, pos, data, count);
}

int x86_dup(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_dup8(buffer, pos, data, count);
}

int x86_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    return bin_le_dup16(buffer, pos, data, count);
}

int x86_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    return bin_le_dup32(buffer, pos, data, count);
}

int x86_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    return bin_le_dup64(buffer, pos, data, count);
}

int x86_stringn(void *buffer, void *pos, const void *data) {
    return bin_stringn(buffer, pos, data);
}

int x86_string(void *buffer, void *pos, const void *data) {
    return bin_string(buffer, pos, data);
}

int x86_opfile(void *buffer, void *pos, void *file) {
    return bin_opfile(buffer, pos, file);
}

int x86_file(void *buffer, void *pos, const void *path) {
    return bin_file(buffer, pos, path);
}

int x86_64_byte(void *buffer, void *pos, unsigned char data) {
    return x86_byte(buffer, pos, data);
}

int x86_64_char(void *buffer, void *pos, unsigned char data) {
    return x86_char(buffer, pos, data);
}

int x86_64_short(void *buffer, void *pos, unsigned short data) {
    return x86_short(buffer, pos, data);
}

int x86_64_int(void *buffer, void *pos, unsigned int data) {
    return x86_int(buffer, pos, data);
}

int x86_64_long(void *buffer, void *pos, unsigned long long data) {
    return x86_long(buffer, pos, data);
}

int x86_64_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_bytes(buffer, pos, data, count);
}

int x86_64_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_chars(buffer, pos, data, count);
}

int x86_64_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_shorts(buffer, pos, data, count);
}

int x86_64_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_ints(buffer, pos, data, count);
}

int x86_64_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_longs(buffer, pos, data, count);
}

int x86_64_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return x86_dup8(buffer, pos, data, count);
}

int x86_64_dup(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_dup8(buffer, pos, data, count);
}

int x86_64_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    return x86_dup16(buffer, pos, data, count);
}

int x86_64_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    return x86_dup32(buffer, pos, data, count);
}

int x86_64_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    return x86_dup64(buffer, pos, data, count);
}

int x86_64_stringn(void *buffer, void *pos, const void *data) {
    return x86_stringn(buffer, pos, data);
}

int x86_64_string(void *buffer, void *pos, const void *data) {
    return x86_string(buffer, pos, data);
}

int x86_64_opfile(void *buffer, void *pos, void *file) {
    return x86_opfile(buffer, pos, file);
}

int x86_64_file(void *buffer, void *pos, const void *path) {
    return x86_file(buffer, pos, path);
}

int arm64_byte(void *buffer, void *pos, unsigned char data) {
    return x86_byte(buffer, pos, data);
}

int arm64_char(void *buffer, void *pos, unsigned char data) {
    return x86_char(buffer, pos, data);
}

int arm64_short(void *buffer, void *pos, unsigned short data) {
    return x86_short(buffer, pos, data);
}

int arm64_int(void *buffer, void *pos, unsigned int data) {
    return x86_int(buffer, pos, data);
}

int arm64_long(void *buffer, void *pos, unsigned long long data) {
    return x86_long(buffer, pos, data);
}

int arm64_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_bytes(buffer, pos, data, count);
}

int arm64_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_chars(buffer, pos, data, count);
}

int arm64_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_shorts(buffer, pos, data, count);
}

int arm64_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_ints(buffer, pos, data, count);
}

int arm64_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_longs(buffer, pos, data, count);
}

int arm64_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return x86_dup8(buffer, pos, data, count);
}

int arm64_dup(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_dup8(buffer, pos, data, count);
}

int arm64_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    return x86_dup16(buffer, pos, data, count);
}

int arm64_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    return x86_dup32(buffer, pos, data, count);
}

int arm64_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    return x86_dup64(buffer, pos, data, count);
}

int arm64_stringn(void *buffer, void *pos, const void *data) {
    return x86_stringn(buffer, pos, data);
}

int arm64_string(void *buffer, void *pos, const void *data) {
    return x86_string(buffer, pos, data);
}

int arm64_opfile(void *buffer, void *pos, void *file) {
    return x86_opfile(buffer, pos, file);
}

int arm64_file(void *buffer, void *pos, const void *path) {
    return x86_file(buffer, pos, path);
}

int arm64_byte(void *buffer, void *pos, unsigned char data) {
    return x86_byte(buffer, pos, data);
}

int arm64_char(void *buffer, void *pos, unsigned char data) {
    return x86_char(buffer, pos, data);
}

int arm64_short(void *buffer, void *pos, unsigned short data) {
    return x86_short(buffer, pos, data);
}

int arm64_int(void *buffer, void *pos, unsigned int data) {
    return x86_int(buffer, pos, data);
}

int arm64_long(void *buffer, void *pos, unsigned long long data) {
    return x86_long(buffer, pos, data);
}

int arm64_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_bytes(buffer, pos, data, count);
}

int arm64_chars(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_chars(buffer, pos, data, count);
}

int arm64_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_shorts(buffer, pos, data, count);
}

int arm64_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_ints(buffer, pos, data, count);
}

int arm64_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    return x86_longs(buffer, pos, data, count);
}

int arm64_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return x86_dup8(buffer, pos, data, count);
}

int arm64_dup(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    return bin_dup8(buffer, pos, data, count);
}

int arm64_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    return x86_dup16(buffer, pos, data, count);
}

int arm64_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    return x86_dup32(buffer, pos, data, count);
}

int arm64_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    return x86_dup64(buffer, pos, data, count);
}

int arm64_stringn(void *buffer, void *pos, const void *data) {
    return x86_stringn(buffer, pos, data);
}

int arm64_string(void *buffer, void *pos, const void *data) {
    return x86_string(buffer, pos, data);
}

int arm64_opfile(void *buffer, void *pos, void *file) {
    return x86_opfile(buffer, pos, file);
}

int arm32_file(void *buffer, void *pos, const void *path) {
    return x86_file(buffer, pos, path);
}

#endif
