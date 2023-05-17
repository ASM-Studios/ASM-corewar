/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** is_number.c
*/

#include "../../include/prototype.h"

int is_digit(const char character)
{
    if (character >= 48 && character <= 57) {
        return 1;
    } else {
        return 0;
    }
}

int is_number(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (is_digit(str[i]) == 0) {
            return 0;
        } else {
            i += 1;
        }
    }
    return 1;
}
