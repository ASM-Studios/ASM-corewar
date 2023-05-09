/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_param.c
*/

#include "../../include/prototype.h"

STATIC int check_param_bop_switch(parameter_t *parameter, char op,
    int param_index)
{
    int status = 0;

    switch (op) {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            status = check_param_bop(parameter, op, param_index);
            break;
    }
    return status;
}

STATIC int check_param_stx(parameter_t *parameter, char op, int param_index)
{
    int status = 0;

    switch (op) {
        case 3:
            status = check_param_st(parameter, op, param_index);
            break;
        case 11:
            status = check_param_sti(parameter, op, param_index);
            break;
        default:
            status = check_param_bop_switch(parameter, op, param_index);
            break;
    }
    return status;
}

STATIC int check_param_ldx(parameter_t *parameter, char op, int param_index)
{
    int status = 0;
    switch (op) {
        case 2:
            status = check_param_ld(parameter, op, param_index);
            break;
        case 10:
            status = check_param_ldi(parameter, op, param_index);
            break;
        case 13:
            status = check_param_lld(parameter, op, param_index);
            break;
        case 14:
            status = check_param_lldi(parameter, op, param_index);
            break;
        default:
            status = check_param_stx(parameter, op, param_index);
            break;
    }
    return status;
}

int check_param(parameter_t *parameter, char op, int param_index)
{
    int status = 0;

    switch (op) {
        case 10:
            status = check_param_aff(parameter, op, param_index);
            break;
        case 12:
            status = check_param_fork(parameter, op, param_index);
            break;
        case 15:
            status = check_param_lfork(parameter, op, param_index);
            break;
        case 9:
            status = check_param_zjmp(parameter, op, param_index);
            break;
        default:
            status = check_param_ldx(parameter, op, param_index);
            break;
    }
    return status;
}
