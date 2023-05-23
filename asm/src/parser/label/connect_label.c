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

STATIC op_constructor_t *get_label(app_t *app, char *label)
{
    int i = 0;
    char *nlabel = my_strndup(&label[2], LEN(label) - 1);

    while (app->label[i] != NULL) {
        if (my_strcmp(app->label[i]->label->name, nlabel) == 0) {
            free(nlabel);
            return app->label[i];
        }
        i += 1;
    }
    free(nlabel);
    return NULL;
}

STATIC int get_label_condition(app_t *app, op_constructor_t *op, int i)
{
    if (is_label_offset(op->parameter[i]->arg) == 1) {
        op_constructor_t *tmp_op = get_label(app, op->parameter[i]->arg);
        if (tmp_op == NULL)
            return 84;
        op->parameter[i]->value = tmp_op->index - op->index;
    }
    return 0;
}

STATIC int connect_label_op(app_t *app, op_constructor_t *op)
{
    int i = 0;

    while (op->parameter[i] != NULL) {
        if (get_label_condition(app, op, i) == 84)
            return 84;
        i += 1;
    }
    return 0;
}

int connect_label(app_t *app)
{
    op_constructor_t *op = app->op;

    while (op != NULL) {
        if (connect_label_op(app, op) == 84)
            return 84;
        op = op->next;
    }
    return 0;
}
