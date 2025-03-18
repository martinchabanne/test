/*
** EPITECH PROJECT, 2023
** my_isneg
** File description:
** my_isneg
*/

#include "my.h"

int my_isneg(int i)
{
    char p;
    char n;

    p = 'P';
    n = 'N';
    if (i >= 0) {
        my_putchar(p);
    } else {
        my_putchar(n);
    }
    my_putchar('\n');
    return (0);
}
