/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_app.c
*/

#include "../../include/prototype.h"

int little_endian_converter(int number)
{
    int swapped = 0;

    swapped = ((number >> 24)&0xff) |
        ((number << 8)&0xff0000) |
        ((number >> 8)&0xff00) |
        ((number << 24)&0xff000000);
    return swapped;
}

app_t *create_app(void)
{
    app_t *app = malloc(sizeof(app_t));

    if (app == NULL)
        return NULL;
    my_memset(&app->header, 0, sizeof(app->header));
    app->op = NULL;
    app->input = NULL;
    app->output = NULL;
    app->header.magic = little_endian_converter(COREWAR_EXEC_MAGIC);
    app->header.prog_size = 0;
    return app;
}
