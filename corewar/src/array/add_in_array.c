/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** realloc_array.c
*/

#include "../../include/prototype.h"

void **add_in_array(void **array, void *memb)
{
    int index = 0;
    int len = len_array(array);
    void **new_array = malloc(sizeof(void *) * (len + 2));

    while (index < len) {
        new_array[index] = array[index];
        index += 1;
    }
    new_array[index] = memb;
    new_array[index + 1] = NULL;
    return new_array;
}
