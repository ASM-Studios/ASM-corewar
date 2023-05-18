/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** dump_cycle.c
*/

#include "../../../include/prototype.h"

int prog_number_condition(app_t *app, const char **av, int i,
    champion_t *champion)
{
    if (av[i + 1] == NULL) {
        my_printf("-n: invalid option.");
        return 84;
    }
    if (is_number(av[i + 1]) == 0) {
        my_printf("-n: invalid option.");
        return 84;
    }
    champion->prog_number = my_atoi(av[i + 1]);
    if (champion->prog_number < 1 || champion->prog_number > 4)
        return 84;
    return 0;
}
