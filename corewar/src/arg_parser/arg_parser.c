/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** arg_parser.c
*/

#include "../../include/prototype.h"

STATIC int dump_cycle(const char **av, int i, app_t *app)
{
    if (my_strcmp(av[i], "-dump") == 0) {
        dump_cycle_condition(app, av, i);
    }
    return 0;
}

int arg_parser(const int ac, const char **av, app_t *app)
{
    int i = 1;

    while (i < ac) {
        if (dump_cycle(av, i, app) == 84)
            return 84;
        i += 1;
    }
    return 0;
}
