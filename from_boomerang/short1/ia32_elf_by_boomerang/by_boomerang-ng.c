int main(int argc, char *argv[]);
__size32 test(int param1, int param2, int param3);

/** address: 0x080483a7 */
int main(int argc, char *argv[])
{
    int eax; 		// r24

    eax = test(4, 5, 6);
    printf("Result for 4, 5, 6: %d\n", eax);
    eax = test(6, 5, 4);
    printf("Result for 6, 5, 4: %d\n", eax);
    eax = test(4, 6, 5);
    printf("Result for 4, 6, 5: %d\n", eax);
    eax = test(6, 4, 5);
    printf("Result for 6, 4, 5: %d\n", eax);
    return 0;
}

/** address: 0x0804837c */
__size32 test(int param1, int param2, int param3)
{
    __size32 local0; 		// m[esp - 8]

    if (param1 >= param2 && param2 >= param3) {
        local0 = 0;
    }
    else {
        local0 = 1;
    }
    return local0;
}

