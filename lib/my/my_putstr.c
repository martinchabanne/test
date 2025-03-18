/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    int size = 0;

    while (str[size] != '\0') {
        my_putchar(str[size]);
        size = size + 1;
    }
}
