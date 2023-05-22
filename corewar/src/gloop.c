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

STATIC int launch_instruction(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->cd == 0 && app->champions[i]->alive > 0)
            instruction(app, app->champions[i]);
        i += 1;
    }
    return 0;
}

STATIC int decrease_cd(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        app->champions[i]->cd -= 1;
        app->champions[i]->alive -= 1;
        i += 1;
    }
    return 0;
}

int gloop(app_t *app)
{
    int i = 0;

    while (i < 10000000) {
        launch_instruction(app);
        need_dump(app, i);
        decrease_cd(app);
        if (detect_winner(app) == 1)
            break;
        i += 1;
    }
    return 0;
}
