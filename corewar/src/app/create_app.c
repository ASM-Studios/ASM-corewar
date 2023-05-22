/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_app.c
*/

#include "../../include/prototype.h"

app_t *create_app(void)
{
    app_t *app = malloc(sizeof(app_t));

    app->champions = NULL;
    app->nbr_cycle = -1;
    app->cycle_to_die = CYCLE_TO_DIE;
    my_memset(app->memory, 0, sizeof(app->memory));
    return app;
}
