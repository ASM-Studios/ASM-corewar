/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** zjmp.c
*/

#include "../../../include/prototype.h"

int instruction_zjmp(app_t *app, champion_t *champion, parameter_t **parameters)
{
    my_printf("Champion: %s\n", champion->header.prog_name);
    my_printf("Before: %d\n", champion->PC);
    champion->PC += parameters[0]->value % IDX_MOD;
    my_printf("After: %d\n\n", champion->PC);
    return 0;
}
