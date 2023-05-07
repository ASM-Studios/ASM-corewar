/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_node.c
*/

#include "../../include/prototype.h"

op_constructor_t *create_node(op_t op, parameter_t **parameter)
{
    op_constructor_t *node = malloc(sizeof(op_constructor_t));

    node->op = op;
    node->parameter = parameter;
    node->bytecode = 1;
    node->next = NULL;
    return node;
}
