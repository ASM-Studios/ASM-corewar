/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** launch_graphic.c
*/

#include "../../include/prototype.h"

int open_window(app_t *app)
{
    if (app->graphic == 0)
        return 0;
    initscr();
    return 0;
}
