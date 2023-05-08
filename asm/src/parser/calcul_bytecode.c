/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** calcul_bytecode.c
*/

#include "../../include/prototype.h"

STATIC int shift_bytecode_2(op_constructor_t *op, int i)
{
    parameter_t *parameter = op->parameter[i];
    args_type_t type = 0;

    type = (parameter == NULL) ? 99 : op->parameter[i]->type;
    switch (type) {
        case Direct:
            op->bytecode = (op->bytecode << 1) + 1;
            op->bytecode = op->bytecode << 1;
            break;
        default:
            op->bytecode = op->bytecode << 1;
            op->bytecode = op->bytecode << 1;
            break;
    }
    return 0;
}

STATIC int shift_bytecode(op_constructor_t *op, int i)
{
    parameter_t *parameter = op->parameter[i];
    type_t type = 0;

    type = (parameter == NULL) ? 99 : op->parameter[i]->type;
    switch (type) {
        case Register:
            op->bytecode = op->bytecode << 1;
            op->bytecode = (op->bytecode << 1) + 1;
            break;
        case Indirect:
            op->bytecode = (op->bytecode << 1) + 1;
            op->bytecode = (op->bytecode << 1) + 1;
            break;
        default:
            shift_bytecode_2(op, i);
            break;
    }
    return 0;
}

int calcul_bytecode(op_constructor_t *op)
{
    int i = 0;

    while (i < 4) {
        shift_bytecode(op, i);
        i += 1;
    }
    return 0;
}
