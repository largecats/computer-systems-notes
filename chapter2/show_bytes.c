#include <stdio.h>
#include "show_bytes.h"

/* show_bytes: print len bytes from position start in hexadecimal */
void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]); /* hexadecimal */
        // printf(" %.2d", start[i]); /* decimal */
    }
    printf("\n");
}


void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}