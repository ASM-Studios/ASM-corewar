/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_program_size.c
*/

#include "../include/prototype.h"

STATIC int get_parameter_size_type(parameter_t *parameter)
{
    switch (parameter->type) {
        case Direct:
            return DIRECT_SIZE;
        case Register:
            return REGISTER_SIZE;
        case Indirect:
            return INDIRECT_SIZE;
        default:
            return 0;
    }
    return 0;
}

STATIC int get_parameter_len(parameter_t **parameter)
{
    int i = 0;
    int size = 0;

    while (parameter[i] != NULL) {
        if (parameter[i]->is_index == 1) {
            size += INDEX_SIZE;
            i += 1;
            continue;
        }
        size += get_parameter_size_type(parameter[i]);
        i += 1;
    }
    return size;
}

int get_len_instruction(op_constructor_t *op)
{
    int tmp_size = 1;

    if (op->op.code != 1 && op->op.code != 9 && op->op.code != 12 &&
        op->op.code != 15)
        tmp_size += 1;
    tmp_size += get_parameter_len(op->parameter);
    return tmp_size;
}

int program_size(op_constructor_t *op)
{
    int tmp_size = 0;

    if (op == NULL) {
        return 0;
    } else {
        tmp_size = get_len_instruction(op);
        return tmp_size + program_size(op->next);
    }
}
