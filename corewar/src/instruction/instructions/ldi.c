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
    int value_2 = 0;
    int reg = parameters[2]->value;
    int res_value = 0;
    int index = 0;

    switch(parameters[1]->type) {
        case Direct:
            value_2 = parameters[1]->value;
            break;
        case Register:
            value_2 = champion->reg[parameters[1]->value];
            break;
        default:
            break;
    }
    index = champion->tmp_pc + ((value_1 + value_2) % IDX_MOD);
    res_value = read_mem(app->memory, index, 4);
    champion->reg[reg] = res_value;
    return 0;
}
