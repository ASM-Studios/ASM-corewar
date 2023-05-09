/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.c
*/

#include "../include/prototype.h"

STATIC int close_app(app_t *app)
{
    destroy_list(app->op);
    close_file(app);
    destroy_app(app);
    return 0;
}

int asm_main(const char *path)
{
    app_t *app = create_app();

    if (app == NULL)
        return 84;
    if (open_file(app, path) == 84)
        return 84;
    if (parser(app) == 84)
        return 84;
    app->header.prog_size =
        little_endian_converter(program_size(app->op), 4);
    write_file(app);
    close_app(app);
    return 0;
}
