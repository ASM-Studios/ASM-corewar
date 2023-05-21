/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_type.c
*/

#include "../../include/prototype.h"

int check_type(parameter_t *parameter, op_t op, int param_index)
{
    if ((parameter->type & op.type[param_index]) == 0)
        return 84;
    else
        return 0;
}
