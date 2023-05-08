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

int check_param(parameter_t *parameter, char op, int param_index)
{
    int status = 0;

    switch (op) {
        case 2:
            status = check_param_ld(parameter, op, param_index);
            break;
        case 9:
            status = check_param_zjmp(parameter, op, param_index);
            break;
        default:
            status = check_param_bop_switch(parameter, op, param_index);
            break;
    }
    return status;
}
