/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** set_alive.c
*/

#include "../include/prototype.h"

STATIC int display_message(champion_t *champion)
{
    if (champion->process == 0)
        my_printf("%s just leave us\n", champion->header.prog_name);
    return 0;
}

int detect_alive(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->alive == 0 && app->champions[i]->is_dead == 0) {
            display_message(app->champions[i]);
            app->champions[i]->is_dead = 1;
        } else {
            app->champions[i]->alive = 0;
        }
        i += 1;
    }
    return 0;
}
