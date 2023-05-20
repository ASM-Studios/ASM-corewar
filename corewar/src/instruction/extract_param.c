/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** extract_param.c
*/

#include "../../include/prototype.h"

int need_bytecode(int instruction)
{
    if (instruction != 1 && instruction != 9 && instruction != 12 &&
        instruction != 15) {
        return 1;
    } else {
        return 0;
    }
}

parameter_t **extract_param(int bytecode)
{
    int i = 3;
    int copy = bytecode;
    parameter_t **parameters = (parameter_t **)alloc_array(5);

    while (i >= 0) {
        type_t type = extract_param_type(&copy);
        parameters[i] = create_parameter(type);
        i -= 1;
    }
    return parameters;
}

parameter_t **extract_param_no_cb(int instruction)
{
    parameter_t **parameters = (parameter_t **)alloc_array(5);

    switch (instruction) {
        case 9:
        case 12:
        case 15:
            parameters[0] = create_parameter(Index);
            break;
        case 1:
            parameters[0] = create_parameter(Direct);
            break;
    }
    return parameters;
}

parameter_t **extract_parameters(app_t *app, champion_t *champion,
    unsigned char instruction)
{
    unsigned char bytecode = 0;
    parameter_t **parameters = NULL;

    if (need_bytecode(instruction) == 1) {
        bytecode = app->memory[champion->PC];
        champion->PC += 1;
        parameters = extract_param(bytecode);
        return parameters;
    } else {
        parameters = extract_param_no_cb(instruction);
        return parameters;
    }

}

