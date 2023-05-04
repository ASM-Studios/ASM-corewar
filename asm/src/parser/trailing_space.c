/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** trailing_space.c
*/

#include "../../include/prototype.h"

STATIC int remove_end_space(char *line)
{
    int len = my_strlen(line);

    if (line[len - 1] == '\n')
        line[len - 1] = '\0';
    return 0;
}

int remove_trailing_space(char *line)
{
    if (my_strlen(line) == 0)
        return 0;
    remove_end_space(line);
    return 0;
}
