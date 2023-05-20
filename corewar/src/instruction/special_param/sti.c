/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** sti.c
*/

#include "../../../include/prototype.h"

int special_param_sti(parameter_t *parameter, int index)
{
    if (index == 1 && parameter->type != Register)
        parameter->type = Index;
    if (index == 2 && parameter->type != Register)
        parameter->type = Index;
    return 0;
}
