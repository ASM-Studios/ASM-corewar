/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_line.c
*/

#include "../../include/prototype.h"

static int parser_main_action(app_t *app, char *line)
{
    header(app, line);
    comment(app, line);
    return 0;
}

int parse_line(app_t *app, char *line)
{
    remove_trailing_space(line);
    if (my_strlen(line) == 0)
        return 0;
    parser_main_action(app, line);
    printf(">%s<\n", line);
    return 0;
}
