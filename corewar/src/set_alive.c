/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** set_alive.c
*/

#include "../include/prototype.h"

STATIC int display_message(app_t *app, champion_t *champion)
{
    if (champion->process == 0 && app->graphic == 0)
        my_printf("%s just leave us\n", champion->header.prog_name);
    return 0;
}

int set_live_status_process(app_t *app, int prog_number, int death_status)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->prog_number == prog_number) {
            app->champions[i]->is_dead = death_status;
        }
        i += 1;
    }
    return 0;
}

int detect_alive(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->alive == 0 && app->champions[i]->is_dead == 0) {
            display_message(app, app->champions[i]);
            app->champions[i]->is_dead = 1;
            set_live_status_process(app, app->champions[i]->prog_number, 1);
        } else {
            app->champions[i]->alive = 0;
        }
        i += 1;
    }
    return 0;
}
