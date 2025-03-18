/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** verif_input
*/

#include "my.h"

int char_star_to_int(char *str)
{
    int number = 0;

    for (int i = 0; str[i] != 0; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (84);
        if (str[i + 1] != 0 && str[i + 1] != '#' && str[i + 1] != '\n' &&
        str[i + 1] != ' ')
            number += (str[i] - '0') * 10;
        else {
            number += str[i] - '0';
            return number;
        }
    }
}

int verif_comment(parsing_t *input)
{
    int x = 0;

    for (int i = 0; input->file[i] != NULL; i++) {
        if (my_strcmp(input->file[i], "##start") == 0)
            x++;
        if (my_strcmp(input->file[i], "##end") == 0)
            x++;
    }
    return x;
}

int verif_input2(parsing_t *input, int i)
{
    i++;
    for (i = i; input->file[i][0] == '#'; i++) {
        if (input->file[i][0] == '#' && input->file[i][1] == '#')
            return 84;
    }
    if (save_rooms(input, i) == 84)
        return 84;
}

int verif_input(parsing_t *input)
{
    int i = 0;

    for (i = 0; input->file[i][0] == '#'; i++);
    if (search_char(input->file[i], ' ') == 0 &&
    search_char(input->file[i], '-') == 0)
        return 0;
    if (char_star_to_int(input->file[i]) == 84)
        return 84;
    else
        input->nbr_robots = my_strcat2(input->nbr_robots, input->file[i]);
    if (input->nbr_robots != NULL) {
        if (verif_input2(input, i) == 84)
            return 84;
        if (verif_comment(input) != 2)
            return 84;
    }
}
