/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../../include/prototype.h"

int open_file(app_t *app, const char **av)
{
    app->input = fopen(av[1], "r");
    app->output = fopen(av[1], "wb");
    if (app->input == NULL || app->output == NULL)
        return 84;
    return 0;
}
