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

    typedef struct label {
        char *name;
        int position;
    } label_t;

    typedef struct parameter {
        args_type_t type;
        char *arg;
    } parameter_t;

    typedef struct op_constructor {
        op_t op;
        int bytecode;
        parameter_t **parameter;
        struct op_constructor *next;
    } op_constructor_t;

    typedef struct app {
        FILE *input;
        FILE *output;
        header_t header;
        op_constructor_t *op;
        label_t **label;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

    parameter_t *create_parameter(char *arg, args_type_t type);
    parameter_t **create_parameter_list(void);
    int destroy_parameter(parameter_t *parameter);
    int destroy_parameter_list(parameter_t **list);
    args_type_t get_parameter_type(char *parameter);

    int is_existing_label(label_t **label, char *name);
    int is_label(char *exp);
    int get_no_label(app_t *app, char **body);
    label_t *create_label(char *name, int position);
    int destroy_label(label_t *label);

#endif //ASM_H_
