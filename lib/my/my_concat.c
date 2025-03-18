/*
** EPITECH PROJECT, 2024
** my_concat
** File description:
** my_concat
*/

#include "my.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

char *my_concat(const char *str1, const char *str2)
{
    char *result = (char *) malloc(strlen(str1) + strlen(str2) + 1);

    if (result == NULL)
        return NULL;
    my_strcpy(result, str1);
    my_strcat(result, str2);
    return result;
}
