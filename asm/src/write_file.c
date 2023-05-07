/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** write_file.c
*/

#include "../include/prototype.h"

STATIC int write_bytecode(app_t *app, op_constructor_t *op, int i)
{
    int reg = 1;
    int dir = 2;
    int ind = 3;
    int null = 0;
    args_type_t type;

    if (op->parameter[i] == NULL)
        type = 0;
    else
        type = op->parameter[i]->type;
    if (type == 1 || type == 9 || type == 12 || type == 15) {
        return 0;
    }
    switch (type) {
        case T_REG:
            fwrite(&reg, 2, 1, app->output); break;
        case T_DIR:
            fwrite(&dir, 2, 1, app->output); break;
        case T_IND:
            fwrite(&ind, 2, 1, app->output); break;
        default:
            fwrite(&null, 2, 1, app->output);
    }
    return 0;
}

STATIC int write_parameter(app_t *app, op_constructor_t *op)
{
    int i = 0;

    while (i < 4) {
        write_bytecode(app, op, i);
        i += 1;
    }
    return 0;
}

int write_file(app_t *app)
{
    fwrite(&app->header, sizeof(app->header), 1, app->output);
    op_constructor_t *op = app->op;
    while (op != NULL) {
        op_t tmp_op = op->op;
        fwrite(&tmp_op.code, 1, 1, app->output);
        write_parameter(app, op);
        op = op->next;
    }
    return 0;
}


