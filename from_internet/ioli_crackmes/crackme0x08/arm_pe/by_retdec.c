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
int32_t che(void);
int32_t check(int32_t * str, int32_t a2);
int32_t closeall_streams(int32_t a1);
int32_t dummy(int32_t a1, int32_t a2);
int32_t parell(int32_t str, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x16d2bff0; // 0x11578
int32_t g2 = -1; // 0x11988
int32_t g3 = 0; // 0x14000
int32_t g4 = 0; // 0x14004
int32_t g5 = 0; // 0x14008
int32_t g6 = 0; // 0x1400c

// ------------------------ Functions -------------------------

// Address range: 0x11050 - 0x11104
int32_t dummy(int32_t a1, int32_t a2) {
    int32_t v1 = 0; // 0x11070
    int32_t str = *(int32_t *)(4 * v1 + a2); // 0x110e0
    int32_t result = 0; // 0x110e8
    while (str != 0) {
        // 0x11074
        v1++;
        if (strncmp((char *)str, "LOLO", 3) == 0) {
            // 0x110b4
            g3 = 1;
            result = 1;
            return result;
        }
        str = *(int32_t *)(4 * v1 + a2);
        result = 0;
    }
  lab_0x110f4:
    // 0x110f4
    return result;
}

// Address range: 0x1110c - 0x11128
int32_t che(void) {
    // 0x1110c
    puts("Password Incorrect!");
    return exit(0);
}

// Address range: 0x1112c - 0x111d0
int32_t parell(int32_t str, int32_t a2) {
    // 0x1112c
    int32_t v1; // bp-24, 0x1112c
    sscanf((char *)str, "%d", &v1);
    int32_t v2 = dummy(v1, a2); // 0x11164
    int32_t v3 = 0; // 0x11170
    if (v2 == 0) {
        // 0x111c8
        return 0;
    }
    int32_t v4 = v2; // 0x1118c
    if (v1 % 2 == 0) {
        // 0x11190
        if (g3 == 1) {
            // 0x111a0
            puts("Password OK!");
        }
        // 0x111a8
        v4 = exit(0);
    }
    int32_t result = v4;
    v3++;
    while (v3 < 10) {
        // 0x11180
        v4 = result;
        if (v1 % 2 == 0) {
            // 0x11190
            if (g3 == 1) {
                // 0x111a0
                puts("Password OK!");
            }
            // 0x111a8
            v4 = exit(0);
        }
        // 0x111b0
        result = v4;
        v3++;
    }
    // 0x111c8
    return result;
}

// Address range: 0x111dc - 0x112ec
int32_t check(int32_t * str, int32_t a2) {
    int32_t v1 = (int32_t)str;
    int32_t v2 = 0; // 0x1127c
    int32_t v3 = 0; // 0x1127c
    int32_t v4; // bp-32, 0x111dc
    if (strlen((char *)str) != 0) {
        char str2 = *(char *)(v2 + v1); // bp-33, 0x1121c
        sscanf(&str2, "%d", &v4);
        v3 += v4;
        if (v3 == 16) {
            // 0x11250
            parell(v1, a2);
        }
        // 0x1125c
        v2++;
        while (v2 < strlen((char *)str)) {
            // 0x11208
            str2 = *(char *)(v2 + v1);
            sscanf(&str2, "%d", &v4);
            v3 += v4;
            if (v3 == 16) {
                // 0x11250
                parell(v1, a2);
            }
            // 0x1125c
            v2++;
        }
    }
    // 0x11280
    che();
    int32_t v5 = dummy(v4, a2); // 0x11290
    int32_t v6 = 0; // 0x1129c
    if (v5 == 0) {
        // 0x112e4
        return 0;
    }
    int32_t v7 = v5; // 0x112b8
    if (v4 % 2 == 0) {
        // 0x112bc
        puts("wtf?");
        v7 = exit(0);
    }
    int32_t result = v7;
    v6++;
    while (v6 < 10) {
        // 0x112ac
        v7 = result;
        if (v4 % 2 == 0) {
            // 0x112bc
            puts("wtf?");
            v7 = exit(0);
        }
        // 0x112cc
        result = v7;
        v6++;
    }
    // 0x112e4
    return result;
}

// Address range: 0x112f4 - 0x11354
int main(int argc, char ** argv) {
    // 0x112f4
    __gccmain(argc);
    puts("IOLI Crackme Level 0x08");
    printf("Password: ");
    int32_t v1; // bp-116, 0x112f4
    scanf("%s", &v1);
    int32_t v2; // 0x112f4
    check(&v1, v2);
    return 0;
}

// Address range: 0x113b4 - 0x113c0
int32_t closeall_streams(int32_t a1) {
    // 0x113b4
    return _fcloseall();
}

// Address range: 0x113e4 - 0x11458
int32_t __dllonexit(int32_t a1, int32_t * a2, int32_t * a3) {
    // 0x113e4
    if (a2 == NULL || a3 == NULL) {
        // 0x11450
        return 0;
    }
    int32_t v1 = (int32_t)a3 - (int32_t)a2; // 0x11414
    if (v1 < 0) {
        // 0x11450
        return 0;
    }
    int32_t v2 = v1 + 4 & -4; // 0x11428
    int32_t * mem = realloc(a2, v2); // 0x11430
    int32_t result = 0; // 0x11438
    if (mem != NULL) {
        int32_t v3 = (int32_t)mem; // 0x11430
        *a2 = v3;
        int32_t v4 = v2 + v3;
        *a3 = v4;
        *(int32_t *)(v4 - 4) = a1;
        result = a1;
    }
    // 0x11450
    return result;
}

// Address range: 0x1149c - 0x1150c
int32_t __dll_exit(void) {
    uint32_t v1 = g4; // 0x114a4
    if (v1 == 0) {
        // 0x11500
        return fflush(NULL);
    }
    uint32_t v2 = g5 - 4; // 0x114b8
    if (v1 >= v2 != v1 != v2) {
        int32_t v3 = g5 - 8; // 0x114c8
        while (v1 == v3 || v1 < v3) {
            // 0x114cc
            v3 -= 4;
        }
    }
    // 0x114f0
    free((int32_t *)v1);
    g4 = 0;
    // 0x11500
    return fflush(NULL);
}

// Address range: 0x11514 - 0x11524
int32_t _cexit(void) {
    // 0x11514
    return closeall_streams(__dll_exit());
}

// Address range: 0x115bc - 0x1161c
int32_t __do_global_ctors(void) {
    int32_t v1 = &g2; // 0x115d4
    while (*(int32_t *)(v1 + 4) != 0) {
        // 0x115d8
        v1 += 4;
    }
    // 0x11610
    return atexit(&g1);
}

// Address range: 0x11624 - 0x11648
int32_t __gccmain(int32_t result) {
    // 0x11624
    if (g6 != 0) {
        return result;
    }
    // 0x11638
    g6 = 1;
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
// Detected functions: 11

