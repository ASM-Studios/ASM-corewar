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

STATIC int detect_winner(app_t *app)
{
    int i = 0;
    int count = 0;
    int len = len_array((void **)app->champions);

    while (app->champions[i] != NULL) {
        if (app->champions[i]->alive > 0)
            count += 1;
        i += 1;
    }
    if (len - count == 1)
        my_printf("WIN");
    return 0;
}

int gloop(app_t *app)
{
    int i = 0;

    while (i < 10000000) {
        need_dump(app, i);
        launch_instruction(app);
        decrease_cd(app);
        detect_winner(app);
        i += 1;
    }
    return 0;
}
