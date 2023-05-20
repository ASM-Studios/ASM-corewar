/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** extract_param.c
*/

#include "../../include/prototype.h"

parameter_t **extract_param(int bytecode)
{
    int i = 3;
    int copy = bytecode;
    parameter_t **parameters = (parameter_t **)alloc_array(5);

    while (i >= 0) {
        int type = extract_param_type(&copy);
        parameters[i] = create_parameter(type);
        i -= 1;
    }
    return parameters;
}
