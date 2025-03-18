/*
** EPITECH PROJECT, 2023
** switch_flag_f3
** File description:
** switch_flag_f3
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int switch_f_negative(char *format, va_list ap, int *j)
{
    if (format[*j - 1] != '+' && format[*j] == '.' && format[*j + 1] == '-') {
        my_putstr("%.0");
    }
    if (format[*j - 1] == '+' && format[*j] == '.' && format[*j + 1] == '-') {
        my_putstr("%+.0");
    }
}
