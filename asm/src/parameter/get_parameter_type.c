/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_parameter_type.c
*/

#include "../../include/prototype.h"

type_t get_parameter_type(char *parameter)
{
    char first_character = parameter[0];

    switch (first_character) {
        case '%':
            return Direct;
        case 'r':
            return Register;
        default:
            return Indirect;
    }
}
