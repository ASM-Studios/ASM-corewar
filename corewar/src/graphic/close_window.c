/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** close_window.c
*/

#include "../../include/prototype.h"

int close_window(app_t *app)
{
    if (app->graphic == 0)
        return 0;
    endwin();
    return 0;
}
