/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_mid.c
*/

#include "../../include/prototype.h"

void *get_mid(char **array)
{
    int i = 0;
    void *ptr = NULL;

    while (array[i] != NULL) {
        if (my_strstr(array[i], ".comment") == -1 &&
            my_strstr(array[i], ".name") == -1) {
            return NULL;
        }
        if (my_strstr(array[i], ".comment") != -1) {
            ptr = array[i + 1];
            break;
        }
        i += 1;
    }
    return ptr;
}
