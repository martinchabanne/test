/*
** EPITECH PROJECT, 2023
** My Printf
** File description:
** My PrintF
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int switch4(char *format, va_list ap, int *j)
{
    int numbers = 0;

    if (format[*j] >= '0' && format[*j] <= '9'
        || format[*j] == '-' || format[*j] == '#') {
        while (format[*j] >= '0' && format[*j] <= '9'
                || format[*j] == '-' || format[*j] == '#') {
            numbers = numbers * 10 + (format[*j] - 48);
            (*j)++;
        }
    }
}

int switch3(char *format, va_list ap, int *j)
{
    unsigned int u;
    int x;

    switch (format[*j]) {
    case 'u':
        u = va_arg(ap, int);
        my_put_unsigned(u);
        break;
    case 'x':
        x = va_arg(ap, int);
        my_hex_func(x);
        break;
    case 'X':
        x = va_arg(ap, int);
        my_hex_func(x);
    }
}

int switch2(char *format, va_list ap, int *j)
{
    int i;
    int d;

    switch (format[*j]) {
    case 'i':
        i = va_arg(ap, int);
        my_put_nbr(i);
        break;
    case 'd':
        d = va_arg(ap, int);
        my_put_nbr(d);
    }
}

int char_to_int(char *character)
{
    if ('0' <= character[0] && character[0] <= '9')
        return character[0] - '0';
    else
        return 84;
}

int switch1(char *format, va_list ap, int *j)
{
    char c;
    char *s;
    char *p;

    switch (format[*j]) {
    case 'c':
        c = va_arg(ap, int);
        my_putchar(c);
        break;
    case 'p':
        p = va_arg(ap, void *);
        my_hex_func(char_to_int(p));
        break;
    case '%':
        my_putchar('%');
    }
}
