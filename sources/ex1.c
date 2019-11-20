void my_swap(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

char *my_strlowcase(char *str)
{

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] <= 'Z' && str[i] >= 'A')
            str[i] = str[i] + 32;
	return (str);
}