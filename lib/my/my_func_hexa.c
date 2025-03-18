/*
** EPITECH PROJECT, 2023
** Hexadecimal Function
** File description:
** Hexadecimal Function
*/

#include <stdio.h>
#include "my.h"

void my_hex_func(int num)
{
    char hex[100];
    int i = 0;
    int temp = 0;

    while (num != 0) {
        temp = num % 16;
        if (temp < 10) {
            hex[i] = temp + '0';
            i++;
        } else {
            hex[i] = temp + 'A' - 10;
            i++;
        }
        num = num / 16;
    }
    my_putstr("0x");
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(hex[j]);
    }
}
