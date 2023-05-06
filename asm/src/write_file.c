/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** write_file.c
*/

#include "../include/prototype.h"

STATIC int write_bytecode(op_t op)
{
    return 0;
}

int write_file(app_t *app)
{
    fwrite(&app->header, sizeof(app->header), 1, app->output);
    op_constructor_t *op = app->op;
    while (op != NULL) {
        op_t tmp_op = op->op;
        fwrite(&tmp_op.code, 1, 1, app->output);
        int c = tmp_op.code;
        if (c == 1 || c == 9 || c == 12 || c == 15) {
            op = op->next;
            continue;
        }
        for (int i = 0; i < tmp_op.nbr_args; i++) {
            int var = tmp_op.type[i];
            fwrite(&var, 4, 1, app->output);
        }
        op = op->next;
    }
    return 0;
}


