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
    int prog_counter = champion->PC;
    int new_index = prog_counter + value % IDX_MOD;

    my_memcpy(&app->memory[new_index], &app->memory[champion->load_adress], champion->header.prog_size);

    return 84;
}
