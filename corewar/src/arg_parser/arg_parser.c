/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** arg_parser.c
*/

#include "../../include/prototype.h"

STATIC int get_nbr_cycle(const char **av, int i, app_t *app)
{
    if (my_strcmp(av[i], "-dump") == 0 && av[i + 1] != NULL) {
        app->nbr_cycle = my_atoi(av[i + 1]);
    }
    return 0;
}

int arg_parser(const int ac, const char **av, app_t *app)
{
    int i = 1;

    while (i < ac) {
        app->champions[0] = create_champion();
        detect_champion(app, app->champions[0], av[1]);
        //if (get_nbr_cycle(av, i, app) == 84)
            //return 84;
        i += 1;
    }
    return 0;
}
