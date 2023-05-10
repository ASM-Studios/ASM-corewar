/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** trailing_space.c
*/

#include "../../include/prototype.h"

STATIC int shift_char_array(char *line, int index)
{
    while (line[index] != '\0') {
        line[index] = line[index + 1];
        index += 1;
    }
    return 0;
}

STATIC int remove_start_space(char *line)
{
    while (line[0] == ' ' || line[0] == '\t') {
        shift_char_array(line, 0);
    }
    return 0;
}

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
    remove_start_space(line);
    return 0;
}
