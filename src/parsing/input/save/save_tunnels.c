/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** save_tunnels
*/

#include "my.h"

int size_of_tunnels2(parsing_t *input, int *size, int *i)
{
    if (input->file[*i][0] == '#') {
        (*i)++;
        return 0;
    } else
        (*size)++;
}

int size_of_tunnels(parsing_t *input)
{
    int size = 0;

    for (int i = 1; input->file[i] != NULL &&
    search_char(input->file[i], '-') != 0; i++) {
        for (int x = 0; input->file[i][x] != '#' &&
        input->file[i][x] != '\0'; x++)
            size_of_tunnels2(input, &size, &i);
    }
    return size;
}

int save_tunnels2(parsing_t *input, int *i, int x, int *y)
{
    if (input->file[*i][0] == '#') {
        (*i)++;
        return 0;
    } else {
        input->tunnels[*y] = input->file[*i][x];
        (*y)++;
        input->tunnels[*y] = '\0';
    }
}

int save_tunnels(parsing_t *input)
{
    int i = 0;
    int y = 0;

    for (i = 0; input->file[i] != NULL && search_char(input->file[i], '-')
    != 0; i++);
    if (input->file[i] == NULL)
        return 84;
    input->tunnels = malloc((size_of_tunnels(input) + 1) * sizeof(char *));
    for (i = i; input->file[i] != NULL; i++) {
        for (int x = 0; input->file[i][x] != '\0' && input->file[i][x] != '#';
        x++)
            save_tunnels2(input, &i, x, &y);
        if (input->file[i][0] != '#') {
            input->tunnels[y] = '\n';
            y++;
        }
    }
    input->tunnels[y] = '\0';
}
