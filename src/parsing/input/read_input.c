/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-amazed-cynwal.bureau
** File description:
** open_file
*/

#include "my.h"

int read_input(parsing_t *input)
{
    char *buffer = NULL;
    char *complete_buffer = NULL;
    int read = 0;
    size_t size = 0;
    int i = 0;

    while (getline(&buffer, &size, stdin) > 0)
        complete_buffer = my_strcat(complete_buffer, buffer);
    if (complete_buffer == NULL)
        return 84;
    input->file = my_str_to_word_array(complete_buffer, '\n');
}
