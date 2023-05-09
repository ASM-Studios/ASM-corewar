/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_parameter.c
*/

#include "../../include/prototype.h"

parameter_t *create_parameter(char *arg, type_t type)
{
    parameter_t *parameter = malloc(sizeof(parameter_t));

    parameter->arg = my_strdup(arg);
    parameter->type = type;
    parameter->is_index = 0;
    if (type == Direct) {
        parameter->value = my_atoi(&arg[1]);
    }
    if (type == Register) {
        parameter->value = my_atoi(&arg[1]);
    }
    if (type == Indirect) {
        parameter->value = my_atoi(arg);
    }
    if (type == Index) {
        parameter->value = my_atoi(arg);
    }
    return parameter;
}
