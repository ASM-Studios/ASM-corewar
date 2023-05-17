/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** corewar.c
*/

#include "../include/prototype.h"

int corewar(const int ac, const char **av)
{
    app_t *app = create_app();

    if (arg_parser(ac, av, app) == 84)
        return 84;
    if (check_integrity(app) == 84) {
        close_app(app);
        return 84;
    }
    close_app(app);
    return 0;
}
