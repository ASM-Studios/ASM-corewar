##
## EPITECH PROJECT, 2023
## my_printf
## File description:
## Makefile
##

SRC	=	src/my_printf.c	\
		src/mp_putnbr.c	\
		src/mp_putstr.c	\
		src/mp_putchar.c	\
		src/mp_putfloat.c	\

CC	=	gcc
OBJ	=	$(SRC:.c=.o)
FLAGS	=	-Wall -Werror
LIBNAME	=	../libmy_printf.a

all:	$(LIBNAME)

%.o:	%.c
		$(CC) -o $@ -c $< $(FLAGS)

$(LIBNAME):	$(OBJ)
			ar rc $(LIBNAME) $^

clean:
		rm -rf $(OBJ)

fclean:	clean
		rm -rf $(LIBNAME)

re:	fclean all
