int main(int argc, char *argv[]);

/** address: 0x10000418 */
int main(int argc, char *argv[])
{
    int g10; 		// r10
    int g9; 		// r9
    double local0; 		// m[g1 - 8]

    printf("Many parameters: %d, %.1f, %d, %.1f, %d, %.1f, %d, %.1f\n", 1, 2.8025969e-45, 3, 5.6051939e-45, /* machine specific */ (int) LR, g9, g10, local0);
    return 0;
}

