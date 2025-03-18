/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>

int src_len(const char *src)
{
    int i = 0;

    while (src[i] != '\0') {
        i++;
    }
    return i;
}

int dest_len(const char *dest)
{
    int i = 0;

    if (dest == NULL)
        return 0;
    while (dest[i] != '\0') {
        i++;
    }
    return i;
}

char *my_strcat(const char *dest, const char *src)
{
    int len_src = src_len(src);
    int len_dest = dest_len(dest);
    char *result = (char *) malloc(len_dest + len_src + 1);

    if (result == NULL)
        return NULL;
    for (int i = 0; i < len_dest; i++) {
        result[i] = dest[i];
    }
    for (int i = 0; i < len_src; i++) {
        result[len_dest + i] = src[i];
    }
    result[len_dest + len_src] = '\0';
    return result;
}
