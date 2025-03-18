/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** structure
*/

#include "my.h"

parsing_t *create_input(void)
{
    parsing_t *input = malloc(sizeof(parsing_t));

    input->file = NULL;
    input->nbr_robots = NULL;
    input->rooms = NULL;
    input->start = NULL;
    input->end = NULL;
    input->tunnels = NULL;
    input->moves = NULL;
    input->write = NULL;
    return input;
}
