/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_line.c
*/

#include "../../include/prototype.h"

STATIC int parser_main_action(app_t *app, char *line)
{
    char **array = split(line, ' ');
    header(app, array, line);
    comment(app, line);
    print_array(array);
    printf("\n");

    free_array(array);
    return 0;
}

int parse_line(app_t *app, char *line)
{
    remove_trailing_space(line);
    if (my_strlen(line) == 0)
        return 0;
    parser_main_action(app, line);
    return 0;
}
