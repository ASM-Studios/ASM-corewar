/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_param.c
*/

#include "../../include/prototype.h"

STATIC int check_param_stx(parameter_t *parameter, char op, int param_index)
{
    int status = 0;

    switch (op) {
        case 11:
            status = check_param_sti(parameter, op, param_index);
            break;
        default:
            break;
    }
    return status;
}

STATIC int check_param_ldx(parameter_t *parameter, char op, int param_index)
{
    int status = 0;

    switch (op) {
        case 10:
            status = check_param_ldi(parameter, op, param_index);
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

int check_param(parameter_t *parameter, op_t op, int param_index)
{
    int status = 0;

    if (check_type(parameter, op, param_index) == 84)
        return 84;
    switch (op.code) {
        case 12:
            status = check_param_fork(parameter, op.code, param_index);
            break;
        case 15:
            status = check_param_lfork(parameter, op.code, param_index);
            break;
        case 9:
            status = check_param_zjmp(parameter, op.code, param_index);
            break;
        default:
            status = check_param_ldx(parameter, op.code, param_index);
            break;
    }
    return status;
}
