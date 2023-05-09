/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_memcpy.c
*/

#include "string.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    int i = 0;
    unsigned char *ptr_dest = (unsigned char *)dest;
    unsigned char *ptr_src = (unsigned char *)src;

    while (i < n) {
        ptr_dest[i] = ptr_src[i];
        i += 1;
    }
    return dest;
}
