/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_parameter.c
*/

#include "../../include/prototype.h"

int destroy_parameter(parameter_t *parameter)
{
    free(parameter->arg);
    free(parameter);
    return 0;
}

int destroy_parameter_list(parameter_t **list)
{
    int i = 0;

    while (list[i] != NULL) {
        destroy_parameter(list[i]);
        i += 1;
    }
    free(list);
    return 0;
}
