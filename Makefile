##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

all:
		@make -s -C ./lib
		@make --no-print-directory -C ./asm
		@make --no-print-directory -C ./corewar

clean:
		@make -s -C ./lib clean
		@make --no-print-directory -C ./asm clean
		@make --no-print-directory -C ./corewar clean
		$(shell find * -name "*.cor" -delete)

fclean:	clean
		@make -s -C ./lib fclean
		@make --no-print-directory -C ./asm fclean
		@make --no-print-directory -C ./corewar fclean

re:	fclean all

unit_tests:
			@make -s -C ./lib
			@make --no-print-directory -C ./asm unit_tests
			@make --no-print-directory -C ./corewar unit_tests

tests_run:	unit_tests
			@make --no-print-directory -C ./asm tests_run
			@make --no-print-directory -C ./corewar tests_run

clib:
		@make --no-print-directory -C ./lib

export_man:
			sudo cp ./man/asm.1 /usr/share/man/man1/
			sudo cp ./man/corewar.1 /usr/share/man/man1/
			sudo gzip /usr/share/man/man1/asm.1
			sudo gzip /usr/share/man/man1/corewar.1

delete_man:
			sudo rm /usr/share/man/man1/asm.1.gz
			sudo rm /usr/share/man/man1/corewar.1.gz
