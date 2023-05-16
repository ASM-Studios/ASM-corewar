/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** connect_label.c
*/

#include "../../../include/prototype.h"

STATIC int is_label_offset(char *args)
{
    if (args[1] == ':') {
        return 1;
    } else {
        return 0;
    }
}

STATIC int get_label(app_t *app, char *label, op_constructor_t *op)
{
    int i = 0;
    char *nlabel = my_strndup(&label[2], LEN(label) - 1);

    while (app->label[i] != NULL) {
        if (my_strcmp(app->label[i]->label->name, nlabel) == 0) {
            return app->label[i]->index - op->index;
        }
        i += 1;
    }
    free(nlabel);
    return 0;
}

STATIC int connect_label_op(app_t *app, op_constructor_t *op)
{
    int i = 0;

    while (op->parameter[i] != NULL) {
        if (is_label_offset(op->parameter[i]->arg) == 1) {
            op->parameter[i]->value = get_label(app, op->parameter[i]->arg, op);
        }
        i += 1;
    }
    return 0;
}

int connect_label(app_t *app)
{
    op_constructor_t *op = app->op;

    while (op != NULL) {
        connect_label_op(app, op);
        op = op->next;
    }
    return 0;
}
