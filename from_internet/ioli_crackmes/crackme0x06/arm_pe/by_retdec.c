//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// ------------------- Function Prototypes --------------------

int32_t __dll_exit(void);
int32_t __dllonexit(int32_t a1, int32_t * a2, int32_t * a3);
int32_t __do_global_ctors(void);
int32_t __gccmain(int32_t result);
int32_t _cexit(void);
int32_t check(int32_t * str, int32_t a2);
int32_t closeall_streams(int32_t a1);
int32_t dummy(int32_t a1, int32_t a2);
int32_t parell(int32_t str, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x16d2bff0; // 0x114d8
int32_t g2 = -1; // 0x118e8
int32_t g3 = 0; // 0x14000
int32_t g4 = 0; // 0x14004
int32_t g5 = 0; // 0x14008

// ------------------------ Functions -------------------------

// Address range: 0x11050 - 0x110f8
int32_t dummy(int32_t a1, int32_t a2) {
    int32_t v1 = 0; // 0x11070
    int32_t str = *(int32_t *)(4 * v1 + a2); // 0x110d4
    int32_t result = 0; // 0x110dc
    while (str != 0) {
        // 0x11074
        v1++;
        result = 1;
        if (strncmp((char *)str, "LOLO", 3) == 0) {
            // break -> 0x110e8
            break;
        }
        str = *(int32_t *)(4 * v1 + a2);
        result = 0;
    }
    // 0x110e8
    return result;
}

// Address range: 0x110fc - 0x11190
int32_t parell(int32_t str, int32_t a2) {
    // 0x110fc
    int32_t v1; // bp-24, 0x110fc
    sscanf((char *)str, "%d", &v1);
    int32_t v2 = dummy(v1, a2); // 0x11134
    int32_t v3 = 0; // 0x11140
    if (v2 == 0) {
        // 0x11188
        return 0;
    }
    int32_t v4 = v2; // 0x1115c
    if (v1 % 2 == 0) {
        // 0x11160
        puts("Password OK!");
        v4 = exit(0);
    }
    int32_t result = v4;
    v3++;
    while (v3 < 10) {
        // 0x11150
        v4 = result;
        if (v1 % 2 == 0) {
            // 0x11160
            puts("Password OK!");
            v4 = exit(0);
        }
        // 0x11170
        result = v4;
        v3++;
    }
    // 0x11188
    return result;
}

// Address range: 0x11198 - 0x1124c
int32_t check(int32_t * str, int32_t a2) {
    int32_t v1 = (int32_t)str;
    int32_t v2 = 0; // 0x11238
    if (strlen((char *)str) == 0) {
        // 0x1123c
        return puts("Password Incorrect!");
    }
    int32_t v3 = 0; // 0x11238
    char str2 = *(char *)(v2 + v1); // bp-33, 0x111d8
    int32_t v4; // bp-32, 0x11198
    sscanf(&str2, "%d", &v4);
    v3 += v4;
    if (v3 == 16) {
        // 0x1120c
        parell(v1, a2);
    }
    // 0x11218
    v2++;
    while (v2 < strlen((char *)str)) {
        // 0x111c4
        str2 = *(char *)(v2 + v1);
        sscanf(&str2, "%d", &v4);
        v3 += v4;
        if (v3 == 16) {
            // 0x1120c
            parell(v1, a2);
        }
        // 0x11218
        v2++;
    }
    // 0x1123c
    return puts("Password Incorrect!");
}

// Address range: 0x11254 - 0x112b4
int main(int argc, char ** argv) {
    // 0x11254
    __gccmain(argc);
    puts("IOLI Crackme Level 0x06");
    printf("Password: ");
    int32_t v1; // bp-116, 0x11254
    scanf("%s", &v1);
    int32_t v2; // 0x11254
    check(&v1, v2);
    return 0;
}

// Address range: 0x11314 - 0x11320
int32_t closeall_streams(int32_t a1) {
    // 0x11314
    return _fcloseall();
}

// Address range: 0x11344 - 0x113b8
int32_t __dllonexit(int32_t a1, int32_t * a2, int32_t * a3) {
    // 0x11344
    if (a2 == NULL || a3 == NULL) {
        // 0x113b0
        return 0;
    }
    int32_t v1 = (int32_t)a3 - (int32_t)a2; // 0x11374
    if (v1 < 0) {
        // 0x113b0
        return 0;
    }
    int32_t v2 = v1 + 4 & -4; // 0x11388
    int32_t * mem = realloc(a2, v2); // 0x11390
    int32_t result = 0; // 0x11398
    if (mem != NULL) {
        int32_t v3 = (int32_t)mem; // 0x11390
        *a2 = v3;
        int32_t v4 = v2 + v3;
        *a3 = v4;
        *(int32_t *)(v4 - 4) = a1;
        result = a1;
    }
    // 0x113b0
    return result;
}

// Address range: 0x113fc - 0x1146c
int32_t __dll_exit(void) {
    uint32_t v1 = g3; // 0x11404
    if (v1 == 0) {
        // 0x11460
        return fflush(NULL);
    }
    uint32_t v2 = g4 - 4; // 0x11418
    if (v1 >= v2 != v1 != v2) {
        int32_t v3 = g4 - 8; // 0x11428
        while (v1 == v3 || v1 < v3) {
            // 0x1142c
            v3 -= 4;
        }
    }
    // 0x11450
    free((int32_t *)v1);
    g3 = 0;
    // 0x11460
    return fflush(NULL);
}

// Address range: 0x11474 - 0x11484
int32_t _cexit(void) {
    // 0x11474
    return closeall_streams(__dll_exit());
}

// Address range: 0x1151c - 0x1157c
int32_t __do_global_ctors(void) {
    int32_t v1 = &g2; // 0x11534
    while (*(int32_t *)(v1 + 4) != 0) {
        // 0x11538
        v1 += 4;
    }
    // 0x11570
    return atexit(&g1);
}

// Address range: 0x11584 - 0x115a8
int32_t __gccmain(int32_t result) {
    // 0x11584
    if (g5 != 0) {
        return result;
    }
    // 0x11598
    g5 = 1;
    return __do_global_ctors();
}

// --------------- Statically Linked Functions ----------------

// int32_t atexit(int32_t * a1);
// int32_t exit(int32_t a1);

// --------------- Dynamically Linked Functions ---------------

// int __cdecl _fcloseall(void);
// int fflush(FILE * stream);
// void free(void * ptr);
// int printf(const char * restrict format, ...);
// int puts(const char * s);
// void * realloc(void * ptr, size_t size);
// int scanf(const char * restrict format, ...);
// int sscanf(const char * restrict s, const char * restrict format, ...);
// size_t strlen(const char * s);
// int strncmp(const char * s1, const char * s2, size_t n);
// BOOL TerminateProcess(_In_ HANDLE hProcess, _In_ UINT uExitCode);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: microsoft
// Detected functions: 10

