#include <stdio.h>

int uadd_ok(unsigned x, unsigned y);

int main() {
    if (uadd_ok(__UINTMAX_MAX__, __UINTMAX_MAX__)) {
        printf("Can add\n");
    }
    else {
        printf("Overflow\n");
    }

    if (uadd_ok(__INT8_MAX__, __INT8_MAX__)) {
        printf("Can add\n");
    }
    else {
        printf("Overflow\n");
    }
}

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    return sum >= x;
}

/*
$ gcc chapter2/2.3.1/main.c -o chapter2/2.3.1/output.o
$ chapter2/2.3.1/output.o
Overflow
Can add
*/