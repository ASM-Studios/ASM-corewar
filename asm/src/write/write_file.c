/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** write_file.c
*/

#include "../../include/prototype.h"

STATIC int write_parameter(app_t *app, op_constructor_t *op)
{
    int i = 0;

    while (i < 4) {
        if (op->parameter[i] == NULL) {
            i += 1;
            continue;
        }
        if (op->parameter[i]->is_index == 1)
            write_value(op->parameter[i]->arg, Index, app->output);
        else
            write_value(op->parameter[i]->arg, op->parameter[i]->type,
                app->output);
        i += 1;
    }
    return 0;
}

int write_file(app_t *app)
{
    op_constructor_t *op = app->op;

    fwrite(&app->header, sizeof(app->header), 1, app->output);
    while (op != NULL) {
        op_t tmp_op = op->op;
        fwrite(&tmp_op.code, 1, 1, app->output);
        if (op->op.code != 1 && op->op.code != 9 && op->op.code != 12 &&
            op->op.code != 15)
            fwrite(&op->bytecode, 1, 1, app->output);
        write_parameter(app, op);
        op = op->next;
    }
    return 0;
}
