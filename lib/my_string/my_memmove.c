/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_memmove.c
*/

#include "string.h"

void *my_memmove(void *dest, const void *src, size_t t)
{
    int i = 0;
    unsigned char *new_dest = (unsigned char *)dest;
    unsigned char *new_src = (unsigned char *)src;

    while (i < t) {
        new_dest[i] = new_src[i];
        new_src[i] = 0;
        i += 1;
    }
    return dest;
}
