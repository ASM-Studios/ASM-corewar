/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** fork.c
*/

#include "../../../include/prototype.h"

int special_param_fork(parameter_t *parameter, int index)
{
    if (index == 0)
        parameter->type = Index;
    return 0;
}
