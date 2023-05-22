/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** detect_winner.c
*/

#include "../include/prototype.h"

STATIC int get_winner(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->alive > 0) {
            my_printf("Le joueur %d (%s) a gagné.\n", app->champions[i]->
                prog_number, app->champions[i]->header.prog_name);
        }
        i += 1;
    }
    return 0;
}

int detect_winner(app_t *app)
{
    int i = 0;
    int count = 0;
    int len = len_array((void **)app->champions);

    while (app->champions[i] != NULL) {
        if (app->champions[i]->alive > 0)
            count += 1;
        i += 1;
    }
    if (len - count == 1) {
        get_winner(app);
        return 1;
    } else {
        return 0;
    }
}
