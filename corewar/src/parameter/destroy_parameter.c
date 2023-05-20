/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_parameter.c
*/

#include "../../include/prototype.h"

void destroy_parameter(parameter_t *parameter)
{
    free(parameter);
}
