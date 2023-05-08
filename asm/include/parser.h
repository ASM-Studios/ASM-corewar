/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.h
*/

#include "app.h"

#ifndef PARSER_H_
    #define PARSER_H_

    /* op */
    op_t linker(char *mnemonique);
    op_constructor_t *create_node(op_t op, parameter_t **parameter);
    int destroy_node(op_constructor_t *node);
    op_constructor_t *append_node(op_constructor_t **node, op_t op,
        parameter_t **parameter);
    int destroy_list(op_constructor_t *op);

    char **file_to_array(app_t *app, int no_line);
    int get_no_line(app_t *app);

    /* parser */
    int is_label(char *exp);

    void *get_mid(char **array);
    int get_len(void **array, void *start, void *end);
    int parser(app_t *app);

    char **extract_header(char **array, void *ptr);
    char **extract_body(char **array, void *ptr);

    int parse_header(app_t *app, char **header);
    int parse_label(app_t *app, char **body);
    int parse_body(app_t *app, char **body);

    int calcul_bytecode(op_constructor_t *op);

#endif //PARSER_H_
