/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** len_array.c
*/

#include "../../include/prototype.h"

int len_array(char **array)
{
    int i = 0;

    while (array[i] != NULL) {
        i += 1;
    }
    return i;
}
