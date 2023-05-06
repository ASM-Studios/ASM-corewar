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
    app->header.prog_size = little_endian_converter(app->header.prog_size);
    fwrite(&app->header, sizeof(app->header), 1, app->output);
    op_constructor_t *op = app->op;
    while (op != NULL) {
        printf("%s\n", op->op.mnemonique);
        op = op->next;
    }
    close_app(app);
    return 0;
}
