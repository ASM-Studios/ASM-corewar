/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../include/prototype.h"

int gloop(app_t *app)
{
    int i = 0;

    while (i < 20) {
        instruction(app, app->champions[0]);
        i += 1;
    }
    return 0;
}
