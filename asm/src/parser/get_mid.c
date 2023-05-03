/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_mid.c
*/

#include "../../include/prototype.h"

int free_triple_array(char ***array)
{
    int i = 0;

    while (array[i] != NULL) {
        free_array(array[i]);
        i += 1;
    }
    free(array);
    return 0;
}

void *get_mid(char ***array)
{
    int i = 0;
    void *ptr = NULL;

    while (array[i] != NULL) {
        if (len_array(array[i]) == 0) {
            ptr = array[i];
            break;
        }
        i += 1;
    }
    return ptr;
}
