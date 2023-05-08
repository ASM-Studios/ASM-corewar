/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_param_add.c
*/

#include "../../include/prototype.h"

int check_param_bop(parameter_t *parameter, char op, int param_index)
{
    if (param_index == 3) {
        return 0;
    }
    if (parameter->type != Register) {
        return 84;
    }
    return 0;
}
