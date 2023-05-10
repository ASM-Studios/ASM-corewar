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

    arg_parser(ac, av, app);
    destroy_app(app);
    return 0;
}
