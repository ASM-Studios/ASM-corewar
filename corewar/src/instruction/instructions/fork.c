/*
** EPITECH PROJECT, 2023
** coreasm
** File description:
** fork
*/

#include "../../../include/prototype.h"

int realloc_array_fork(app_t *app, champion_t *champion, int index)
{
    champion_t *new_champion = create_champion();
    memcpy(new_champion, champion, sizeof(champion_t));
    app->champions = (champion_t **)my_realloc_array((void **)app->champions,
        (void *)new_champion);
    new_champion->PC = index;
    return 0;
}

int instruction_lfork(app_t *app, champion_t *champion,
    parameter_t **parameters)
{
    int value = parameters[0]->value;
    int prog_counter = champion->tmp_pc;
    int new_index = prog_counter + value % IDX_MOD;

    realloc_array_fork(app, champion, new_index);
    return 84;
}

int instruction_fork(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value = parameters[0]->value;
    int prog_counter = champion->tmp_pc;
    int new_index = prog_counter + value % IDX_MOD;

    realloc_array_fork(app, champion, new_index);
    return 84;
}
