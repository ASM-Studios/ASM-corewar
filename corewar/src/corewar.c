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

    destroy_app(app);
    my_printf("%s\n", av[0]);
    return 0;
}
