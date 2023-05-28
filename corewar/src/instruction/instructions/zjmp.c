/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** zjmp.c
*/

#include "../../../include/prototype.h"

int instruction_zjmp(app_t *app, champion_t *champion, parameter_t **parameters)
{
    if (champion->carry == 1)
        champion->PC = champion->tmp_pc + parameters[0]->value % IDX_MOD;
    int value = parameters[0]->value;
    return 0;
}
