/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** sti.c
*/

#include "../../../include/prototype.h"

int instruction_sti(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int reg = parameters[0]->value;
    int value_1 = load_value((mem_find_t){app, parameters[1], champion}, 1, 2);
    int value_2 = load_value((mem_find_t){app, parameters[2], champion}, 1, 2);
    int index = champion->tmp_pc + ((value_1 + value_2) % IDX_MOD);

    set_mem_value_4(app->memory, index, champion->reg[reg], champion);
    return 0;
}
