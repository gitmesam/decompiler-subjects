int main(int argc, char *argv[]);

/** address: 0x100003f0 */
int main(int argc, char *argv[])
{
    int g3_1; 		// r3{0}
    int g3_4; 		// r3{0}
    int g3_6; 		// r3{0}
    int local0; 		// g3_1{0}

    local0 = argc;
    if (argc == 5) {
        do {
bb0x10000414:
            g3_1 = local0;
            g3_6 = g3_1 - 1;
            local0 = g3_6;
            if (g3_1 - 1 <= 12) {
bb0x1000040c:
            }
            else {
                g3_4 = g3_1 - 2;
                local0 = g3_4;
                if (g3_1 > 2) {
                    goto bb0x10000404;
                }
                else {
                    if (g3_1 > 2) {
                        goto bb0x10000414;
                    }
                    return 13;
                }
                return 13;
            }
            goto bb0x1000040c;
        } while (g3_1 - 1 == 12 || g3_1 - 1 <= 12);
bb0x10000404:
    }
    else {
        if (argc <= 5 && argc == 2) {
            do {
            } while (argc > 0);
        }
        else {
            goto bb0x10000404;
        }
    }
    return 13;
}

