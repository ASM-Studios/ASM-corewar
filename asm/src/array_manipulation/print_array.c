/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** print_array.c
*/

#include "../../include/prototype.h"

int print_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        my_printf("%s\n", array[i]);
        i += 1;
    }
    return 0;
}
