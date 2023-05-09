/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_param_lld.c
*/

#include "../../include/prototype.h"

int check_param_lld(parameter_t *parameter, char op, int param_index)
{
    if (param_index == 1 && parameter->type != Register)
        return 84;
    return 0;
}
