/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** my_swap
*/
void my_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
