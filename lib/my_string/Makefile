##
## EPITECH PROJECT, 2023
## my_string
## File description:
## Makefile
##

SRC	=   my_putstr.c	\
		my_memset.c \
		my_memmove.c \
		my_memcpy.c \
		my_strlen.c	\
		my_strcat.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_strndup.c \
		my_strcmp.c	\
		my_revstr.c	\
		my_strncpy.c	\
		my_strncat.c	\
		my_putchar.c	\
		my_strncmp.c	\
		my_strappend.c	\
		my_realloc_array.c \
		my_stricat.c \
		my_strstr.c

CC	=	gcc
OBJ	=	$(SRC:.c=.o)
FLAGS	=	-Wall -Werror
LIBNAME	=	../libmy_string.a

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
