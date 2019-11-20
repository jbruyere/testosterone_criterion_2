int add(int a, int b)
{
    return a + b;
}

int substract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulo(int a, int b)
{
    return a % b;
}

int do_op(int a, char op, int b)
{
    int (*fun[])(int, int) = {add, substract, multiply, divide, modulo};
    char operators[] = {'+', '-', '*', '/', '%'};

    for (int i = 0; i < 5; i++)
        if (operators[i] == op)
            return fun[i](a, b);
    return 0;
}