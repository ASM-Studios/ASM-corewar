/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_app.c
*/

#include "../../include/prototype.h"

int destroy_app(app_t *app)
{
    if (app->label != NULL)
        free(app->label);
    free(app);
    app = NULL;
    return 0;
}
