/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** print_array.c
*/

#include "../../../include/prototype.h"

int print_triple_array(char ***array)
{
    int i = 0;

    if (array == NULL)
        return 0;
    while (array[i] != NULL) {
        print_double_array(array[i]);
        i += 1;
    }
    return 0;
}
