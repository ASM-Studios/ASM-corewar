/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** read_value.c
*/

#include "../../../include/prototype.h"

int read_mem_value(unsigned char *mem, int pos, int size)
{
    int value = 0;

    value = (int)(mem[pos] << 24) | ((mem[pos + 1]) << 16) |
        ((mem[pos + 2]) << 8) | (mem[pos + 3]);
    return value;
}
