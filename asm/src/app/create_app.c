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
    my_memset(&app->header, 0, sizeof(app->header));
    app->op = NULL;
    app->input = NULL;
    app->output = NULL;
    app->header.magic = little_endian_converter(COREWAR_EXEC_MAGIC, 4);
    app->header.prog_size = 0;
    return app;
}
