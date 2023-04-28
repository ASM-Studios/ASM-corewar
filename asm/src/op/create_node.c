/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_node.c
*/

#include "../../include/prototype.h"

op_constructor_t *create_node(op_t op)
{
    op_constructor_t *node = malloc(sizeof(op_constructor_t));
    node->op = op;
    node->next = NULL;
    return node;
}
