/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/

#ifndef TEST_MY

    #define TEST_MY

    #include <stdlib.h>
    #include <stdio.h>
    #include <stdarg.h>
    #include <stddef.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <pwd.h>
    #include <grp.h>
    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <fcntl.h>
    #include <string.h>
    #include <unistd.h>
    #include <sys/wait.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include "header.h"

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
unsigned int my_put_unsigned(unsigned int nb);
unsigned long my_put_unsigned_long(unsigned long nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
char **my_str_to_word_array(char *str, char param);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(const char *dest, const char *src);
char *my_strcat2(const char *dest, const char *src);
char *my_strncat(char *dest, char const *src, int nb);
char *my_concat(const char *str1, const char *str2);
int switch5(char *format, va_list ap, int *j);
int switch4(char *format, va_list ap, int *j);
int switch3(char *format, va_list ap, int *j);
int switch2(char *format, va_list ap, int *j);
int switch1(char *format, va_list ap, int *j);
int switch_f(char *format, va_list ap, int *j);
int switch_f_dot(char *format, va_list ap, int *j);
int switch_f_zero(char *format, va_list ap, int *j);
int switch_f_negative(char *format, va_list ap, int *j);
int switch_s(char *format, va_list ap, int *j);
int my_printf(char *format, ...);
void my_hex_func(int num);

parsing_t *create_input(void);

int amazed(void);
int read_input(parsing_t *input);
int verif_input(parsing_t *input);
int is_comment(parsing_t *input);
int search_char(char *str, char c);
int save_rooms(parsing_t *input, int i);
int save_start(parsing_t *input);
int save_end(parsing_t *input);
int save_tunnels(parsing_t *input);
int pathfinding_init(parsing_t *input, pathfinding_utils_t *pathfinding);

#endif
