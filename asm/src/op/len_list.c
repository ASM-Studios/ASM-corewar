/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** len_list.c
*/

#include "../../include/prototype.h"

int get_len_list(app_t *app)
{
    int count = 0;
    op_constructor_t *tmp_op = app->op;

    while (tmp_op != NULL) {
        count += 1;
        tmp_op = tmp_op->next;
    }
    return count;
}
