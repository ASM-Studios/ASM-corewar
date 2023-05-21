/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** ldi.c
*/

#include "../../../include/prototype.h"

int special_param_ldi(parameter_t *parameter, int index)
{
    if (index == 0 && parameter->type != Register)
        parameter->type = Index;
    if (index == 1 && parameter->type != Register)
        parameter->type = Index;
    return 0;
}
