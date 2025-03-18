/*
** EPITECH PROJECT, 2023
** my_strcpy
** File description:
** my_strcpy
*/
char *my_strcpy(char *dest, char const *src)
{
    int i;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (0);
}
