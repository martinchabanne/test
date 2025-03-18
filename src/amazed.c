/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** amazed
*/

#include "my.h"

int amazed(void)
{
    parsing_t *input = create_input();
    pathfinding_utils_t *pathfinding_t = malloc(sizeof(pathfinding_utils_t));

    if (read_input(input) == 84)
        return 84;
    if (verif_input(input) == 84)
        return 84;
    if (is_comment(input) == 84)
        return 84;
    if (save_tunnels(input) == 84)
        return 84;
    if (input->start[0] == 0 || input->end[0] == 0)
        return 84;
    my_printf("#number_of_robots\n%s\n#rooms\n%s",
    input->nbr_robots, input->rooms);
    my_printf("##start\n%s##end\n%s#tunnels\n%s",
    input->start, input->end, input->tunnels);
    pathfinding_init(input, pathfinding_t);
}
