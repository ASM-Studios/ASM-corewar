/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_mid.c
*/

#include "../../include/prototype.h"

void *get_mid(char ***array)
{
    int i = 0;
    void *ptr = NULL;

    while (array[i] != NULL) {
        if (len_double_array(array[i]) == 0) {
            ptr = array[i];
            break;
        }
        i += 1;
    }
    return ptr;
}
