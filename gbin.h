#ifndef __GENE_BIN_H__
#define __GENE_BIN_H__

#include <stdio.h>

int bin_le_byte(void *buffer, void *pos, unsigned char data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data;
    *(unsigned long long*)pos += 1;
    return 0;
}

int bin_le_short(void *buffer, void *pos, unsigned short data) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (data >> 8) & 0xFF;
    *(unsigned long long*)pos += 2;
    return 0;
}

int bin_le_int(void *buffer, void *pos, unsigned int data) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (data >> 8) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 2) = (data >> 16) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 3) = (data >> 24) & 0xFF;
    *(unsigned long long*)pos += 4;
    return 0;
}

int bin_le_long(void *buffer, void *pos, unsigned long long data) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (data >> 8) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 2) = (data >> 16) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 3) = (data >> 24) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 4) = (data >> 32) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 5) = (data >> 40) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 6) = (data >> 48) & 0xFF;
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 7) = (data >> 56) & 0xFF;
    *(unsigned long long*)pos += 8;
    return 0;
}

int bin_le_bytes(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count;
    if ((const unsigned char*)data != 0)
        while(count--) {
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = *(const unsigned char*)data;
            buffer = (unsigned char*)buffer + 1;
            data = (const unsigned char*)data + 1;
        }
    else
        while(count--) {
            *(unsigned char*)buffer = 0;
            buffer = (unsigned char*)buffer + 1;
        }
    return 0;
}

int bin_le_shorts(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count << 1;
    if ((const unsigned short*)data != 0)
        while(count--) {
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = *(const unsigned short*)data & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (*(const unsigned short*)data >> 8) & 0xFF;
            buffer = (unsigned char*)buffer + 2;
            data = (const unsigned char*)data + 2;
        }
    else
        while(count--) {
            *(unsigned short*)buffer = 0;
            buffer = (unsigned char*)buffer + 2;
        }
    return 0;
}

int bin_le_ints(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count << 2;
    if ((const unsigned int*)data != 0)
        while(count--) {
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = *(const unsigned int*)data & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (*(const unsigned int*)data >> 8) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 2) = (*(const unsigned int*)data >> 16) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 3) = (*(const unsigned int*)data >> 24) & 0xFF;
            buffer = (unsigned char*)buffer + 4;
            data = (const unsigned char*)data + 4;
        }
    else
        while(count--) {
            *(unsigned int*)buffer = 0;
            buffer = (unsigned char*)buffer + 4;
        }
    return 0;
}

int bin_le_longs(void *buffer, void *pos, const void *data, unsigned long long count) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count << 3;
    if ((const unsigned long long*)data != 0)
        while(count--) {
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = *(const unsigned long long*)data & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (*(const unsigned long long*)data >> 8) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 2) = (*(const unsigned long long*)data >> 16) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 3) = (*(const unsigned long long*)data >> 24) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 4) = (*(const unsigned long long*)data >> 32) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 5) = (*(const unsigned long long*)data >> 40) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 6) = (*(const unsigned long long*)data >> 48) & 0xFF;
            *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 7) = (*(const unsigned long long*)data >> 56) & 0xFF;
            buffer = (unsigned char*)buffer + 8;
            data = (const unsigned char*)data + 8;
        }
    else
        while(count--) {
            *(unsigned long long*)buffer = 0;
            buffer = (unsigned char*)buffer + 8;
        }
    return 0;
}

int bin_le_dup8(void *buffer, void *pos, unsigned char data, unsigned long long count) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count;
    while(count--) {
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data;
        buffer = (unsigned char*)buffer + 1;
    }
    return 0;
}

int bin_le_dup16(void *buffer, void *pos, unsigned short data, unsigned long long count) {
    if ((unsigned short*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count << 1;
    while(count--) {
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (data >> 8) & 0xFF;
        buffer = (unsigned char*)buffer + 2;
    }
    return 0;
}

int bin_le_dup32(void *buffer, void *pos, unsigned int data, unsigned long long count) {
    if ((unsigned int*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count << 2;
    while(count--) {
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (data >> 8) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 2) = (data >> 16) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 3) = (data >> 24) & 0xFF;
        buffer = (unsigned char*)buffer + 4;
    }
    return 0;
}

int bin_le_dup64(void *buffer, void *pos, unsigned long long data, unsigned long long count) {
    if ((unsigned long long*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    *(unsigned long long*)pos += count << 3;
    while(count--) {
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos) = data & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 1) = (data >> 8) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 2) = (data >> 16) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 3) = (data >> 24) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 4) = (data >> 32) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 5) = (data >> 40) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 6) = (data >> 48) & 0xFF;
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + 7) = (data >> 56) & 0xFF;
        buffer = (unsigned char*)buffer + 8;
    }
    return 0;
}


int bin_string(void *buffer, void *pos, const void *data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned char*)data == 0) return 1;
    unsigned long long size = 0;
    while (*(const unsigned char*)data) {
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + size) = *(const unsigned char*)data;
        data = (const unsigned char*)data + 1;
        size++;
    }
    *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + size) = 0;
    *(unsigned long long*)pos += size + 1;
    return 0;
}

int bin_string_nonull(void *buffer, void *pos, const void *data) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const unsigned char*)data == 0) return 1;
    unsigned long long size = 0;
    while (*(const unsigned char*)data) {
        *(unsigned char)((unsigned char*)buffer + *(unsigned long long*)pos + size) = *(const unsigned char*)data;
        data = (const unsigned char*)data + 1;
        size++;
    }
    *(unsigned long long*)pos += size;
    return 0;
}

int bin_file(void *buffer, void *pos, const void *file) {
    if ((unsigned char*)buffer == 0) return 1;
    if ((unsigned long long*)pos == 0) return 1;
    if ((const FILE*)file == 0) return 1;
    fseek(file, 0, SEEK_END);
    unsigned long long size = ftell(file);
    fseek(file, 0, SEEK_SET);
    if (fread((unsigned char*)((unsigned char*)buffer + *(unsigned long long*)pos), 1, size, file) != size) return 1;
    return 0;
}

#endif
