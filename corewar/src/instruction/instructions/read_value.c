/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** read_value.c
*/

#include "../../../include/prototype.h"

int read_mem_value(app_t *app, int pos, int size)
{
    int value = 0;
    unsigned char *memory = app->memory;

    value = (int)(memory[pos] << 24) | ((memory[pos + 1]) << 16) |
        ((memory[pos + 2]) << 8) | (memory[pos + 3]);
    return value;
}
