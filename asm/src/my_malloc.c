/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_malloc.c
*/

#include "../include/prototype.h"

#define MAX 10
#define MIN 0

void *my_malloc(size_t sz)
{
    int state = rand() % ((MAX + 1) - MIN) + MIN;
    void *ptr = NULL;

    if (state != 5)
        ptr = (void *)malloc(sz);
    return ptr;
}
