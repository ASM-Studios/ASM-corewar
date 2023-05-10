/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_param_aff.c
*/

#include "../../include/prototype.h"

int check_param_aff(parameter_t *parameter, char op, int param_index)
{
    (void)parameter;
    (void)op;
    (void)param_index;
    if (param_index == 0 && parameter->type != Register)
        return 84;
    return 0;
}
