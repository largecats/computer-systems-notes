#include <stdio.h>

#define MAXLINE 100
#define print_variable(expr) printf(#expr " = %d\n", expr)
#define print_long_variable(expr) printf(#expr " = %ld\n", expr)
#define print_char(expr) printf(#expr " = %c\n", expr)
#define print_string(expr) printf(#expr " = %s\n", expr)

void print_array(int arr[]);
void print_float_array(double arr[]);

void print_char_with_visible_blanks(char c);