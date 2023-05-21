/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instructions.c
*/

#include "../../../include/prototype.h"

int execute_instruction(app_t *app, champion_t *champion,
    parameter_t **parameters, int instruction)
{
    switch (instruction) {
        case 2:
            return instruction_ld(app, champion, parameters);
        default:
            return 0;
    }
    return 0;
}
