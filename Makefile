##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

all:
		make -C ./lib
		make -C ./asm
		make -C ./corewar

clean:
		make -C ./lib clean
		make -C ./asm clean
		make -C ./corewar clean

fclean:	clean
		make -C ./lib fclean
		make -C ./asm fclean
		make -C ./corewar fclean
		$(shell find * -name "*.cor" -delete)

re:	fclean all

unit_tests:
			make -C ./lib
			make -C ./asm unit_tests
			make -C ./corewar unit_tests

tests_run:	unit_tests
			make -C ./asm tests_run
			make -C ./corewar tests_run

clib:
		make -C ./lib

export_man:
			sudo cp ./man/asm.1 /usr/share/man/man1/
			sudo cp ./man/corewar.1 /usr/share/man/man1/
			sudo gzip /usr/share/man/man1/asm.1
			sudo gzip /usr/share/man/man1/corewar.1

delete_man:
			sudo rm /usr/share/man/man1/asm.1.gz
			sudo rm /usr/share/man/man1/corewar.1.gz
