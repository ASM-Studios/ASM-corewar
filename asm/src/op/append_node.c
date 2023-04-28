/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** op_manipulation.c
*/

#include "../../include/prototype.h"

STATIC int create_first_node(op_constructor_t **node,
    op_constructor_t *initial_node)
{
    *node = initial_node;
    return 0;
}

STATIC int create_final_node(op_constructor_t *node,
    op_constructor_t *final_node)
{
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = final_node;
    return 0;
}

int append_node(op_constructor_t **node, op_t op)
{
    op_constructor_t *op_constructor = create_node(op);

    if ((*node) == NULL) {
        create_first_node(node, op_constructor);
    } else {
        create_final_node((*node), op_constructor);
    }
    return 0;
}
