/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_len.c
*/

#include "../../include/prototype.h"

int get_len(void **array, void *start, void *end)
{
    int i = 0;
    int count = 0;

    while (array[i] != start) {
        i += 1;
    }
    while (array[i] != end) {
        i += 1;
        count += 1;
    }
    return count;
}
