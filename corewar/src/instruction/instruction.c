/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instruction.c
*/

#include "../../include/prototype.h"

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
