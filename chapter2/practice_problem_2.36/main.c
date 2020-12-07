#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "../../helper_functions.h"

int tmult_ok(int x, int y);

int main() {
    int x = pow(2, 32-1)-1;
    int y = x;
    printf("Multiply without overflow? %d\n", tmult_ok(x, y));
}

int tmult_ok(int x, int y) {
    int64_t p = (int64_t) x*y;
    print_long_variable(p);
    return p == (int) p;
}

/*
$ gcc chapter2/practice_problem_2.36/main.c helper_functions.c -o chapter2/practice_problem_2.36/output.o
$ chapter2/practice_problem_2.36/output.o
p = 4611686014132420609
Multiply without overflow? 0
*/