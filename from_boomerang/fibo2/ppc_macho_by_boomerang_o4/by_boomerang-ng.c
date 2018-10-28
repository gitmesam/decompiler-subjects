int main(int argc, char *argv[]);
__size32 fib1(int param1);

/** address: 0x00001c4c */
int main(int argc, char *argv[])
{
    int g30; 		// r30
    __size32 g31; 		// r31
    int local0; 		// m[g1 - 32]

    g31 = /* machine specific */ (int) LR;
    printf(/* machine specific */ (int) LR + 896);
    scanf(/* machine specific */ (int) LR + 912);
    if (local0 > 1) {
        g30 = fib1(local0 - 1); /* Warning: also results in g31 */
        g31 = fib1(g30 - 2);
    }
    printf(g31 + 916);
    return 0;
}

/** address: 0x00001cd8 */
__size32 fib1(int param1)
{
    __size32 g29; 		// r29
    int g3; 		// r3
    int g30; 		// r30
    int local5; 		// param1{8}

    g30 = param1;
    local5 = param1;
    if (param1 > 1) {
        g30 = fib1(param1 - 1);
        g3 = fib1(g30 - 2); /* Warning: also results in g29, g30 */
        g3 = g29 + g3;
        local5 = g3;
    }
    param1 = local5;
    return param1; /* WARNING: Also returning: g30 := param1, g3 := param1, g29 := param1, g29 := param1, g29 := g29, g30 := param1, g30 := param1, g30 := g30, g31 := param1 */
}

