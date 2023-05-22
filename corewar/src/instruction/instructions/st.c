/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** st.c
*/

#include "../../../include/prototype.h"

int instruction_st(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int reg_src = parameters[0]->value;
    int reg_dest = 0;
    int value = champion->reg[reg_src];

    switch (parameters[1]->type) {
        case Register:
            reg_dest = parameters[1]->value;
            champion->reg[reg_dest] = value;
            break;
        case Indirect:
            break;
        default:
            return 84;
    }
    return 0;
}
