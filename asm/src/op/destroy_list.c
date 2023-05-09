/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_list.c
*/

#include "../../include/prototype.h"

int destroy_list(op_constructor_t *op)
{
    if (op == NULL) {
        return 0;
    } else {
        destroy_list(op->next);
        destroy_node(op);
        return 0;
    }
}
