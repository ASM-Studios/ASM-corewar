/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** dump_cycle.c
*/

#include "../../../include/prototype.h"

int load_adress_condition(const char **av, int i, champion_t *champion)
{
    if (av[i + 1] == NULL) {
        my_printf("-a: invalid option.");
        return 84;
    }
    if (is_number(av[i + 1]) == 0) {
        my_printf("-a: invalid option.");
        return 84;
    }
    champion->load_adress = my_atoi(av[i + 1]);
    return 0;
}
