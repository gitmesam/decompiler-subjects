int main(int argc, char *argv[]);

/** address: 0x08048450 */
int main(int argc, char *argv[])
{
    int eax; 		// r24
    char *eax_11; 		// r24{0}
    int eax_14; 		// r24{0}
    int eax_15; 		// r24{0}
    FILE *eax_3; 		// r24{0}
    int eax_5; 		// r24{0}
    char *eax_8; 		// r24{0}
    int edx; 		// r26
    char local0[]; 		// m[esp - 0x40c]
    int local6; 		// eax_14{0}

    if (argc <= 1) {
        eax = 1;
        local6 = eax;
    }
    else {
        edx = *(argv + 4);
        eax_3 = fopen(edx, "r");
        eax_5 = 1;
        local6 = eax_5;
        if (eax_3 != 0) {
            eax_8 = fgets(&local0, 1024, eax_3);
            if (eax_8 != 0) {
                eax_11 = strchr(eax_8, '\n');
                if (eax_11 != 0) {
                    *(union { char; __size8; }*)eax_11 = 0;
                }
                puts(&local0);
            }
            eax_15 = fclose(eax_3);
            local6 = eax_15;
        }
    }
    eax_14 = local6;
    return eax_14;
}

