##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

MAIN_SRC	=	src/main.c

TEST_SRC	=

FILE_SRC	=	src/corewar.c \
				src/display_help.c \
				src/count_champion.c \
				src/extract_bytecode.c \
				src/close_app.c \
				src/gloop.c \
				\
				src/op/op.c \
				\
				src/arg_parser/arg_parser.c \
				src/arg_parser/condition/dump_cycle.c \
				src/arg_parser/condition/load_adress.c \
				src/arg_parser/condition/prog_number.c \
				\
				src/app/create_app.c \
				src/app/destroy_app.c \
				\
				src/champion/create_champion.c \
				src/champion/destroy_champion.c \
				src/champion/detect_champion.c \
				src/champion/destroy_list.c \
				\
				src/champion/open_file.c \
				src/champion/integrity/check_integrity.c \
				src/champion/integrity/check_load_adress.c \
				src/champion/integrity/check_prog_number.c \
				src/champion/complete/complete.c \
				src/champion/complete/complete_prog_number.c \
				\
				src/file_manipulation/suffix.c \
				\
				src/array/is_in.c \
				src/array/swap.c \
				src/array/is_number.c \
				src/array/split.c \
				src/array/trailing_space.c \
				src/array/array_to_line.c \
				src/array/free_array.c \
				src/array/len_array.c \
				src/array/print_array.c \
				src/array/alloc_array.c \
				src/array/add_in_array.c

FILE_OBJ	=	$(FILE_SRC:.c=.o)
MAIN_OBJ	=	$(MAIN_SRC:.c=.o)
TEST_OBJ	=	$(TEST_SRC:.c=_test.o)

CC	=	gcc
INCLUDE	=	./include
SANITIZE	=	-fsanitize=address
CFLAGS	= -I$(INCLUDE) -Wall -Wextra -g3
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
		$(CC) -o $(EXE) $^ $(LDFLAGS)

sanitize:	$(MAIN_OBJ) $(FILE_OBJ)
			$(CC) -o $(EXE) $^ $(LDFLAGS)

unit_tests: $(FILE_OBJ) $(TEST_OBJ)
			$(CC) -o $(TEST_EXE) $^ $(LDFLAGS)

tests_run:	unit_tests
			./$(TEST_EXE)

clean:
		rm -rf $(MAIN_OBJ) $(FILE_OBJ) $(TEST_OBJ)
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

unit_tests: CFLAGS += $(COVERAGE)
unit_tests: CFLAGS += -DUNIT_TEST
unit_tests: LDFLAGS += $(COVERAGE)
