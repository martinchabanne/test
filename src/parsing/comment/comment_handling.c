/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** comment_handling
*/

#include "my.h"

int line_handling(parsing_t *input, int *i, int *x)
{
    if (my_strcmp(input->file[*i], "##start") == 0) {
        if (save_start(input) == 84)
            return 84;
        (*i)++;
        (*x) = 0;
    }
    if (my_strcmp(input->file[*i], "##end") == 0) {
        if (save_end(input) == 84)
            return 84;
        (*i)++;
        (*x) = 0;
    }
    if (input->file[(*i) + 1] != NULL && input->file[*i][(*x) + 1] != 0) {
        (*i)++;
        (*x) = 0;
    }
    return 0;
}

int comment_handling(parsing_t *input, int *i, int *x)
{
    if (input->file[*i][*x] == '#') {
        if (line_handling(input, i, x) == 84)
            return 84;
    }
}

int is_comment(parsing_t *input)
{
    for (int i = 0; input->file[i] != NULL; i++) {
        for (int x = 0; input->file[i][x] != 0; x++) {
            comment_handling(input, &i, &x);
        }
    }
}
