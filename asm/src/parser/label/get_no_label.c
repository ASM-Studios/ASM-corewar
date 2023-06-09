/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_no_label.c
*/

#include "../../../include/prototype.h"

int get_no_label(app_t *app)
{
    int no_label = 0;
    op_constructor_t *op = app->op;

    while (op != NULL) {
        if (op->label != NULL)
            no_label += 1;
        op = op->next;
    }
    return no_label;
}
