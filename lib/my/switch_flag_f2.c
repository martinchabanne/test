/*
** EPITECH PROJECT, 2023
** switch_f
** File description:
** switch_f
*/

#include <stdio.h>
#include <stdarg.h>
#include "my.h"

int switch_f_zero_number2(int number2, double dot_nbr_zero)
{
    int dot_nbr_zero1;
    int dot_nbr_zero2;
    int dot_nbr_zero3;

    dot_nbr_zero1 = (int)dot_nbr_zero;
    dot_nbr_zero2 = ((double)(dot_nbr_zero - dot_nbr_zero1) *
                    my_compute_power_rec(10, (number2 + 1)));
    if (dot_nbr_zero2 > 5)
        dot_nbr_zero2 = dot_nbr_zero2 + 1;
    dot_nbr_zero3 = dot_nbr_zero2 % 10;
    if (dot_nbr_zero3 > 4)
        dot_nbr_zero2 = dot_nbr_zero2 + 10;
    dot_nbr_zero2 = dot_nbr_zero2 / 10;
    my_put_nbr(dot_nbr_zero1);
    my_putchar('.');
    my_put_nbr(dot_nbr_zero2);
}

int switch_f_zero_number(char *format, int *j, double dot_nbr_zero)
{
    int number2 = 0;

    if (format[*j] >= '1' && format[*j] <= '9') {
        while (format[*j] >= '0' && format[*j] <= '9' && format[*j] != 'f') {
            number2 = number2 * 10 + (format[*j] - 48);
            (*j)++;
        }
    }
    switch_f_zero_number2(number2, dot_nbr_zero);
}

int print_integer(double dot_nbr_zero)
{
    int number2 = 0;
    int nbr_inverse = 0;
    int dot_nbr_zero1;
    int dot_nbr_zero2;
    int dot_nbr_zero3;

    dot_nbr_zero1 = (int)dot_nbr_zero;
    dot_nbr_zero2 = ((double)(dot_nbr_zero - dot_nbr_zero1) *
                    my_compute_power_rec(10, 2));
    if (dot_nbr_zero2 > 5)
        dot_nbr_zero2 = dot_nbr_zero2 + 1;
    dot_nbr_zero3 = dot_nbr_zero2 % 10;
    if (dot_nbr_zero3 > 4)
        dot_nbr_zero2 = dot_nbr_zero2 + 10;
    dot_nbr_zero2 = dot_nbr_zero2 / 10;
    if (dot_nbr_zero2 > 4)
        dot_nbr_zero1 = dot_nbr_zero1 + 1;
    my_put_nbr(dot_nbr_zero1);
}

int switch_f_zero(char *format, va_list ap, int *j)
{
    double dot_nbr_zero;

    if (format[*j] == '.' && format[*j + 1] == 'f' ||
        format[*j] == '.' && format[*j + 1] == '0') {
        dot_nbr_zero = va_arg(ap, double);
        (*j)++;
        while (format[*j] == '0' && format[*j] != 'f') {
            (*j)++;
        }
        if (format[*j] >= '1' && format[*j] <= '9') {
            switch_f_zero_number(format, j, dot_nbr_zero);
        } else {
            print_integer(dot_nbr_zero);
        }
    }
}
