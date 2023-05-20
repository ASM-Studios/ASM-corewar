/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instruction.c
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

STATIC parameter_t **extract_parameters(app_t *app, champion_t *champion,
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
        return parameters;
    }

}

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

int instruction(app_t *app, champion_t *champion)
{
    unsigned char instruction = 0;
    parameter_t **parameters = NULL;

    instruction = app->memory[champion->PC];
    champion->PC += 1;
    parameters = extract_parameters(app, champion, instruction);
    if (parameters != NULL)
        free_ptr_array((void **)parameters, &destroy_parameter);
    return 0;
}

#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
