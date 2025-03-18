/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "my.h"

unsigned int my_put_unsigned(unsigned int nb)
{
    unsigned int n = 0;

    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        my_put_unsigned(nb / 10);
        n = nb % 10;
        my_putchar(n + 48);
    }
    return 0;
}
