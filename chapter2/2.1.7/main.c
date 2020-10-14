#include <stdio.h>
#include "../show_bytes.h"

int main() {
    int x = 0x87654321;
    show_int(x & 0xFF);
    show_int((~x & (~0xFF)) | (x & 0xFF));
    show_int(x | 0xFF);
}

/*
$ gcc chapter2/2.1.7/main.c chapter2/show_bytes.c -o chapter2/2.1.7/output.o
$ chapter2/2.1.7/output.o
21 00 00 00
21 bc 9a 78
ff 43 65 87
*/