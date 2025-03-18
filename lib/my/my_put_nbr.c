/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "my.h"

int my_put_nbr(int nb)
{
    int n = 0;

    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * (-1));
        return (0);
    }
    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        my_put_nbr(nb / 10);
        n = nb % 10;
        my_putchar(n + 48);
    }
    return (0);
}
