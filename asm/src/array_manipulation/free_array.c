/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** free_array.c
*/

#include "../../include/prototype.h"

int free_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        free(array[i]);
        i += 1;
    }
    free(array);
    return 0;
}
