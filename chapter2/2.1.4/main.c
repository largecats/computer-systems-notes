#include <stdio.h>
#include <string.h>
#include "../show_bytes.h"

int main() {
    char *s = "12345";
    show_bytes(s, 6);

    /* practice problem 2.7 */
    char *m = "mnopqr";
    show_bytes((byte_pointer) m, strlen(m)); /* m is already a pointer */

    return 0;
}

/*
$ gcc chapter2/2.1.4/main.c chapter2/show_bytes.c -o chapter2/2.1.4/output.o
$ chapter2/2.1.4/output.o
 31 32 33 34 35 00
 6d 6e 6f 70 71 72
*/