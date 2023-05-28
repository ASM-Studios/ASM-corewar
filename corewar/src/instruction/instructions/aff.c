/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** aff.c
*/

#include "../../../include/prototype.h"

int instruction_aff(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value = champion->reg[parameters[0]->value];

    if (app->graphic == 0)
        my_printf("%c", value);
    return 0;
}
