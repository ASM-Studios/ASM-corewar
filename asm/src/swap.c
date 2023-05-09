/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** swap.c
*/

#include "../include/prototype.h"

int swap(int *start, int *end, int *is_neg)
{
    if (*end < *start) {
        *is_neg = 1;
        *start ^= *end;
        *end ^= *start;
        *start ^= *end;
    }
    return 0;
}
