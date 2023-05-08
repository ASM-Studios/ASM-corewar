/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.c
*/

#include "../include/prototype.h"

STATIC int close_app(app_t *app)
{
    destroy_list(app->op);
    close_file(app);
    destroy_app(app);
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
        switch(parameter[i]->type) {
            case Direct:
                size += DIRECT_SIZE;
                break;
            case Register:
                size += REGISTER_SIZE;
                break;
            case Indirect:
                size += INDIRECT_SIZE;
                break;
        }
        i += 1;
    }
    printf("%d - %s\n", size, parameter[0]->arg);
    return size;
}

STATIC int get_len_instruction(op_constructor_t *op)
{
    int tmp_size = 0;

    if (op == NULL) {
        return 0;
    } else {
        tmp_size += 1;
        if (op->op.code != 1 && op->op.code != 9 && op->op.code != 12 &&
            op->op.code != 15)
            tmp_size += 1;
        tmp_size += get_parameter_len(op->parameter);
        return tmp_size + get_len_instruction(op->next);
    }
}

int asm_main(const char *path)
{
    app_t *app = create_app();

    if (app == NULL)
        return 84;
    if (open_file(app, path) == 84)
        return 84;
    if (parser(app) == 84)
        return 84;
    app->header.prog_size = little_endian_converter(get_len_instruction(app->op));
    write_file(app);
    close_app(app);
    return 0;
}
