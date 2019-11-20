#ifndef MY_H_TESTS
#define MY_H_TESTS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b);
int substract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int modulo(int a, int b);
int do_op(int a, char op, int b);

void my_swap(int *a, int *b);
int my_strlen(char const *str);
char *my_strlowcase(char *str);

int my_func(int a, int b, int c);

#endif