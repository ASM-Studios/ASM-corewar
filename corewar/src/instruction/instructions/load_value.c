/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** load_value.c
*/

#include "../../../include/prototype.h"

STATIC int indirect_load_value(mem_find_t info, int idx_mod, int size)
{
    int index = 0;

    if (idx_mod == 1) {
        index = info.champion->PC + info.parameter->value % IDX_MOD;
        return read_mem(info.app->memory, index, size);
    } else {
        index = info.champion->PC + info.parameter->value % IDX_MOD;
        return read_mem(info.app->memory, index, size);
    }
}

int load_value(mem_find_t info, int idx_mod, int size)
{
    switch (info.parameter->type) {
        case Register:
            return info.champion->reg[info.parameter->value];
        case Direct:
            return info.parameter->value;
        case Indirect:
            return indirect_load_value(info, idx_mod, size);
        case Index:
            return info.parameter->value;
        default:
            return 0;
    }
}
