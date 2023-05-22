/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instructions.c
*/

#include "../../../include/prototype.h"

STATIC int set_cd(champion_t *champion, int instruction)
{
    op_t op = op_table[instruction - 1];

    champion->cd = op.nbr_cycles;
    return 0;
}

int execute_instruction_operations(app_t *app, champion_t *champion,
    parameter_t **parameters, int instruction)
{
    switch (instruction) {
        case 4:
            return instruction_add(app, champion, parameters);
        case 5:
            return instruction_sub(app, champion, parameters);
        case 6:
            return instruction_and(app, champion, parameters);
        case 7:
            return instruction_or(app, champion, parameters);
        case 8:
            return instruction_xor(app, champion, parameters);
        default:
            return 0;
    }
}

int execute_instruction(app_t *app, champion_t *champion,
    parameter_t **parameters, int instruction)
{
    set_cd(champion, instruction);
    switch (instruction) {
        case 2:
            return instruction_ld(app, champion, parameters);
        case 3:
            return instruction_st(app, champion, parameters);
        case 13:
            return instruction_lld(app, champion, parameters);
        case 9:
            return instruction_zjmp(app, champion, parameters);
        default:
            return execute_instruction_operations(app, champion, parameters,
                instruction);
    }
    return 0;
}
