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
// Address range: 0x401040 - 0x401078
// Line range:    9 - 14
int main() {
    // 0x401040
    printf("in main: %d\n", (int64_t)(uint32_t)a_global);
    int32_t v1 = a_global + 1; // 0x401061
    a_global = v1;
    printf("in func: %d\n", (int64_t)v1);
    return 0;
}

// --------------- Dynamically Linked Functions ---------------

// int printf(const char * restrict format, ...);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (8.3.1)
// Detected functions: 1

