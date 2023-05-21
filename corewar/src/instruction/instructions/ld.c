/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** ld.c
*/

#include "../../../include/prototype.h"

int instruction_ld(app_t *app, champion_t *champion, parameter_t **parameter)
{
    int value = parameter[0]->value;
    int reg = parameter[1]->value;

    champion->reg[reg] = value;
    return 0;
}
