/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** close_app.c
*/

#include "../include/prototype.h"

int close_app(app_t *app)
{
    close_window(app);
    if (app->champions != NULL)
        destroy_champions(app->champions);
    destroy_app(app);
    return 0;
}
