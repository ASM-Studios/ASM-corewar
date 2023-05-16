/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.h
*/

#include "include.h"
#include "op.h"
#include "enum.h"

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
        int line;
    } label_t;

    typedef struct parameter {
        type_t type;
        int is_index;
        char *arg;
        int value;
    } parameter_t;

    typedef struct op_constructor {
        op_t op;
        int bytecode;
        int size;
        int index;
        label_t *label;
        parameter_t **parameter;
        struct op_constructor *next;
    } op_constructor_t;

    typedef struct app {
        FILE *input;
        FILE *output;
        header_t header;
        op_constructor_t *op;
        op_constructor_t **label;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

    parameter_t *create_parameter(char *arg, type_t type);
    parameter_t **create_parameter_list(void);
    int destroy_parameter(parameter_t *parameter);
    int destroy_parameter_list(parameter_t **list);
    type_t get_parameter_type(char *parameter);

    int check_param(parameter_t *parameter, char op, int param_index);
    int check_param_bop(parameter_t *parameter, char op, int param_index);

    int check_param_aff(parameter_t *parameter, char op, int param_index);

    int check_param_ld(parameter_t *parameter, char op, int param_index);
    int check_param_lld(parameter_t *parameter, char op, int param_index);

    int check_param_ldi(parameter_t *parameter, char op, int param_index);
    int check_param_lldi(parameter_t *parameter, char op, int param_index);

    int check_param_fork(parameter_t *parameter, char op, int param_index);
    int check_param_lfork(parameter_t *parameter, char op, int param_index);
    int check_param_zjmp(parameter_t *parameter, char op, int param_index);

    int check_param_st(parameter_t *parameter, char op, int param_index);
    int check_param_sti(parameter_t *parameter, char op, int param_index);


    int is_existing_label(label_t **label, char *name);
    int is_label(char *exp);
    int get_no_label(app_t *app);
    label_t *create_label(char *name, int position);
    int destroy_label(label_t *label);

#endif //ASM_H_
