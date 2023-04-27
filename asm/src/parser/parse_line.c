/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_line.c
*/

#include "../../include/prototype.h"

int parse_line(app_t *app, char *line)
{
    remove_trailing_space(line);
    if (my_strlen(line) == 0)
        return 0;
    header(app, line);
    comment(app, line);
    printf(">%s<\n", line);
    return 0;
}
