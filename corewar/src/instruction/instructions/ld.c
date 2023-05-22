/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** ld.c
*/

#include "../../../include/prototype.h"

int instruction_lld(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value = 0;
    int pos = champion->PC + parameters[0]->value;
    int reg_nb = parameters[1]->value;

    switch (parameters[0]->type) {
        case Direct:
            value = parameters[0]->value;
            break;
        case Indirect:
            value = read_mem_value(app->memory, pos, 4);
            break;
        default:
            return 84;
    }
    champion->reg[reg_nb] = value;
    return 0;
}

int instruction_ld(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value = 0;
    int pos = champion->PC + parameters[0]->value % IDX_MOD;
    int reg_nb = parameters[1]->value;

    switch (parameters[0]->type) {
        case Direct:
            value = parameters[0]->value;
            break;
        case Indirect:
            value = read_mem_value(app->memory, pos, 4);
            break;
        default:
            return 84;
    }
    champion->reg[reg_nb] = value;
    return 0;
}
