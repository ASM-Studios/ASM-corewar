/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../include/prototype.h"

STATIC int need_dump(app_t *app, int cycle)
{
    if (cycle == app->nbr_cycle) {
        dump_memory(app);
    }
    return 0;
}

int gloop(app_t *app)
{
    int i = 0;

    while (i < 4) {
        need_dump(app, i);
        instruction(app, app->champions[0]);
        i += 1;
    }
    return 0;
}
