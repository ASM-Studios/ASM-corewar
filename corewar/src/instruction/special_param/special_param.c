/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** special_param.c
*/

#include "../../../include/prototype.h"

int special_param(parameter_t *parameter, unsigned char instruction,
    int index)
{
    switch (instruction) {
        case 9:
            special_param_zjmp(parameter, index); break;
        case 10:
            special_param_ldi(parameter, index); break;
        case 11:
            special_param_sti(parameter, index); break;
        case 12:
            special_param_fork(parameter, index); break;
        case 14:
            special_param_lldi(parameter, index); break;
        case 15:
            special_param_lfork(parameter, index); break;
        default:
            break;
    }
    return 0;
}
