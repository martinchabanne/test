/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** save_end
*/

#include "my.h"

int size_of_end2(parsing_t *input, int *size, int *i, int *x)
{
    if (input->file[*i][*x] == '#') {
        (*i)++;
        return 0;
    } else
        if (input->file[*i][*x] == ' ' && input->file[*i][(*x) + 1] == '#') {
            (*i)++;
            (*x) = 0;
            return 0;
        }
        (*size)++;
}

int size_of_end(parsing_t *input)
{
    int size = 0;

    for (int i = 1; my_strcmp(input->file[i], "##end") != 0 &&
    search_char(input->file[i], '-') != 0; i++) {
        for (int x = 0; input->file[i][x] != '#' &&
        input->file[i][x] != '\0'; x++)
            size_of_end2(input, &size, &i, &x);
    }
    return size;
}

int save_end2(parsing_t *input, int *i, int *x, int *y)
{
    if (input->file[*i][*x] == '#')
        return 0;
    else {
        if (input->file[*i][*x] == ' ' && input->file[*i][(*x) + 1] == '#') {
            input->start[*y] = '\0';
            return 0;
        } else {
            input->end[*y] = input->file[*i][*x];
            (*y)++;
            input->end[*y] = '\0';
        }
    }
}

int save_end(parsing_t *input)
{
    int i = 0;
    int y = 0;

    for (i = 0; my_strcmp(input->file[i], "##end") != 0; i++);
    i++;
    input->end = malloc((size_of_end(input) + 1) * sizeof(char *));
    for (i = i; input->file[i] != NULL && my_strcmp(input->file[i], "##start")
    != 0 && search_char(input->file[i], '-') != 0; i++) {
        for (int x = 0; input->file[i][x] != 0 && input->file[i][x] != '#';
        x++)
            save_end2(input, &i, &x, &y);
        if (input->file[i][0] != '#') {
            input->end[y] = '\n';
            y++;
        }
    }
    input->end[y] = '\0';
}
