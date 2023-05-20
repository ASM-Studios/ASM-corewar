/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** zjmp.c
*/

#include "../../../include/prototype.h"

int special_param_zjmp(parameter_t *parameter, int index)
{
    if (index == 0)
        parameter->type = Index;
    return 0;
}
