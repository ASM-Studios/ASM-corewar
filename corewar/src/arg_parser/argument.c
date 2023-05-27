/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** argument.c
*/

#include "../../include/prototype.h"

int launch_graphic(const char **av, int *i, app_t *app)
{
    if (my_strcmp(av[*i], "-g") == 0) {
        app->graphic = 1;
    }
    return 0;
}

int dump_cycle(const char **av, int *i, app_t *app)
{
    if (my_strcmp(av[*i], "-dump") == 0) {
        if (dump_cycle_condition(app, av, *i) == 84)
            return 84;
        else
            *i += 1;
    }
    return 0;
}

int prog_number(const char **av, int *i, champion_t *champion)
{
    if (my_strcmp(av[*i], "-n") == 0) {
        if (prog_number_condition(av, *i, champion) == 84)
            return 84;
        else
            *i += 1;
    }
    return 0;
}

int load_adress(const char **av, int *i, champion_t *champion)
{
    if (my_strcmp(av[*i], "-a") == 0) {
        if (load_adress_condition(av, *i, champion) == 84)
            return 84;
        else
            *i += 1;
    }
    return 0;
}
