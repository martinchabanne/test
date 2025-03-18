/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** my_strncpy
*/
char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    while (i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (n > dest[i]) {
        dest[i] = '\0';
        return (dest);
    } else {
        return (dest);
    }
}
