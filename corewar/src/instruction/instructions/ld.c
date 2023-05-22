/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** ld.c
*/

#include "../../../include/prototype.h"

int instruction_ld(app_t *app, champion_t *champion, parameter_t **parameter)
{
    int value = 0;
    int pos = champion->PC + parameter[0]->value % IDX_MOD;
    int reg_nb = parameter[1]->value;

    switch (parameter[0]->type) {
        case Direct:
            value = parameter[0]->value;
            break;
        case Indirect:
            value = read_mem_value(app, pos, 4);
            break;
        default:
            return 84;
    }
    champion->reg[reg_nb] = value;
    return 0;
}
