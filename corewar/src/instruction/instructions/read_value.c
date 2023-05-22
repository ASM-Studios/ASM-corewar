/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** read_value.c
*/

#include "../../../include/prototype.h"

int read_mem_value_2(unsigned char *mem, int pos)
{
    int value = 0;

    value = (int)(mem[pos] << 24) | ((mem[pos + 1]) << 16);
    return value;
}

int read_mem_value_4(unsigned char *mem, int pos)
{
    int value = 0;

    value = (int)(mem[pos] << 24) | ((mem[pos + 1]) << 16) |
        ((mem[pos + 2]) << 8) | (mem[pos + 3]);
    return value;
}

int set_mem_value_4(unsigned char *mem, int pos, int value)
{
    mem[pos] = (value >> 24) & 0xFF;
    mem[pos + 1] = (value >> 16) & 0xFF;
    mem[pos + 2] = (value >> 8) & 0xFF;
    mem[pos + 3] = (value) & 0xFF;
    return 0;
}
