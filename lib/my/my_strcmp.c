/*
** EPITECH PROJECT, 2023
** my_strncmp
** File description:
** my_strncmp
*/
int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    *s1 - *s2;
}
