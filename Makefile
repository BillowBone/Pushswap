##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

NAME	=	push_swap

SRC	=	./src/doublerotate_abr.c	\
		./src/my_getnbr.c		\
		./src/my_put_nbr.c		\
		./src/my_putstr.c		\
		./src/pa_pb.c			\
		./src/pushswap.c		\
		./src/pushswap2.c		\
		./src/rotate_abr.c		\
		./src/structs.c		\
		./src/swap_abc.c		\
		./src/my_putchar.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -pedantic -I./include/

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
