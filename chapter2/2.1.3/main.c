#include <stdio.h>
#include "../show_bytes.h"

void test_show_bytes(int val);

int main() {
    int x = 12345;
    test_show_bytes(x);

    putchar('\n');

    /* practice problem 2.5 */
    int a = 0x12345678;
    byte_pointer ap = (byte_pointer) &a;
    show_bytes(ap, 1);
    show_bytes(ap, 2);
    show_bytes(ap, 3);

    return 0;
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

/*
$ gcc chapter2/2.1.3/main.c chapter2/show_bytes.c -o chapter2/2.1.3/output.o
$ chapter2/2.1.3/output.o
39 30 00 00
00 e4 40 46
f8 76 e8 c4 ff 7f 00 00

78
78 56
78 56 34
*/

/*
decimal: 12345
hexadecimal: 0x3039
*/