/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../include/prototype.h"

STATIC int need_dump(app_t *app, int cycle)
{
    if (cycle == app->dump_cycle) {
        dump_memory(app);
    }
    return 0;
}

STATIC int launch_instruction(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->cd <= 0 && app->champions[i]->is_dead == 0) {
            instruction(app, app->champions[i]);
        }
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

STATIC int cycle_to_die(app_t *app, int *cycle)
{
    if (*cycle == app->cycle_to_die) {
        *cycle = 0;
        detect_alive(app);
        app->live_count += 1;
    }
    if (app->live_count == NBR_LIVE) {
        app->live_count = 0;
        app->cycle_to_die -= CYCLE_DELTA;
    }
    return 0;
}

int gloop(app_t *app)
{
    int i = 0;

    while (count_alive(app) != 0) {
        cycle_to_die(app, &i);
        need_dump(app, i);
        decrease_cd(app);
        launch_instruction(app);
        i += 1;
    }
    return 0;
}
