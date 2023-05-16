/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** complete_offset.c
*/

#include "../../../include/prototype.h"

int complete_offset(app_t *app)
{
    int offset = 0;
    op_constructor_t *op = app->op;

    while (op != NULL){
        op->index = offset;
        offset += op->size;
        op = op->next;
    }
    return 0;
}
