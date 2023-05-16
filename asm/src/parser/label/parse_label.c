/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_label.c
*/

#include "../../../include/prototype.h"

STATIC int fill_label(app_t *app)
{
    int index = 0;
    op_constructor_t *op = app->op;

    while (op != NULL) {
        if (op->label != NULL) {
            app->label[index] = op;
            app->label[index + 1] = NULL;
            index += 1;
        }
        op = op->next;
    }
    return 0;
}

int parse_label(app_t *app)
{
    int no_label = get_no_label(app);

    app->label = (op_constructor_t **)alloc_double_array(no_label);
    if (fill_label(app) == 84)
        return 84;
    return 0;
}
