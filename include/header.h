/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** header1
*/

#ifndef HEADER_H
    #define HEADER_H

typedef struct {
    char **file;
    char *nbr_robots;
    char *rooms;
    char *start;
    char *end;
    char *tunnels;
    char *moves;
    char **write;
} parsing_t;

typedef struct {
    char *rooms;
    char *start;
    char *end;
} pathfinding_utils_t;

#endif /* HEADER_H */
