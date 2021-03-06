//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

void dumpline(char * p, int64_t offset, int32_t cnt);
int32_t hexdump(char * fname);

// ------------------------ Functions -------------------------

// From module:   /mnt/from_rec/./hd2/source.c
// Address range: 0x4008c0 - 0x400b04
// Line range:    5 - 27
void dumpline(char * p, int64_t offset, int32_t cnt) {
    char buff[1]; // bp-108, 0x4008c0
    // 0x4008c0
    sprintf(buff, "%08lX:", (int32_t)offset);
    uint32_t v1 = cnt < 16 ? cnt : 16;
    int32_t v2 = 0; // 0x400918
    int64_t v3; // 0x4008c0
    if (v1 == 0) {
        goto lab_0x400984;
    } else {
        int64_t v4 = (int64_t)&buff;
        int64_t v5 = v4 + 9; // 0x400934
        int32_t v6 = 0; // 0x4008c0
        unsigned char v7 = *(char *)((int64_t)v6 + (int64_t)p); // 0x400948
        sprintf((char *)(v5 + (int64_t)(3 * v6)), " %02lX", (int32_t)v7);
        v2 = v6 + 1;
        v6 = v2;
        while (v2 < v1) {
            // 0x40091c
            v7 = *(char *)((int64_t)v6 + (int64_t)p);
            sprintf((char *)(v5 + (int64_t)(3 * v6)), " %02lX", (int32_t)v7);
            v2 = v6 + 1;
            v6 = v2;
        }
        // 0x400970
        v3 = v4;
        if (v2 > 15) {
            goto lab_0x40099c;
        } else {
            goto lab_0x400984;
        }
    }
  lab_0x400984:;
    int32_t v8 = v2 + 1; // 0x400974
    strcat(buff, "   ");
    int32_t v9 = v8; // 0x400980
    while (v8 != 16) {
        // 0x400984
        v8 = v9 + 1;
        strcat(buff, "   ");
        v9 = v8;
    }
    // 0x40099c
    v3 = (int64_t)&buff;
    goto lab_0x40099c;
  lab_0x40099c:;
    int32_t len = strlen(buff); // 0x4009a8
    strcpy((char *)(v3 + (int64_t)len), "  |");
    int32_t v10 = len + 3; // 0x4009d0
    int32_t v11 = 0; // 0x4009ec
    if (v1 != 0) {
        int32_t v12 = 0; // 0x4008c0
        char v13 = *(char *)((int64_t)v12 + (int64_t)p); // 0x4009fc
        char v14 = v13 > 126 ? 46 : v13;
        *(char *)(v3 + (int64_t)(v12 + v10)) = v14;
        int32_t v15 = v12 + 1; // 0x400a6c
        v12 = v15;
        while (v15 < v1) {
            // 0x4009f0
            v13 = *(char *)((int64_t)v12 + (int64_t)p);
            v14 = v13 > 126 ? 46 : v13;
            *(char *)(v3 + (int64_t)(v12 + v10)) = v14;
            v15 = v12 + 1;
            v12 = v15;
        }
        // 0x400a7c
        v11 = v15;
        if (v15 > 15) {
            // 0x400ab8
            strcpy((char *)(v3 + (int64_t)v10 + (int64_t)v15), "|");
            printf("%s\n", buff);
            return;
        }
    }
    int64_t v16 = v11; // 0x4008c0
    int64_t v17 = v16 + 1;
    *(char *)(v3 + (int64_t)(v10 + (int32_t)v16)) = 32;
    v16 = v17;
    while (v17 != 16) {
        // 0x400a88
        v17 = v16 + 1;
        *(char *)(v3 + (int64_t)(v10 + (int32_t)v16)) = 32;
        v16 = v17;
    }
    // 0x400ab8
    strcpy((char *)(v3 + (int64_t)v10 + (int64_t)16), "|");
    printf("%s\n", buff);
}

// From module:   /mnt/from_rec/./hd2/source.c
// Address range: 0x400b04 - 0x400c14
// Line range:    29 - 56
int32_t hexdump(char * fname) {
    // 0x400b04
    int64_t v1; // 0x400b04
    uint64_t v2 = v1;
    int64_t file2; // bp-56, 0x400b04
    int64_t v3 = &file2; // 0x400b20
    int64_t st; // bp-184, 0x400b04
    int64_t v4 = stat((int64_t)fname, &st); // 0x400b24
    int64_t * str2 = (int64_t *)(v3 + 32);
    char * str = (char *)*str2;
    if ((int32_t)v4 != 0) {
        // 0x400b2c
        perror(str);
        // 0x400c04
        return 1;
    }
    struct _IO_FILE * file = fopen(str, "rb"); // 0x400b54
    file2 = (int64_t)file;
    if (file == NULL) {
        // 0x400b64
        perror((char *)*str2);
        // 0x400c04
        return 1;
    }
    int64_t * v5 = (int64_t *)(v3 + 8); // 0x400b80
    *v5 = 0;
    if (v2 == 0) {
        // 0x400bf0
        fclose((struct _IO_FILE *)file2);
        // 0x400c04
        return 0;
    }
    int64_t offset; // bp-40, 0x400b04
    int32_t items_read = fread(&offset, 1, 16, (struct _IO_FILE *)file2); // 0x400bac
    while (items_read != 0) {
        // 0x400bc4
        dumpline((char *)&offset, *v5, items_read);
        uint64_t v6 = *v5 + (int64_t)items_read; // 0x400be4
        *v5 = v6;
        if (v6 >= v2) {
            // break -> 0x400bf0
            break;
        }
        items_read = fread(&offset, 1, 16, (struct _IO_FILE *)file2);
    }
    // 0x400bf0
    fclose((struct _IO_FILE *)file2);
    // 0x400c04
    return 0;
}

// From module:   /mnt/from_rec/./hd2/source.c
// Address range: 0x400c14 - 0x400c90
// Line range:    58 - 66
int main(int argc, char ** argv) {
    // 0x400c14
    if (argc <= 1) {
        // 0x400c80
        return 0;
    }
    int32_t v1 = 1; // 0x400c74
    int32_t result = 0; // 0x400c68
    int64_t v2 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)argv); // 0x400c5c
    result += hexdump((char *)v2);
    v1++;
    while (v1 != argc) {
        // 0x400c48
        v2 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)argv);
        result += hexdump((char *)v2);
        v1++;
    }
    // 0x400c80
    return result;
}

// --------------- Statically Linked Functions ----------------

// int64_t stat(int64_t a1, int64_t * a2);

// --------------- Dynamically Linked Functions ---------------

// int __xstat(int ver, const char * filename, struct stat * stat_buf);
// int fclose(FILE * stream);
// FILE * fopen(const char * restrict filename, const char * restrict modes);
// size_t fread(void * restrict ptr, size_t size, size_t n, FILE * restrict stream);
// void perror(const char * s);
// int printf(const char * restrict format, ...);
// int sprintf(char * restrict s, const char * restrict format, ...);
// char * strcat(char * restrict dest, const char * restrict src);
// char * strcpy(char * restrict dest, const char * restrict src);
// size_t strlen(const char * s);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (3.8.1)
// Detected functions: 3

