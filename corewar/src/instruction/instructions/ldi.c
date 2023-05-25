/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** ldi.c
*/

#include "../../../include/prototype.h"

int instruction_ldi(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int value_1 = load_value((mem_find_t){app, parameters[0], champion}, 1, 2);
    int value_2 = load_value((mem_find_t){app, parameters[1], champion}, 1, 2);
    int reg = parameters[2]->value;
    int index = champion->tmp_pc + ((value_1 + value_2) % IDX_MOD);
    int res_value = read_mem(app->memory, index, 4);

    champion->reg[reg] = res_value;
    return 0;
}
