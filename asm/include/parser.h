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
    op_constructor_t *create_node(op_t op);
    int destroy_node(op_constructor_t *node);
    int append_node(op_constructor_t **node, op_t op);

    /* parser */
    void *get_mid(char ***array);
    int get_len(void **array, void *start, void *end);
    int parser(app_t *app);

    int free_triple_array(char ***array);
    char ***extract_header(char ***array, void *ptr);
    char ***extract_body(char ***array, void *ptr);

#endif //PARSER_H_
