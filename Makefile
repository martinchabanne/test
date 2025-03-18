##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC     =	lib/my/my_compute_power_rec.c  \
                lib/my/my_compute_square_root.c	\
                lib/my/my_find_prime_sup.c	\
                lib/my/my_getnbr.c	\
                lib/my/my_isneg.c	\
                lib/my/my_is_prime.c   \
                lib/my/my_putchar.c	\
                lib/my/my_put_nbr.c	\
                lib/my/my_putstr.c	\
		lib/my/my_revstr.c	\
                lib/my/my_showmem.c	\
                lib/my/my_showstr.c	\
                lib/my/my_sort_int_array.c	\
                lib/my/my_str_to_word_array.c   \
                lib/my/my_strcapitalize.c	\
                lib/my/my_strcat.c	\
                lib/my/my_strcat2.c	\
                lib/my/my_strcmp.c	\
                lib/my/my_strcpy.c	\
                lib/my/my_str_isalpha.c	\
                lib/my/my_str_islower.c	\
                lib/my/my_str_isnum.c	\
                lib/my/my_str_isprintable.c	\
                lib/my/my_str_isupper.c        \
                lib/my/my_strlen.c	\
                lib/my/my_strlowcase.c	\
                lib/my/my_strncat.c	\
		lib/my/my_strncmp.c	\
                lib/my/my_strncpy.c	\
                lib/my/my_strstr.c	\
                lib/my/my_strupcase.c \
                lib/my/my_printf.c \
                lib/my/switch.c \
                lib/my/switch_second.c \
                lib/my/switch_flag_s.c \
                lib/my/switch_flag_f.c \
                lib/my/switch_flag_f2.c \
                lib/my/switch_flag_f3.c \
                lib/my/my_put_unsigned.c \
                lib/my/my_func_hexa.c \
                lib/my/my_concat.c

SRC_BASE =	$(SRC) \
                src/parsing/comment/comment_handling.c \
                src/parsing/input/save/save_rooms.c \
                src/parsing/input/save/search_char.c \
                src/parsing/input/save/save_start.c \
                src/parsing/input/save/save_end.c \
                src/parsing/input/save/save_tunnels.c \
                src/parsing/input/verif_input.c \
                src/parsing/input/read_input.c \
                src/pathfinding/pathfinding.c \
                src/structure/structure.c \
                src/amazed.c \
                src/main.c

OBJ	=	$(SRC_BASE:.c=.o)

NAME	=	amazed

CFLAGS = -I./include

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
