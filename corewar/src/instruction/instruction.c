/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instruction.c
*/

#include "../../include/prototype.h"

#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

int display_type(type_t type)
{
    switch(type) {
        case Direct:
            printf("Direct\n"); break;
        case Indirect:
            printf("Indirect\n"); break;
        case Index:
            printf("Index\n"); break;
        case Register:
            printf("Register\n"); break;
        default:
            break;
    }
    return 0;
}

int detect_index(parameter_t **parameters, unsigned char instruction)
{
    int i = 0;

    while (parameters[i] != NULL) {
        special_param(parameters[i], instruction, i);
        i += 1;
    }
    return 0;
}

int instruction(app_t *app, champion_t *champion)
{
    unsigned char instruction = 0;
    parameter_t **parameters = NULL;

    instruction = app->memory[champion->PC];
    champion->PC += 1;
    printf("Instruction: %X\n", instruction);
    parameters = extract_parameters(app, champion, instruction);
    detect_index(parameters, instruction);
    read_value(app, champion, parameters);
    for (int i = 0; parameters[i] != NULL; i += 1)
        display_type(parameters[i]->type);
    printf("\n");
    if (parameters != NULL)
        free_ptr_array((void **)parameters, &destroy_parameter);
    return 0;
}

#pragma GCC diagnostic warning "-Wincompatible-pointer-types"
