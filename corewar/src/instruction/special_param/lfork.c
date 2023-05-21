/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** lfork.c
*/

#include "../../../include/prototype.h"

int special_param_lfork(parameter_t *parameter, int index)
{
    if (index == 0)
        parameter->type = Index;
    return 0;
}
