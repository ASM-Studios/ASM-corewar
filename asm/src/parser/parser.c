/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.c
*/

#include "../../include/prototype.h"

int parser(app_t *app)
{
    size_t len = 0;
    char *line = 0;

    while (getline(&line, &len, app->input) != -1) {
        parse_line(app, line);
    }
    free(line);
    return 0;
}
