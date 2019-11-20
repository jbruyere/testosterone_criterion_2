#include "my.h"

int main()
{
    int a = 42;
    int b = 777;
    char test[] = "HELLO World !";

    my_swap(&a, &b);
    printf("%d %d\n", a, b);
    printf("%d\n", do_op(1, '+', 1));
    printf("%d\n", my_func(0, 0, 0));
    printf("%d\n", my_strlen("test"));
    printf("%s\n", my_strlowcase(test));
    return 0;
}