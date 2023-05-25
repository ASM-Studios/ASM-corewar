/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** set_alive.c
*/

#include "../include/prototype.h"

int detect_alive(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->alive == 0) {
            app->champions[i]->is_dead = 1;
        } else {
            app->champions[i]->alive = 0;
        }
        i += 1;
    }
    return 0;
}
