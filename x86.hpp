#ifndef __GENE_x86_64_H__
#define __GENE_x86_64_H__

#undef x86_64_al
#undef x86_64_cl
#undef x86_64_dl
#undef x86_64_bl
#undef x86_64_spl
#undef x86_64_bpl
#undef x86_64_sil
#undef x86_64_dil
#undef x86_64_r8b
#undef x86_64_r9b
#undef x86_64_r10b
#undef x86_64_r11b
#undef x86_64_r12b
#undef x86_64_r13b
#undef x86_64_r14b
#undef x86_64_r15b
#undef x86_64_ah
#undef x86_64_ch
#undef x86_64_dh
#undef x86_64_bh
#undef x86_64_ax
#undef x86_64_cx
#undef x86_64_dx
#undef x86_64_bx
#undef x86_64_sp
#undef x86_64_bp
#undef x86_64_si
#undef x86_64_di
#undef x86_64_r8w
#undef x86_64_r9w
#undef x86_64_r10w
#undef x86_64_r11w
#undef x86_64_r12w
#undef x86_64_r13w
#undef x86_64_r14w
#undef x86_64_r15w
#undef x86_64_eax
#undef x86_64_ecx
#undef x86_64_edx
#undef x86_64_ebx
#undef x86_64_esp
#undef x86_64_ebp
#undef x86_64_esi
#undef x86_64_edi
#undef x86_64_r8d
#undef x86_64_r9d
#undef x86_64_r10d
#undef x86_64_r11d
#undef x86_64_r12d
#undef x86_64_r13d
#undef x86_64_r14d
#undef x86_64_r15d
#undef x86_64_rax
#undef x86_64_rcx
#undef x86_64_rdx
#undef x86_64_rbx
#undef x86_64_rsp
#undef x86_64_rbp
#undef x86_64_rsi
#undef x86_64_rdi
#undef x86_64_r8
#undef x86_64_r9
#undef x86_64_r10
#undef x86_64_r11
#undef x86_64_r12
#undef x86_64_r13
#undef x86_64_r14
#undef x86_64_r15
#define x86_64_al 0b000000000
#define x86_64_cl 0b000000001
#define x86_64_dl 0b000000010
#define x86_64_bl 0b000000011
#define x86_64_spl 0b000000100
#define x86_64_bpl 0b000000101
#define x86_64_sil 0b000000110
#define x86_64_dil 0b000000111
#define x86_64_r8b 0b000001000
#define x86_64_r9b 0b000001001
#define x86_64_r10b 0b000001010
#define x86_64_r11b 0b000001011
#define x86_64_r12b 0b000001100
#define x86_64_r13b 0b000001101
#define x86_64_r14b 0b000001110
#define x86_64_r15b 0b000001111
#define x86_64_ah 0b100000100
#define x86_64_ch 0b100000101
#define x86_64_dh 0b100000110
#define x86_64_bh 0b100000111
#define x86_64_ax 0b000100000
#define x86_64_cx 0b000100001
#define x86_64_dx 0b000100010
#define x86_64_bx 0b000100011
#define x86_64_sp 0b000100100
#define x86_64_bp 0b000100101
#define x86_64_si 0b000100110
#define x86_64_di 0b000100111
#define x86_64_r8w 0b000101000
#define x86_64_r9w 0b000101001
#define x86_64_r10w 0b000101010
#define x86_64_r11w 0b000101011
#define x86_64_r12w 0b000101100
#define x86_64_r13w 0b000101101
#define x86_64_r14w 0b000101110
#define x86_64_r15w 0b000101111
#define x86_64_eax 0b001000000
#define x86_64_ecx 0b001000001
#define x86_64_edx 0b001000010
#define x86_64_ebx 0b001000011
#define x86_64_esp 0b001000100
#define x86_64_ebp 0b001000101
#define x86_64_esi 0b001000110
#define x86_64_edi 0b001000111
#define x86_64_r8d 0b001001000
#define x86_64_r9d 0b001001001
#define x86_64_r10d 0b001001010
#define x86_64_r11d 0b001001011
#define x86_64_r12d 0b001001100
#define x86_64_r13d 0b001001101
#define x86_64_r14d 0b001001110
#define x86_64_r15d 0b001001111
#define x86_64_rax 0b010100000
#define x86_64_rcx 0b010100001
#define x86_64_rdx 0b010100010
#define x86_64_rbx 0b010100011
#define x86_64_rsp 0b010100100
#define x86_64_rbp 0b010100101
#define x86_64_rsi 0b010100110
#define x86_64_rdi 0b010100111
#define x86_64_r8 0b011101000
#define x86_64_r9 0b011101001
#define x86_64_r10 0b011101010
#define x86_64_r11 0b011101011
#define x86_64_r12 0b011101100
#define x86_64_r13 0b011101101
#define x86_64_r14 0b011101110
#define x86_64_r15 0b011101111

class x86_64 {
private:
    unsigned char *code = 0;
    unsigned long long pos = 0;
    unsigned long long cap = 0;

    int rea(unsigned long long size = 0) {
        if (pos + size > cap) {
            unsigned long long new_cap = cap ? cap * 2 : 4096;
            while (pos + size > new_cap) new_cap *= 2;
            unsigned char *new_code = new unsigned char[new_cap];
            if (new_code == 0) return 1;
            for (unsigned long long i = 0; i < pos; i++) new_code[i] = code[i];
            code = new_code;
            cap = new_cap;
        }
        return 0;
    }

public:
    ~x86_64() {
        if (cap) delete[] code;
    }

    unsigned char *data() {
        return code;
    }

    unsigned long long size() {
        return pos;
    }

    unsigned long long capacity() {
        return cap;
    }

    unsigned long long address() {
        return pos;
    }

    int byte(unsigned long long value = 0) {
        if (rea(1)) return 1;
        code[pos] = (unsigned char)(value);
        pos++;
        return 0;
    }

    int word(unsigned long long value = 0) {
        if (rea(2)) return 1;
        code[pos] = (unsigned char)(value);
        code[pos + 1] = (unsigned char)(value >> 8);
        pos += 2;
        return 0;
    }

    int dword(unsigned long long value = 0) {
        if (rea(4)) return 1;
        code[pos] = (unsigned char)(value);
        code[pos + 1] = (unsigned char)(value >> 8);
        code[pos + 2] = (unsigned char)(value >> 16);
        code[pos + 3] = (unsigned char)(value >> 24);
        pos += 4;
        return 0;
    }

    int qword(unsigned long long value = 0) {
        if (rea(8)) return 1;
        code[pos] = (unsigned char)(value);
        code[pos + 1] = (unsigned char)(value >> 8);
        code[pos + 2] = (unsigned char)(value >> 16);
        code[pos + 3] = (unsigned char)(value >> 24);
        code[pos + 4] = (unsigned char)(value >> 32);
        code[pos + 5] = (unsigned char)(value >> 40);
        code[pos + 6] = (unsigned char)(value >> 48);
        code[pos + 7] = (unsigned char)(value >> 56);
        pos += 8;
        return 0;
    }

    int mov_reg8_imm8(unsigned long long reg, unsigned long long value) {
        return 0;
    }
};

#endif
