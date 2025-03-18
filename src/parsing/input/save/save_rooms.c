/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** save_rooms
*/

#include "my.h"

int size_of_rooms2(parsing_t *input, int *size, int *i)
{
    if (input->file[*i][0] == '#') {
        (*i)++;
        return 0;
    } else
        (*size)++;
}

int size_of_rooms(parsing_t *input)
{
    int size = 0;

    for (int i = 1; my_strcmp(input->file[i], "##start") != 0 &&
    my_strcmp(input->file[i], "##end") != 0; i++) {
        for (int x = 0; input->file[i][x] != '#' &&
        input->file[i][x] != '\0'; x++)
            size_of_rooms2(input, &size, &i);
    }
    return size;
}

int save_rooms2(parsing_t *input, int *i, int x, int *y)
{
    if (input->file[*i][0] == '#') {
        (*i)++;
        return 0;
    } else {
        input->rooms[*y] = input->file[*i][x];
        (*y)++;
        input->rooms[*y] = '\0';
    }
}

int save_rooms(parsing_t *input, int i)
{
    int y = 0;

    input->rooms = malloc((size_of_rooms(input) + 1) * sizeof(char *));
    for (i = i; my_strcmp(input->file[i], "##start") != 0 &&
    my_strcmp(input->file[i], "##end") != 0; i++) {
        for (int x = 0; input->file[i][x] != '#' &&
        input->file[i][x] != '\0'; x++)
            save_rooms2(input, &i, x, &y);
        if (input->file[i][0] != '#') {
            input->rooms[y] = '\n';
            y++;
        }
    }
    input->rooms[y] = '\0';
}
