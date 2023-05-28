/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** read_value.c
*/

#include "../../../include/prototype.h"

int read_mem(mem_case_t *mem, int pos, int size)
{
    if (pos < 0)
        pos = MEM_SIZE - pos;
    switch (size) {
        case 1:
            return (int)(mem[pos % MEM_SIZE].value);
        case 2:
            return (int)(mem[pos % MEM_SIZE].value << 24) | ((mem[(pos + 1) %
                MEM_SIZE].value) << 16);
        case 4:
            return (int)(mem[pos % MEM_SIZE].value << 24) | ((mem[(pos + 1) %
                MEM_SIZE].value) << 16) |
                ((mem[(pos + 2) % MEM_SIZE].value) << 8) |
                (mem[(pos + 3) % MEM_SIZE].value);
        default:
            return 0;
    }
}

int set_mem_value_4(mem_case_t *mem, int pos, int value, champion_t *champion)
{
    if (pos < 0)
        pos = MEM_SIZE - pos;
    mem[pos % MEM_SIZE].value = (value >> 24) & 0xFF;
    mem[(pos + 1) % MEM_SIZE].value = (value >> 16) & 0xFF;
    mem[(pos + 2) % MEM_SIZE].value = (value >> 8) & 0xFF;
    mem[(pos + 3) % MEM_SIZE].value = (value) & 0xFF;
    mem[pos % MEM_SIZE].champion = champion;
    mem[(pos + 1) % MEM_SIZE].champion = champion;
    mem[(pos + 2) % MEM_SIZE].champion = champion;
    mem[(pos + 3) % MEM_SIZE].champion = champion;
    return 0;
}
