/*
** EPITECH PROJECT, 2019
** malloc
** File description:
** basi_tests
*/

#include <criterion/criterion.h>
#include "my.h"

Test(text_example, example)
{
    cr_expect(1);
}

Test(test_example2, example2)
{
    char *str = "test";

    cr_expect_str_eq("test", str);
}