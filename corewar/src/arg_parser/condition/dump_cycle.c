/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** dump_cycle.c
*/

#include "../../../include/prototype.h"

int dump_cycle_condition(app_t *app, const char **av, int i)
{
    if (av[i + 1] == NULL) {
        my_printf("-dump: invalid option.\n");
        return 84;
    }
    if (is_number(av[i + 1]) == 0) {
        my_printf("-dump: invalid option.\n");
        return 84;
    }
    app->dump_cycle = my_atoi(av[i + 1]);
    return 0;
}
