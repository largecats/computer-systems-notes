#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "helper_functions.h"

void print_array(int arr[]) {
    int i;

    i = 0;
    printf("[");
    while (arr[i] != '\0') {
        printf("%d, ", arr[i++]);
    }
    printf("]\n");
}

void print_float_array(double arr[]) {
    int i;

    i = 0;
    printf("[");
    while (arr[i] != '\0') {
        printf("%.3f, ", arr[i++]);
    }
    printf("]\n");
}

void print_char_with_visible_blanks(char c) {
    if (c == '\t') {
        printf("\\t");
    }
    else if (c == ' ') {
        printf("\\s");
    }
    else if (c == '\n') {
        printf("\\n\n");
    }
    else {
        putchar(c);
    }
}