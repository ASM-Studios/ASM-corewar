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

    typedef struct vector {
        int i;
        int j;
        int k;
    } vector_t;

    typedef struct parameter {
        args_type_t type;
        char *arg;
    } parameter_t;

    typedef struct op_constructor {
        op_t op;
        parameter_t *parameter;
        struct op_constructor *next;
    } op_constructor_t;

    typedef struct app {
        FILE *input;
        FILE *output;
        header_t header;
        op_constructor_t *op;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

    parameter_t *create_parameter(char *arg, args_type_t type);
    int destroy_parameter(parameter_t *parameter);

#endif //ASM_H_
