#include "main.h"

int get_endianness(void) {
    int a = 1;
    char *b;

    a = 1;
    b = (char *)&a;
    return (*b);
}

