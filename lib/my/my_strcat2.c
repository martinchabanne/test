/*
** EPITECH PROJECT, 2023
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>

int src_len2(const char *src)
{
    int i = 0;

    while (src[i] != '\n' && src[i] != '\0') {
        if (src[i] == ' ' && src[i + 1] == '#')
            break;
        if (src[i] == '#')
            break;
        i++;
    }
    if (src[i] == '\n')
        i++;
    return i;
}

int dest_len2(const char *dest)
{
    int i = 0;

    if (dest == NULL)
        return 0;
    while (dest[i] != '\n' && dest[i] != '\0') {
        i++;
    }
    if (dest[i] == '\n')
        i++;
    return i;
}

char *my_strcat2(const char *dest, const char *src)
{
    int len_src = src_len2(src);
    int len_dest = dest_len2(dest);
    char *result = (char *) malloc(len_dest + len_src + 1);

    if (result == NULL)
        return NULL;
    for (int i = 0; i < len_dest; i++) {
        result[i] = dest[i];
    }
    for (int i = 0; i < len_src; i++) {
        if (src[i] == ' ' && src[i + 1] == '#') {
            result[i] = '\n';
            break;
        } else
            result[len_dest + i] = src[i];
    }
    result[len_dest + len_src] = '\0';
    return result;
}
