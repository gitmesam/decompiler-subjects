//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>

// --------------------- Global Variables ---------------------

int32_t a_global = 42; // 0x404024

// ------------------------ Functions -------------------------

// From module:   from_holdec/pic/source.c
// Address range: 0x40113c - 0x401171
// Line range:    9 - 13
int main() {
    // 0x40113c
    printf("in main: %d\n", (int64_t)(uint32_t)a_global);
    int32_t v1 = a_global + 1; // 0x401157
    a_global = v1;
    printf("in func: %d\n", (int64_t)v1);
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (7.0.1)
// Detected functions: 1

