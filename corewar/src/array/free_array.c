/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** free_array.c
*/

#include "../../include/prototype.h"

int free_ptr_array(void **array, void(free_element)(void *))
{
    int i = 0;

    while (array[i] != NULL) {
        free_element(array[i]);
        i += 1;
    }
    free(array);
    return 0;
}
