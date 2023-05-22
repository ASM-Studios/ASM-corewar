/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** load_value.c
*/

#include "../../../include/prototype.h"

STATIC int indirect_load_value(app_t *app, champion_t *champion,
    parameter_t *parameter, int idx_mod)
{
    if (idx_mod == 1) {
        return app->memory[champion->PC + parameter->value % IDX_MOD];
    } else {
        return app->memory[champion->PC + parameter->value];
    }
}

int load_value(app_t *app, champion_t *champion, parameter_t *parameter,
    int idx_mod)
{
    switch (parameter->type) {
        case Register:
            return champion->reg[parameter->value];
        case Direct:
            return parameter->value;
        case Indirect:
            return indirect_load_value(app, champion, parameter, idx_mod);
        case Index:
            return parameter->value;
        default:
            return 0;
    }
}
