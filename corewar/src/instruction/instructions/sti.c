/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** sti.c
*/

#include "../../../include/prototype.h"

int instruction_sti(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value = champion->reg[parameters[0]->value];
    int index_1 = load_value((mem_find_t){app, parameters[1], champion}, 1, 2);
    int index_2 = 0;
    int index = 0;

    switch (parameters[2]->type) {
        case Register:
            index_2 = champion->reg[parameters[2]->value];
            break;
        case Direct:
            index_2 = champion->reg[parameters[2]->value];
            break;
        default:
            break;
    }
    index = champion->tmp_pc + ((index_1 + index_2) % IDX_MOD);
    set_mem_value_4(app->memory, index, value);
    return 0;
}
