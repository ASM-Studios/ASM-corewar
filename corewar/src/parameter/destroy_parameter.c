/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_parameter.c
*/

#include "../../include/prototype.h"

int destroy_parameter(parameter_t *parameter)
{
    free(parameter);
    return 0;
}
