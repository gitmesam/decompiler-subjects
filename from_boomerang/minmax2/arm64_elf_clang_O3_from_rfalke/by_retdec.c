//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// ------------------------ Functions -------------------------

// From module:   /mnt/from_boomerang/./minmax2/source.c
// Address range: 0x400604 - 0x400684
// Line range:    51 - 58
int main() {
    // 0x400604
    printf("MinMax result %d\n", 0xfffffffe);
    printf("MinMax result %d\n", 0xfffffffe);
    printf("MinMax result %d\n", 0);
    int32_t v1 = argc + 2; // 0x400648
    int64_t v2 = v1 < 0 == (v1 & -argc) < 0 ? (int64_t)argc : 0xfffffffe; // 0x40064c
    int32_t v3 = v2; // 0x400650
    int32_t v4 = v3 - 3; // 0x400650
    printf("MinMax result %d\n", v4 == 0 | v4 < 0 != (2 - v3 & v3) < 0 ? v2 : 3);
    printf("MinMax result %d\n", 3);
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (3.8.1)
// Detected functions: 1

