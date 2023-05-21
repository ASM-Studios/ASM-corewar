/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_parameter.c
*/

#include "../../include/prototype.h"

parameter_t *create_parameter(type_t type)
{
    parameter_t *parameter = malloc(sizeof(parameter_t));

    parameter->type = type;
    parameter->value = 0;
    return parameter;
}
