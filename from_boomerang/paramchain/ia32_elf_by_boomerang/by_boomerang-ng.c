int main(int argc, char *argv[]);
void passem(__size32 param1, __size32 param2, __size32 param3, __size32 param4);
void addem(__size32 param1, __size32 param2, __size32 param3, union { __size32 *; __size32; } param4);

/** address: 0x08048950 */
int main(int argc, char *argv[])
{
    int esp; 		// r28
    int local0; 		// m[esp - 8]

    passem(5, 10, 40, esp - 8);
    printf("Fifty five is %d\n", local0);
    return 0;
}

/** address: 0x08048938 */
void passem(__size32 param1, __size32 param2, __size32 param3, __size32 param4)
{
    addem(param1, param2, param3, param4);
    return;
}

/** address: 0x08048924 */
void addem(__size32 param1, __size32 param2, __size32 param3, union { __size32 *; __size32; } param4)
{
    *(__size32*)param4 = param1 + param2 + param3;
    return;
}

