/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** alloc_array.c
*/

#include "../../include/prototype.h"

void **alloc_array(int no_line)
{
    int i = 0;
    void **array = malloc(8 * (no_line));

    while (i < no_line) {
        array[i] = NULL;
        i += 1;
    }
    return array;
}
