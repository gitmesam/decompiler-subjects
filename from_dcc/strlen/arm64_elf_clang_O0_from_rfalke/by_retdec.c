//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int32_t strlen(char * s);

// ------------------------ Functions -------------------------

// From module:   /mnt/from_dcc/./strlen/source.c
// Address range: 0x4005c0 - 0x400600
// Line range:    1 - 5
int main() {
    // 0x4005c0
    strlen("test");
    return 0;
}

// From module:   /mnt/from_dcc/./strlen/source.c
// Address range: 0x400600 - 0x400640
// Line range:    7 - 12
int32_t strlen(char * s) {
    int32_t result = 0; // 0x400620
    if (*s == 0) {
        // 0x400634
        return 0;
    }
    char * v1 = s; // 0x400620
    v1 = (char *)((int64_t)v1 + 1);
    result++;
    while (*v1 != 0) {
        // 0x400624
        v1 = (char *)((int64_t)v1 + 1);
        result++;
    }
    // 0x400634
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (3.8.1)
// Detected functions: 2

