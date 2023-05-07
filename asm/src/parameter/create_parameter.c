/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_parameter.c
*/

#include "../../include/prototype.h"

parameter_t *create_parameter(char *arg, args_type_t type)
{
    parameter_t *parameter = malloc(sizeof(parameter_t));
    parameter->arg = my_strdup(arg);
    parameter->type = type;
    return parameter;
}

parameter_t **create_parameter_list(void)
{
    int i = 0;
    parameter_t **list = malloc(sizeof(parameter_t) * 4);

    while (i < 4) {
        list[i] = NULL;
        i += 1;
    }
    return list;
}
