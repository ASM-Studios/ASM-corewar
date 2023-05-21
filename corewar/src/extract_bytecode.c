/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** extract_bytecode.c
*/

#include "../include/prototype.h"

int extract_param_type(int *number)
{
    unsigned int param_type = 0;
    unsigned int mask = (1 << 2) - 1;

    param_type = *number & mask;
    *number = *number >> 2;
    return param_type;
}
