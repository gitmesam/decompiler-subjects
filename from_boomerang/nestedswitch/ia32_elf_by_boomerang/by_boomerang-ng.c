int main(int argc, char *argv[]);

/** address: 0x0804837c */
int main(int argc, char *argv[])
{
    if ((unsigned int)argc > 7) {
bb0x80483a8:
        puts("Other!");
        return 0;
    }
    switch(argc) {
    case 0:
        goto bb0x80483a8;
    case 1:
        goto bb0x80483a8;
    case 2:
bb0x80483bc:
        puts("Two!");
        return 0;
    case 3:
bb0x804840c:
        puts("Three!");
        return 0;
    case 4:
        if (7 - argc <= 5) {
            switch(7 - argc) {
            case 0:
bb0x80483d0:
                puts("Seven!");
                return 0;
            case 1:
bb0x80483e4:
                puts("Six!");
                return 0;
            case 2:
bb0x80483f8:
                puts("Five!");
                return 0;
            case 3:
                puts("Four!");
                return 0;
            case 4:
                goto bb0x804840c;
            case 5:
                goto bb0x80483bc;
            }
            return 0;
        }
        goto bb0x80483a8;
    case 5:
        goto bb0x80483f8;
    case 6:
        goto bb0x80483e4;
    case 7:
        goto bb0x80483d0;
    }
    return 0;
}

