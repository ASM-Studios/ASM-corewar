##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

all:
		make -C ./asm
		make -C ./corewar

clean:
		make -C ./asm clean
		make -C ./corewar clean

fclean:	clean
		make -C ./asm fclean
		make -C ./corewar fclean

re:	fclean all

unit_tests:
			make -C ./asm unit_tests
			make -C ./corewar unit_tests

tests_run:	unit_tests
			make -C ./asm tests_run
			make -C ./corewar tests_run
