/*
** EPITECH PROJECT, 2023
** switch_f
** File description:
** switch_f
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int switch_f_dot2(double dot_nbr, int number)
{
    int dot_nbr1;
    int dot_nbr2;
    int dot_nbr3;

    dot_nbr1 = (int)dot_nbr;
    dot_nbr2 = ((double)(dot_nbr - dot_nbr1) *
                my_compute_power_rec(10, (number + 1)));
    if (dot_nbr2 < 0)
        dot_nbr2 = dot_nbr2 * (-1);
    if (dot_nbr2 > 5)
        dot_nbr2 = dot_nbr2 + 1;
    dot_nbr3 = dot_nbr2 % 10;
    if (dot_nbr3 > 5)
        dot_nbr2 = dot_nbr2 + 10;
    dot_nbr2 = dot_nbr2 / 10;
    my_put_nbr(dot_nbr1);
    my_putchar('.');
    my_put_nbr(dot_nbr2);
}

int switch_f_dot(char *format, va_list ap, int *j)
{
    double dot_nbr = va_arg(ap, double);
    int number = 0;

    if (format[*j] == '.' && format[*j + 1] >= '0' && format[*j + 1] <= '9') {
        (*j)++;
        number = (format[*j] - 48);
        (*j)++;
        while (format[*j] >= '0' && format[*j] <= '9') {
            number = number * 10 + (format[*j] - 48);
            (*j)++;
        }
        if (format[*j] == 'f')
            switch_f_dot2(dot_nbr, number);
    }
}

int cond_switch_f2(char *format, va_list ap, int *j, int f2)
{
    char *six = "000000";

    if (f2 == 0) {
        my_putstr(six);
    } else {
        my_put_nbr(f2);
    }
}

int switch_f2(char *format, va_list ap, int *j)
{
    double f = va_arg(ap, double);
    int f1 = 0;
    int f2 = 0;
    int f3 = 0;

    f1 = (int)f;
    f2 = (double)(f - f1) * 10000000;
    if (f2 > 0) {
        if (f2 < 0)
            f2 = f2 * (-1);
        f3 = f2 % 10;
        f2 = f2 / 10;
        if (f3 > 5)
            f2 = f2 + 1;
    }
    my_put_nbr(f1);
    my_putchar('.');
    cond_switch_f2(format, ap, j, f2);
}

int switch_f(char *format, va_list ap, int *j)
{
    switch4(format, ap, j);
    switch (format[*j]) {
    case 'f':
        switch_f2(format, ap, j);
    }
}
