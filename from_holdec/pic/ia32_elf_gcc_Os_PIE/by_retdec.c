//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

int32_t __x86_get_pc_thunk_bx(int32_t a1);
void a_func(void);

// ------------------------ Functions -------------------------

// From module:   from_holdec/pic/source.c
// Address range: 0x8049060 - 0x80490a5
// Line range:    9 - 14
int main() {
    // 0x8049060
    int32_t v1; // 0x8049060
    __x86_get_pc_thunk_bx(v1);
    printf((char *)(v1 + 4006));
    int32_t * v2 = (int32_t *)(v1 + 0x2fa5); // 0x804908e
    *v2 = *v2 + 1;
    a_func();
    return 0;
}

// Address range: 0x8049100 - 0x8049104
int32_t __x86_get_pc_thunk_bx(int32_t a1) {
    // 0x8049100
    int32_t result; // 0x8049100
    return result;
}

// From module:   from_holdec/pic/source.c
// Address range: 0x80491c6 - 0x80491f2
// Line range:    5 - 7
void a_func(void) {
    // 0x80491c6
    int32_t v1; // 0x80491c6
    __x86_get_pc_thunk_bx(v1);
    printf((char *)(v1 + 3645));
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (8.3.1)
// Detected functions: 3

