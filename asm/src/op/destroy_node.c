/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** delete_node.c
*/

#include "../../include/prototype.h"

int destroy_node(op_constructor_t *node)
{
    if (node->parameter != NULL)
        destroy_parameter_list(node->parameter);
    free(node);
    return 0;
}
