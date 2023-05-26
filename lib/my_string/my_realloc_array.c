/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_realloc_array.c
*/

#include "string.h"
#include <stdlib.h>

static int get_len_array(void **array)
{
    int i = 0;

    while (array[i] != NULL) {
        i += 1;
    }
    return i;
}

void **my_realloc_array(void **array, void *element)
{
    int i = 0;
    int len = get_len_array(array);
    void **new_array = malloc(sizeof(void *) * (len + 2));

    while (array[i] != NULL) {
        new_array[i] = array[i];
        i += 1;
    }
    new_array[i] = element;
    new_array[i + 1] = NULL;
    free(array);
    return new_array;
}
