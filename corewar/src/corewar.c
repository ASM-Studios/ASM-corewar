/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** corewar.c
*/

#include "../include/prototype.h"

STATIC int check_arg(app_t *app)
{
    if (app->nbr_cycle == -1)
        return 84;
    return 0;
}

int corewar(const int ac, const char **av)
{
    app_t *app = create_app();

    if (arg_parser(ac, av, app) == 84)
        return 84;
    if (check_arg(app) == 84)
        return 84;
    destroy_app(app);
    return 0;
}
