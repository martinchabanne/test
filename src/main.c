/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        my_putstr("USAGE\n\t./amazed\nDESCRIPTION\n\t");
        my_putstr("amazed is a program that will read a file and ");
        my_putstr("display the shortest path between two rooms.\n");
    } else {
        if (amazed() == 84)
            return 84;
    }
    return 0;
}
