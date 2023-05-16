/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** count_index.c
*/

#include "../../include/prototype.h"

int count_index(op_constructor_t *op)
{
    int i = 0;

    while (op->next != NULL) {
        op->index = i;
        i += 1;
        op = op->next;
    }
    return 0;
}
