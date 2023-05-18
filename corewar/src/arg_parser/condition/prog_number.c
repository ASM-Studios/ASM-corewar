/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** dump_cycle.c
*/

#include "../../../include/prototype.h"

int prog_number_condition(const char **av, int i, champion_t *champion)
{
    if (champion->prog_number != -1) {
        my_printf("-a: invalid option.\n");
        return 84;
    }
    if (av[i + 1] == NULL) {
        my_printf("-n: invalid option.\n");
        return 84;
    }
    if (is_number(av[i + 1]) == 0) {
        my_printf("-n: invalid option.\n");
        return 84;
    }
    champion->prog_number = my_atoi(av[i + 1]);
    if (champion->prog_number < 1 || champion->prog_number > 4)
        return 84;
    return 0;
}
