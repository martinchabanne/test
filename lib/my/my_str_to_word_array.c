/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "my.h"

int number(char y)
{
    if (y >= '0' && y <= '9')
        return 1;
    return 0;
}

int nbr_character(char *str)
{
    static int i = 0;
    int number = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        i++;
        number++;
    }
    i++;
    number++;
    return number;
}

int nbr_line(char *str, char param)
{
    int x = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == param) {
            x++;
        }
        i++;
    }
    return x;
}

int initial_nbr(char *str, int *y)
{
    while (number(str[*y]) || str[*y] == '\0')
        (*y)++;
}

char **my_str_to_word_array(char *str, char param)
{
    char **buffer =
    (char **) malloc((nbr_line(str, param) + 2) * sizeof(char *));
    int x = 0;
    int i = 0;

    for (int y = 0; y < my_strlen(str); y) {
        i = 0;
        buffer[x] = (char *) malloc((nbr_character(str) + 2) * sizeof(char));
        while (str[y] != param && str[y] != 0) {
            buffer[x][i] = str[y];
            i++;
            y++;
        }
        buffer[x][i] = '\0';
        y++;
        x++;
    }
    buffer[x] = 0;
    return buffer;
}
