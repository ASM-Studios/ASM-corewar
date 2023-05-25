/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instruction.c
*/

#include "../../include/prototype.h"

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

int detect_index(parameter_t **parameters, unsigned char instruction)
{
    int i = 0;

    while (parameters[i] != NULL) {
        special_param(parameters[i], instruction, i);
        i += 1;
    }
    return 0;
}

STATIC int set_tmp_pc(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        app->champions[i]->tmp_pc = app->champions[i]->PC;
        i += 1;
    }
    return 0;
}

int instruction(app_t *app, champion_t *champion)
{
    unsigned char instruction = 0;
    parameter_t **parameters = NULL;

    set_tmp_pc(app);
    instruction = app->memory[champion->PC];
    printf("%s execute %x at PC: %d (MEMORY: %X)\n", champion->header.prog_name, instruction, champion->PC, app->memory[champion->PC]);
    champion->PC += 1;
    parameters = extract_parameters(app, champion, instruction);
    detect_index(parameters, instruction);
    read_value(app, champion, parameters);
    execute_instruction(app, champion, parameters, instruction);
    if (parameters != NULL)
        free_ptr_array((void **)parameters, &destroy_parameter);
    return 0;
}

#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
