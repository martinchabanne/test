/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/
int fib_rec(int nb, int p)
{
    int result = 1;
    int x = 0;

    if (p < 0) {
        for (x = 0; x > p; x--) {
            result = result / nb;
        }
        return (result);
    } else {
        for (x = 0; x < p; x++) {
            result = result * nb;
        }
        return (result);
    }
}

int my_compute_power_rec(int nb, int p)
{
    int resu;

    resu = fib_rec(nb, p);
}
