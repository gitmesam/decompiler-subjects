//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t count_zeros(int32_t a1, int32_t * a2);

// ------------------------ Functions -------------------------

// Address range: 0x8049060 - 0x80490ed
int main(int argc, char ** argv) {
    int32_t v1 = 0; // bp-52, 0x8049074
    int32_t v2 = 0; // bp-36, 0x8049093
    printf("count_zeros: %d\n", count_zeros(4, &v1));
    printf("count_zeros: %d\n", count_zeros(5, &v2));
    return 0;
}

// Address range: 0x8049210 - 0x8049243
int32_t count_zeros(int32_t a1, int32_t * a2) {
    if (a1 < 1) {
        // 0x8049240
        return 0;
    }
    int32_t v1 = (int32_t)a2;
    int32_t v2 = 0; // 0x8049221
    int32_t v3 = v1; // 0x8049221
    v2 = v2 - 1 + (int32_t)(*(int32_t *)v3 != 0);
    v3 += 4;
    while (v3 != 4 * a1 + v1) {
        // 0x8049228
        v2 = v2 - 1 + (int32_t)(*(int32_t *)v3 != 0);
        v3 += 4;
    }
    // 0x8049236
    return -v2;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (8.3.1)
// Detected functions: 2

