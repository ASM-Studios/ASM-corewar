/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_malloc.c
*/

#include "../include/prototype.h"

void *my_malloc(size_t sz)
{
    int state = rand() % ((MAX_MALLOC + 1) - MIN_MALLOC) + MIN_MALLOC;
    void *ptr = NULL;

    if (state != 5)
        ptr = (void *)malloc(sz);
    return ptr;
}
