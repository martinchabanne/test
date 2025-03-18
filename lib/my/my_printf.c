/*
** EPITECH PROJECT, 2023
** My Printf
** File description:
** My PrintF
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int call_all(char *format, va_list ap, int *j)
{
    if (format[*j] == '%') {
        (*j)++;
        switch4(format, ap, j);
        switch5(format, ap, j);
        switch3(format, ap, j);
        switch2(format, ap, j);
        switch1(format, ap, j);
        switch_s(format, ap, j);
        switch_f(format, ap, j);
        switch_f_zero(format, ap, j);
        switch_f_dot(format, ap, j);
        switch_f_negative(format, ap, j);
    } else {
        my_putchar(format[*j]);
    }
}

int my_printf(char *format, ...)
{
    int j = 0;
    va_list ap;

    va_start(ap, format);
    while (format[j] != '\0') {
        call_all(format, ap, &j);
        j++;
    }
    va_end(ap);
    return 0;
}
