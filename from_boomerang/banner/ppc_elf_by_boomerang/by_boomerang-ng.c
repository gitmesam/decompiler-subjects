int main(int argc, char *argv[]);

/** address: 0x10000468 */
int main(int argc, char *argv[])
{
    unsigned int g0; 		// r0
    int g1; 		// r1
    int g10; 		// r10
    int g11; 		// r11
    int g3; 		// r3
    int g9; 		// r9
    int local0; 		// m[g1 - 112]
    int local1; 		// m[g1 - 120]
    int local2; 		// m[g1 - 124]
    char local3; 		// m[g1 - 96]
    __size32 local4; 		// m[g1 - 136]
    __size32 local5; 		// m[g1 - 132]
    int local6; 		// m[g1 - 116]
    int local7; 		// m[g1 - 128]
    __size32 local8; 		// m[g1 - 136]{0}

    g3 = malloc(12);
    *(__size32*)(g3 + 4) = 0x10001df4;
    local4 = 2;
    local5 = g3 + 4;
    local8 = local4;
    local4 = local8 - 1;
    while (local8 != 1) {
        g3 = *local5;
        g3 = strlen(g3); /* Warning: also results in g10, g11 */
        local6 = g3;
        if (g3 > 10) {
            local6 = 10;
        }
        local7 = 0;
bb0x10000500:
        if (local7 <= 6) {
            local2 = 0;
            while (local2 < local6) {
                g9 = *local5;
                g0 = *(unsigned char*)(g9 + local2);
                g0 = (ROTL(g0) & 0xff) - 32;
                local0 = g0;
                if (g0 < 0) {
                    local0 = 0;
                }
                local1 = 0;
bb0x10000564:
                if (local1 <= 6) {
                    g10 = (ROTL(local2) & ~0x7) + g1 + local1 - 96;
                    g11 = (ROTL((rs * 7 + local7)) & ~0x3) + 0x100120f4;
                    g0 = *g11;
                    g0 = *(unsigned char*)(rs * 7 + local1 + g0);
                    *(__size8*)g10 = (char) g0;
                    local1++;
                    goto bb0x10000564;
                }
                *(__size8*)((ROTL(local2) & ~0x7) + g1 - 89) = 32;
                local2++;
            }
            local2 = (ROTL(local6) & ~0x7) - 1;
            while (local2 >= 0) {
                g0 = *(unsigned char*)(g1 + local2 - 96);
                if ((ROTL(g0) & 0xff) != 32) {
                    goto bb0x10000688;
                }
                *(__size8*)(g1 + local2 - 96) = 0;
                local2--;
            }
bb0x10000688:
            g10 = puts(&local3); /* Warning: also results in g11 */
            local7++;
            goto bb0x10000500;
        }
        puts("");
        local5 += 4;
        local8 = local4;
        local4 = local8 - 1;
    }
    return 0;
}

