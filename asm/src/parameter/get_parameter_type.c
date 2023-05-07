/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_parameter_type.c
*/

#include "../../include/prototype.h"

args_type_t get_parameter_type(char *parameter)
{
    char first_character = parameter[0];

    switch (first_character) {
        case '%':
            return T_DIR;
        case 'r':
            return T_REG;
        default:
            return T_IND;
    }
}
