/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** detect_winner.c
*/

#include "../include/prototype.h"

int count_alive(app_t *app)
{
    int i = 0;
    int count = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->is_dead == 0) {
            count += 1;
        }
        i += 1;
    }
    return count;
}
