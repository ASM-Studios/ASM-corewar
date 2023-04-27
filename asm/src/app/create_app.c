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

    if (app == NULL)
        return NULL;
    app->input = NULL;
    app->output = NULL;
    return app;
}
