/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_param_lldi.c
*/

#include "../../include/prototype.h"

int check_param_lldi(parameter_t *parameter, char op, int param_index)
{
    if (param_index == 2 && parameter->type != Register)
        return 84;
    if ((param_index == 0 || param_index == 1) && parameter->type != Register)
        parameter->type = Index;
    return 0;
}
