/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** extract_bytecode.c
*/

#include "../include/prototype.h"

STATIC int extract_param(int *number)
{
    unsigned int param_type = 0;
    unsigned int mask = (1 << 2) - 1;

    param_type = *number & mask;
    *number = *number >> 2;
    return param_type;
}

int extract_bytecode(int bytecode, int param_index)
{
    int number = 0b11111111;
    int i = 0;

    while (i < 4) {
        my_printf("%d\n", extract_param(&number));
        i += 1;
    }
    return 0;
}