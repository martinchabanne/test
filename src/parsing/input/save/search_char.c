/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** search_char
*/

#include "my.h"

int search_char(char *str, char c)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '#')
            return 1;
        if (str[i] == c)
            return 0;
    }
    return 84;
}
