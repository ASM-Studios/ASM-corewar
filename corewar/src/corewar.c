/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** corewar.c
*/

#include "../include/prototype.h"

STATIC int config_champions(app_t *app)
{
    if (check_integrity(app) == 84) {
        close_app(app);
        return 84;
    }
    if (complete_champion(app) == 84) {
        close_app(app);
        return 84;
    }
    if (open_file(app) == 84) {
        close_app(app);
        return 84;
    }
    if (check_overlap_adress(app) == 84) {
        close_app(app);
        return 84;
    }
    return 0;
}

int corewar(const int ac, const char **av)
{
    app_t *app = create_app();

    if (arg_parser(ac, av, app) == 84) {
        close_app(app);
        return 84;
    }
    if (config_champions(app) == 84)
        return 84;
    gloop(app);
    close_app(app);
    return 0;
}
