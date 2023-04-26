##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

MAIN_SRC	=	src/main.c

TEST_SRC	=	tests/create_app.c \
				tests/open_file.c \
				tests/file_manipulation.c

FILE_SRC	=	src/asm.c \
				\
				src/file/open_file.c \
				src/file/close_file.c \
				\
				src/file_manipulation/extension.c \
				src/file_manipulation/basename.c \
				\
				src/app/create_app.c \
				src/app/destroy_app.c

FILE_OBJ	=	$(FILE_SRC:.c=.o)
MAIN_OBJ	=	$(MAIN_SRC:.c=.o)
TEST_OBJ	=	$(TEST_SRC:.c=.o)

CC	=	gcc
CFLAGS	= -Wall -Wextra -g3
LDFLAGS	=	-L../lib -lmy_printf -lmy_stdlib -lmy_string
COVERAGE	=	--coverage -lcriterion -fprofile-arcs -ftest-coverage
EXE	=	asm
TEST_EXE	=	$(EXE)_test

all:	$(EXE)

%.o:	%.c
		$(CC) -o $@ -c $< $(CFLAGS)

main.o:	main.c
		$(CC) -o $@ -c $< $(CFLAGS)

$(EXE):	$(FILE_OBJ) $(MAIN_OBJ)
		$(CC) -o $(EXE) $^ $(LDFLAGS)

no_malloc:	$(FILE_OBJ) $(MAIN_OBJ)
			$(CC) -o $(EXE) $^ $(LDFLAGS)

clean:
		rm -rf $(MAIN_OBJ) $(FILE_OBJ) $(TEST_OBJ)
		rm -rf vgcore*
		$(shell find * -name "*.gcda" -delete)
		$(shell find * -name "*.gcno" -delete)

fclean:	clean
		rm -rf $(EXE)
		rm -rf $(TEST_EXE)

re:	fclean all

lib:
		make -C ../lib


unit_tests: $(FILE_OBJ) $(TEST_OBJ)
			$(CC) -o $(TEST_EXE) $^ $(LDFLAGS)

tests_run:	unit_tests
			./$(TEST_EXE)

.PHONY:
no_malloc: CFLAGS += -DNO_MALLOC
unit_tests: CFLAGS += $(COVERAGE)
unit_tests: LDFLAGS += $(COVERAGE)
