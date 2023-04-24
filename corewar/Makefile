##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

MAIN_SRC	=	src/main.c

TEST_SRC	=	tests/is_working.c \

FILE_SRC	=

FILE_OBJ	=	$(FILE_SRC:.c=.o)
MAIN_OBJ	=	$(MAIN_SRC:.c=.o)
TEST_OBJ	=	$(TEST_SRC:.c=.o)

CC	=	gcc
CFLAGS	= -Wall -Wextra -g3
LDFLAGS	=	-L../lib -lmy_printf -lmy_stdlib -lmy_string
COVERAGE	=	--coverage -lcriterion
EXE	=	corewar
TEST_EXE	=	$(EXE)_test

all:	$(EXE)

%.o:	%.c
		$(CC) -o $@ -c $< $(CFLAGS)

main.o:	main.c
		$(CC) -o $@ -c $< $(CFLAGS)

$(EXE):	$(FILE_OBJ) $(MAIN_OBJ)
		@make -C ../lib
		$(CC) -o $(EXE) $^ $(LDFLAGS)

clean:
		@make -C ../lib clean
		rm -rf $(OBJ)
		rm -rf vgcore*
		$(shell find * -name "*.gcda" -delete)
		$(shell find * -name "*.gcno" -delete)
		$(shell find * -name "*.o" -delete)

fclean:	clean
		@make -C ../lib fclean
		rm -rf $(EXE)
		rm -rf $(TEST_EXE)

re:	fclean all

unit_tests: $(FILE_OBJ) $(TEST_OBJ)
			@make -C ../lib
			$(CC) -o $(TEST_EXE) $^ $(LDFLAGS)

tests_run:	unit_tests
			./$(TEST_EXE)

.PHONY:	unit_tests
unit_tests: CFLAGS += $(COVERAGE)
unit_tests: LDFLAGS += $(COVERAGE)
