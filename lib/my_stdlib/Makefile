##
## EPITECH PROJECT, 2023
## my_string
## File description:
## Makefile
##

SRC	=	my_atoi.c	\
		my_atof.c	\
		my_putnbr.c	\
		my_atox_globalf.c	\

CC	=	gcc
OBJ	=	$(SRC:.c=.o)
FLAGS	=	-Wall -Werror
LIBNAME	=	../libmy_stdlib.a

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
