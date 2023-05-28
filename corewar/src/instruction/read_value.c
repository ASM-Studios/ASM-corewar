/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** read_value.c
*/

#include "../../include/prototype.h"

STATIC int read_unique_value_2(app_t *app, champion_t *champion,
    parameter_t *parameter)
{
    int i = champion->PC;
    mem_case_t *mem = app->memory;

    switch (parameter->type) {
        case Register:
            parameter->value = (char)(mem[i % MEM_SIZE].value);
            champion->PC += 1;
            break;
        case Index:
            parameter->value = (short)((mem[i % MEM_SIZE].value) << 8) |
                (mem[(i + 1) % MEM_SIZE].value);
            champion->PC += 2;
            break;
        default:
            break;
    }
    return 0;
}

STATIC int read_unique_value(app_t *app, champion_t *champion,
    parameter_t *parameter)
{
    int i = champion->PC;
    mem_case_t *mem = app->memory;

    switch (parameter->type) {
        case Direct:
            parameter->value = (int)(mem[i % MEM_SIZE].value << 24) |
                ((mem[(i + 1) % MEM_SIZE].value) << 16) |
                ((mem[(i + 2) % MEM_SIZE].value) << 8) |
                (mem[(i + 3) % MEM_SIZE].value);
            champion->PC += 4;
            return 0;
        case Indirect:
            parameter->value = (short)((mem[i % MEM_SIZE].value) << 8) |
                (mem[(i + 1) % MEM_SIZE].value);
            champion->PC += 2;
            return 0;
        default:
            read_unique_value_2(app, champion, parameter);
            return 0;
    }
}

int read_value(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int i = 0;

    while (parameters[i] != NULL) {
        read_unique_value(app, champion, parameters[i]);
        i += 1;
    }
    return 0;
}
