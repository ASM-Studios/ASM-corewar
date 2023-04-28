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
    char *line = NULL;

    while (getline(&line, &len, app->input) != -1) {
        if (parse_line(app, line) == 84)
            return 84;
    }
    free(line);
    return 0;
}
