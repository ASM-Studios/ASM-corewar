##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

MAIN_SRC	=	src/main.c

TEST_SRC	=

FILE_SRC	=

FILE_OBJ	=	$(FILE_SRC:.c=.o)
MAIN_OBJ	=	$(MAIN_SRC:.c=.o)
TEST_OBJ	=	$(TEST_SRC:.c=_test.o)

CC	=	gcc
INCLUDE	=	./include
SANITIZE	=	-fsanitize=address
CFLAGS	= -I$(INCLUDE) -Wall -g3
LDFLAGS	=	-L../lib -lmy_printf -lmy_stdlib -lmy_string
COVERAGE	=	--coverage -lcriterion
EXE	=	corewar
TEST_EXE	=	$(EXE)_test

all:	$(EXE)

%.o:	%.c
		$(CC) -o $@ -c $< $(CFLAGS)

%_test.o:	%.c
			$(CC) -o $@ -c $<

main.o:	main.c
		$(CC) -o $@ -c $< $(CFLAGS)

$(EXE):	$(MAIN_OBJ) $(FILE_OBJ)
		$(CC) -o $(EXE) $(MAIN_OBJ) $(FILE_OBJ) $(LDFLAGS)

sanitize:	$(MAIN_OBJ) $(FILE_OBJ)
			$(CC) -o $(EXE) $^ $(LDFLAGS)

unit_tests: clean $(FILE_OBJ) $(TEST_OBJ)
			$(CC) -o $(TEST_EXE) $(FILE_OBJ) $(TEST_OBJ) $(LDFLAGS)

tests_run:	unit_tests
			./$(TEST_EXE)

clean:
		rm -rf $(MAIN_OBJ) $(FILE_OBJ) $(TEST_OBJ) $(MALLOC_OBJ)
		$(shell find * -name "vgcore.*" -delete)
		$(shell find * -name "*.gcda" -delete)
		$(shell find * -name "*.gcno" -delete)

fclean:	clean
		rm -rf $(EXE)
		rm -rf $(TEST_EXE)

re:	fclean all

lib:
		make -C ../lib

.PHONY: all clean fclean re lib unit_tests tests_run

sanitize: CFLAGS += $(SANITIZE)
sanitize: LDFLAGS += $(SANITIZE)

no_malloc:	CFLAGS += -DNO_MALLOC

unit_tests: CFLAGS += $(COVERAGE)
unit_tests: CFLAGS += -DUNIT_TEST
unit_tests: LDFLAGS += $(COVERAGE)
