/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** operation.c
*/

#include "../../../include/prototype.h"

int instruction_sub(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int reg_1 = parameters[0]->value;
    int reg_2 = parameters[1]->value;
    int reg_3 = parameters[2]->value;
    int value_1 = champion->reg[reg_1];
    int value_2 = champion->reg[reg_2];

    champion->reg[reg_3] = value_1 - value_2;
    return 0;
}

int instruction_add(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int reg_1 = parameters[0]->value;
    int reg_2 = parameters[1]->value;
    int reg_3 = parameters[2]->value;
    int value_1 = champion->reg[reg_1];
    int value_2 = champion->reg[reg_2];

    champion->reg[reg_3] = value_1 + value_2;
    return 0;
}
