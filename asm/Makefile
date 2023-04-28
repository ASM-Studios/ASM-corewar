##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

MAIN_SRC	=	src/main.c

MALLOC_SRC	=	src/my_malloc.c

TEST_SRC	=	tests/asm.c \
				tests/parser.c \
				tests/open_file.c \
				tests/create_app.c \
				tests/file_manipulation.c \
				tests/array_manipulation.c \

FILE_SRC	=	src/asm.c \
				\
				src/op/op.c \
				src/op/linker.c \
				src/op/create_node.c \
				src/op/delete_node.c \
				\
				src/parser/header.c \
				src/parser/parser.c \
				src/parser/comment.c \
				src/parser/parse_line.c \
				src/parser/trailing_space.c \
				\
				src/array_manipulation/split.c \
				src/array_manipulation/free_array.c \
				src/array_manipulation/len_array.c \
				src/array_manipulation/print_array.c \
				\
				src/file/open_file.c \
				src/file/close_file.c \
				\
				src/file_manipulation/extension.c \
				src/file_manipulation/basename.c \
				\
				src/app/create_app.c \
				src/app/destroy_app.c \

FILE_OBJ	=	$(FILE_SRC:.c=.o)
MAIN_OBJ	=	$(MAIN_SRC:.c=.o)
TEST_OBJ	=	$(TEST_SRC:.c=.o)
MALLOC_OBJ	=	$(MALLOC_SRC:.c=.o)

CC	=	gcc
INCLUDE	=	./include
SANITIZE	=	-fsanitize=address
CFLAGS	= -I$(INCLUDE) -Wall -g3
LDFLAGS	=	-L../lib -lmy_printf -lmy_stdlib -lmy_string
COVERAGE	=	--coverage -lcriterion
EXE	=	asm
TEST_EXE	=	$(EXE)_test

all:	$(EXE)

%.o:	%.c
		$(CC) -o $@ -c $< $(CFLAGS)

main.o:	main.c
		$(CC) -o $@ -c $< $(CFLAGS)

$(EXE):	$(MAIN_OBJ) $(FILE_OBJ)
		$(CC) -o $(EXE) $^ $(LDFLAGS)

no_malloc:	$(MAIN_OBJ) $(FILE_OBJ) $(MALLOC_OBJ)
			$(CC) -o $(EXE) $^ $(LDFLAGS)

sanitize:	$(MAIN_OBJ) $(FILE_OBJ)
			$(CC) -o $(EXE) $^ $(LDFLAGS)

unit_tests: $(FILE_OBJ) $(TEST_OBJ)
			$(CC) -o $(TEST_EXE) $^ $(LDFLAGS)

tests_run:	unit_tests
			./$(TEST_EXE)

clean:
		rm -rf $(MAIN_OBJ) $(FILE_OBJ) $(TEST_OBJ) $(MALLOC_OBJ)
		rm -rf vgcore*
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
