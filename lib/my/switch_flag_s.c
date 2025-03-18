/*
** EPITECH PROJECT, 2023
** switch_flag_s
** File description:
** switch_flag_s
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int switch_s(char *format, va_list ap, int *j)
{
    char *s;

    if (format[*j] == 's') {
        s = va_arg(ap, char *);
        my_putstr(s);
    }
}
