/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** close_app.c
*/

#include "../include/prototype.h"

int close_app(app_t *app)
{
    #ifdef NCURSE
        if (close_window(app) == 84)
            return 84;
    #endif
    if (app->champions != NULL)
        destroy_champions(app->champions);
    destroy_app(app);
    return 0;
}
