/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** trailing_space.c
*/

#include "../../include/prototype.h"

int remove_trailing_space(char *line)
{
    int len = my_strlen(line) - 1;

    if (line[len] == '\n')
        line[len] = '\0';
    return 0;
}
