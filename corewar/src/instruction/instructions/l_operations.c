/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** l_operations.c
*/

#include "../../../include/prototype.h"

int instruction_xor(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value_1 = load_value((mem_find_t){app, parameters[0], champion}, 1, 4);
    int value_2 = load_value((mem_find_t){app, parameters[1], champion}, 1, 4);
    int reg_3 = parameters[2]->value;

    champion->reg[reg_3] = value_1 ^ value_2;
    modify_carry(champion, champion->reg[reg_3]);
    return 0;
}

int instruction_or(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value_1 = load_value((mem_find_t){app, parameters[0], champion}, 1, 4);
    int value_2 = load_value((mem_find_t){app, parameters[1], champion}, 1, 4);
    int reg_3 = parameters[2]->value;

    champion->reg[reg_3] = value_1 | value_2;
    modify_carry(champion, champion->reg[reg_3]);
    return 0;
}

int instruction_and(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value_1 = load_value((mem_find_t){app, parameters[0], champion}, 1, 4);
    int value_2 = load_value((mem_find_t){app, parameters[1], champion}, 1, 4);
    int reg_3 = parameters[2]->value;

    champion->reg[reg_3] = value_1 & value_2;
    modify_carry(champion, champion->reg[reg_3]);
    return 0;
}
