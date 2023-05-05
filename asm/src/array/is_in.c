/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** is_in.c
*/

#include "../../include/prototype.h"

int is_in(const char character, const char *separator)
{
    int i = 0;

    while (separator[i] != '\0') {
        if (separator[i] == character) {
            return 1;
        }
        i += 1;
    }
    return 0;
}
