int main(int argc, char *argv[]);

/** address: 0x10000418 */
int main(int argc, char *argv[])
{
    int local0; 		// m[g1 - 24]

    local0 = 0;
    do {
        local0++;
        printf("%d ", local0);
    } while (local0 <= 9);
    printf("a is %d, x is %d\n", local0, local0);
    return 0;
}

