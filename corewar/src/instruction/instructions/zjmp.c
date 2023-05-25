/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** zjmp.c
*/

#include "../../../include/prototype.h"

int instruction_zjmp(app_t *app, champion_t *champion, parameter_t **parameters)
{
    printf("%d\n", champion->PC);
    champion->PC = champion->PC + parameters[0]->value % IDX_MOD;
    printf("%d\n", champion->PC);
    return 0;
}
