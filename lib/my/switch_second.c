/*
** EPITECH PROJECT, 2023
** My Printf
** File description:
** My PrintF
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int switch5(char *format, va_list ap, int *j)
{
    int i = 1;
    int o = 0;
    int octalNumber = 0;

    switch (format[*j]) {
    case 'o':
        o = va_arg(ap, int);
        while (o != 0) {
            octalNumber += (o % 8) * i;
            o /= 8;
            i *= 10;
        }
        my_put_nbr(octalNumber);
    }
}
