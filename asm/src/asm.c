/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.c
*/

#include "../include/prototype.h"

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
        fwrite(&(op->op), sizeof(op_t), 1, app->output);
        op = op->next;
    }
    close_file(app);
    destroy_app(app);
    return 0;
}
