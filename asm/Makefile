##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

MAIN_SRC	=	src/main.c

TEST_SRC	=	tests/op.c \
				tests/asm.c \
				tests/parser.c \
				tests/instruction.c \
				tests/open_file.c \
				tests/create_app.c \
				tests/file_manipulation.c \
				tests/array_manipulation.c \

FILE_SRC	=	src/asm.c \
				src/swap.c \
				src/convert.c \
				src/get_program_size.c \
				\
				src/write/write_file.c \
				src/write/write_value.c \
				\
				src/op/op.c \
				src/op/linker.c \
				src/op/create_node.c \
				src/op/destroy_node.c \
				src/op/append_node.c \
				src/op/destroy_list.c \
				src/op/len_list.c \
				\
				src/instructions/check_param.c \
				src/instructions/check_type.c \
				src/instructions/check_param_ldi.c \
				src/instructions/check_param_lldi.c \
				src/instructions/check_param_sti.c \
				src/instructions/check_param_zjmp.c \
				src/instructions/check_param_fork.c \
				src/instructions/check_param_lfork.c \
				\
				src/parameter/create_parameter.c \
				src/parameter/destroy_parameter.c \
				src/parameter/get_parameter_type.c \
				\
				src/parser/parser.c \
				src/parser/extract_file.c \
				src/parser/count_index.c \
				src/parser/get_len.c \
				src/parser/get_mid.c \
				src/parser/calcul_bytecode.c \
				\
				src/parser/body/extract_body.c \
				src/parser/body/parse_body.c \
				src/parser/body/complete_offset.c \
				\
				src/parser/header/extract_header.c \
				src/parser/header/parse_header.c \
				\
				src/parser/label/existing_label.c \
				src/parser/label/is_label.c \
				src/parser/label/get_no_label.c \
				src/parser/label/parse_label.c \
				src/parser/label/create_label.c \
				src/parser/label/destroy_label.c \
				src/parser/label/connect_label.c \
				\
				src/array/is_in.c \
				src/array/split.c \
				src/array/trailing_space.c \
				src/array/double/array_to_line.c \
				src/array/double/free_array.c \
				src/array/double/len_array.c \
				src/array/double/print_array.c \
				src/array/double/alloc_array.c \
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
TEST_OBJ	=	$(TEST_SRC:.c=_test.o)

CC	=	gcc
INCLUDE	=	./include
SANITIZE	=	-fsanitize=address
CFLAGS	= -I$(INCLUDE) -Wall -Wextra -g3
LDFLAGS	=	-L../lib -lmy_printf -lmy_stdlib -lmy_string
COVERAGE	=	--coverage -lcriterion
EXE	=	asm
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
