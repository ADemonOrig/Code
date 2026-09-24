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
#undef x86_64_rip
#undef x86_64_es
#undef x86_64_cs
#undef x86_64_ss
#undef x86_64_ds
#undef x86_64_fs
#undef x86_64_gs

#define x86_64_al 0b0000
#define x86_64_cl 0b0001
#define x86_64_dl 0b0010
#define x86_64_bl 0b0011
#define x86_64_spl 0b0100
#define x86_64_bpl 0b0101
#define x86_64_sil 0b0110
#define x86_64_dil 0b0111
#define x86_64_r8b 0b1000
#define x86_64_r9b 0b1001
#define x86_64_r10b 0b1010
#define x86_64_r11b 0b1011
#define x86_64_r12b 0b1100
#define x86_64_r13b 0b1101
#define x86_64_r14b 0b1110
#define x86_64_r15b 0b1111
#define x86_64_ah 0b0100
#define x86_64_ch 0b0101
#define x86_64_dh 0b0110
#define x86_64_bh 0b0111
#define x86_64_ax 0b0000
#define x86_64_cx 0b0001
#define x86_64_dx 0b0010
#define x86_64_bx 0b0011
#define x86_64_sp 0b0100
#define x86_64_bp 0b0101
#define x86_64_si 0b0110
#define x86_64_di 0b0111
#define x86_64_r8w 0b1000
#define x86_64_r9w 0b1001
#define x86_64_r10w 0b1010
#define x86_64_r11w 0b1011
#define x86_64_r12w 0b1100
#define x86_64_r13w 0b1101
#define x86_64_r14w 0b1110
#define x86_64_r15w 0b1111
#define x86_64_eax 0b0000
#define x86_64_ecx 0b0001
#define x86_64_edx 0b0010
#define x86_64_ebx 0b0011
#define x86_64_esp 0b0100
#define x86_64_ebp 0b0101
#define x86_64_esi 0b0110
#define x86_64_edi 0b0111
#define x86_64_r8d 0b1000
#define x86_64_r9d 0b1001
#define x86_64_r10d 0b1010
#define x86_64_r11d 0b1011
#define x86_64_r12d 0b1100
#define x86_64_r13d 0b1101
#define x86_64_r14d 0b1110
#define x86_64_r15d 0b1111
#define x86_64_rax 0b0000
#define x86_64_rcx 0b0001
#define x86_64_rdx 0b0010
#define x86_64_rbx 0b0011
#define x86_64_rsp 0b0100
#define x86_64_rbp 0b0101
#define x86_64_rsi 0b0110
#define x86_64_rdi 0b0111
#define x86_64_r8 0b1000
#define x86_64_r9 0b1001
#define x86_64_r10 0b1010
#define x86_64_r11 0b1011
#define x86_64_r12 0b1100
#define x86_64_r13 0b1101
#define x86_64_r14 0b1110
#define x86_64_r15 0b1111
#define x86_64_rip 0b0101
#define x86_64_es 0b000
#define x86_64_cs 0b001
#define x86_64_ss 0b010
#define x86_64_ds 0b011
#define x86_64_fs 0b100
#define x86_64_gs 0b101

class x86_64 {
private:
    unsigned char *data = 0;
    unsigned long long pos = 0;
    unsigned long long cap = 0;

    int rea(unsigned long long size = 1) {
        if (size == 0) return 0;
        if (pos + size > cap) {
            unsigned long long new_cap = cap ? cap * 2 : 4096;
            while (pos + size > new_cap) new_cap *= 2;
            unsigned char *new_data = new unsigned char[new_cap];
            if (new_data == 0) return 1;
            for (unsigned long long i = 0; i < pos; i++) new_data[i] = data[i];
            data = new_data;
            cap = new_cap;
        }
        return 0;
    }

public:
    x86_64() {
        data = 0;
        pos = 0;
        cap = 0;
    }

    ~x86_64() {
        if (cap) delete[] data;
    }

    unsigned char *data() {
        return data;
    }

    unsigned long long size() {
        return pos;
    }

    unsigned long long address() {
        return pos;
    }

    unsigned long long capacity() {
        return cap;
    }

    void clear() {
        if (cap) delete[] data;
        pos = 0;
        cap = 0;
    }

    int byte(unsigned long long value = 0) {
        if (rea(1)) return 1;
        data[pos] = (value) & 0xff;
        pos++;
        return 0;
    }

    int word(unsigned long long value = 0) {
        if (rea(2)) return 1;
        data[pos] = (value) & 0xff;
        data[pos + 1] = (value >> 8) & 0xff;
        pos += 2;
        return 0;
    }

    int dword(unsigned long long value = 0) {
        if (rea(4)) return 1;
        data[pos] = (value) & 0xff;
        data[pos + 1] = (value >> 8) & 0xff;
        data[pos + 2] = (value >> 16) & 0xff;
        data[pos + 3] = (value >> 24) & 0xff;
        pos += 4;
        return 0;
    }

    int qword(unsigned long long value = 0) {
        if (rea(8)) return 1;
        data[pos] = (value) & 0xff;
        data[pos + 1] = (value >> 8) & 0xff;
        data[pos + 2] = (value >> 16) & 0xff;
        data[pos + 3] = (value >> 24) & 0xff;
        data[pos + 4] = (value >> 32) & 0xff;
        data[pos + 5] = (value >> 40) & 0xff;
        data[pos + 6] = (value >> 48) & 0xff;
        data[pos + 7] = (value >> 56) & 0xff;
        pos += 8;
        return 0;
    }

    int autoint(unsigned long long value = 0) {
        unsigned long long size = 1;
        if (value > 0xff) size = 2;
        else if (value > 0xffff) size = 4;
        else if (value > 0xffffffff) size = 8;
        if (rea(size)) return 1;
        unsigned long long shift = 0;
        while (size--) {
            data[pos] = (value >> shift) & 0xff;
            pos++;
            shift += 8;
        }
        return 0;
    }

    int buffer(void *source = 0, unsigned long long size = 0) {
        if (source == 0) return 1;
        if (rea(size)) return 1;
        for (unsigned long long i = 0; i < size; i++) data[pos + i] = ((unsigned char*)source)[i];
        pos += size;
        return 0;
    }

    int mov_reg_imm(unsigned long long reg, unsigned long long value) {
        return 0;
    }

    int mov_reg_reg(unsigned long long reg, unsigned long long reg2) {
        return 0;
    }

    int mov_reg_mem(unsigned long long reg, unsigned long long addr) {
        return 0;
    }

    int mov_mem_imm(unsigned long long addr, unsigned long long value) {
        return 0;
    }

    int mov_mem_reg(unsigned long long addr, unsigned long long reg) {
        return 0;
    }
};

#endif
