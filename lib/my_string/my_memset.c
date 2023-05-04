/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** memset.c
*/

#include "string.h"

void *my_memset(void *ptr, int c, size_t n)
{
    int i = 0;
    unsigned char *str = (unsigned char *)ptr;

    while (i != n) {
        str[i] = 0;
        i += 1;
    }
    return ptr;
}
