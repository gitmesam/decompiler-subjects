//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------- Function Prototypes --------------------

void a_func(void);

// ------------------------ Functions -------------------------

// From module:   from_holdec/pic/source.c
// Address range: 0x8049180 - 0x80491ac
// Line range:    5 - 7
void a_func(void) {
    // 0x8049180
    int32_t v1; // 0x8049180
    printf((char *)(v1 + 3715));
}

// From module:   from_holdec/pic/source.c
// Address range: 0x80491b0 - 0x80491e8
// Line range:    9 - 13
int main() {
    // 0x80491b0
    int32_t v1; // 0x80491b0
    printf((char *)(v1 + 3681));
    int32_t * v2 = (int32_t *)*(int32_t *)(v1 + 0x2e44); // 0x80491d9
    *v2 = *v2 + 1;
    a_func();
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (7.0.1)
// Detected functions: 2

