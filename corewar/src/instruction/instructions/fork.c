/*
** EPITECH PROJECT, 2023
** coreasm
** File description:
** fork
*/

#include "../../../include/prototype.h"

int instruction_fork(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value = parameters[0]->value;
    int prog_counter = champion->tmp_pc;
    int new_index = prog_counter + value % IDX_MOD;

    return 84;
}
