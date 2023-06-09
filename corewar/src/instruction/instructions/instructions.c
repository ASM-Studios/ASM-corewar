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

int execute_instruction_fork(app_t *app, champion_t *champion,
    parameter_t **parameters, int instruction)
{
    switch (instruction) {
        case 10:
            return instruction_ldi(app, champion, parameters);
        case 11:
            return instruction_sti(app, champion, parameters);
        case 14:
            return instruction_lldi(app, champion, parameters);
        case 12:
            return instruction_fork(app, champion, parameters);
        case 15:
            return instruction_lfork(app, champion, parameters);
        default:
            return 0;
    }
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
            return execute_instruction_fork(app, champion, parameters,
                instruction);
    }
}

int execute_instruction(app_t *app, champion_t *champion,
    parameter_t **parameters, int instruction)
{
    set_cd(champion, instruction);
    switch (instruction) {
        case 1:
            return instruction_live(app, champion, parameters);
        case 2:
            return instruction_ld(app, champion, parameters);
        case 3:
            return instruction_st(app, champion, parameters);
        case 13:
            return instruction_lld(app, champion, parameters);
        case 9:
            return instruction_zjmp(app, champion, parameters);
        case 16:
            return instruction_aff(app, champion, parameters);
        default:
            return execute_instruction_operations(app, champion, parameters,
                instruction);
    }
    return 0;
}
