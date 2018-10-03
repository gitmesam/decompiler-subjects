int main(int argc, char *argv[]);
__size32 fib(int param1);

/** address: 0x100004fc */
int main(int argc, char *argv[])
{
    int g3; 		// r3
    int local0; 		// m[g1 - 24]

    printf("Input number: ");
    scanf("%d", &local0);
    g3 = fib(local0);
    printf("fibonacci(%d) = %d\n", local0, g3);
    return 0;
}

/** address: 0x10000440 */
__size32 fib(int param1)
{
    __size32 CR1; 		// r65
    __size1 CR1_1; 		// r65
    int g3; 		// r3
    int g3_2; 		// r3{0}
    int local5; 		// m[g1 - 32]
    __size32 local6; 		// CR1{0}

    local6 = CR1;
    local6 = CR1;
    if (param1 <= 1) {
        if (param1 != 1) {
            local5 = param1;
        }
        else {
            local5 = 1;
        }
    }
    else {
        g3_2 = fib(param1 - 1, CR1); /* Warning: also results in CR1 */
        g3 = fib(g3_2 - 1, CR1); /* Warning: also results in CR1 */
        %CR1 = %CR1 & ~0x4;
        printf("%d", g3_2 + g3);
        local6 = CR1_1;
        local5 = g3_2;
    }
    CR1 = local6;
    return local5; /* WARNING: Also returning: CR1 := CR1 */
}

