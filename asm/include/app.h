/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.h
*/

#include "include.h"
#include "op.h"

#ifndef ASM_H_
    #define ASM_H_

    typedef struct op_constructor {
        op_t op;
        struct op_constructor *next;
    } op_constructor_t;

    typedef struct app {
        FILE *input;
        FILE *output;
        header_t *header;
        op_t *op;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

#endif //ASM_H_
