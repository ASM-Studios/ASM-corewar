/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_body.c
*/

#include "../../include/prototype.h"

STATIC int is_label(char *exp)
{
    int len = my_strlen(exp);

    if (exp[len - 1] == LABEL_CHAR) {
        return 1;
    } else {
        return 0;
    }
}

STATIC int parse_body_line(app_t *app, char **body, int i)
{
    char *line = body[i];
    char **array = split(line, " ,\t");
    char *exp = (is_label(array[0]) == 1) ? array[1] : array[0];

    if (exp != NULL) {
        print_double_array(array);
        op_t op = linker(exp);
        app->header.prog_size += (1 + op.nbr_args);
        append_node(&(app->op), op);
    }
    free_double_array(array);
    return 0;
}

int parse_body(app_t *app, char **body)
{
    int i = 0;

    while (body[i] != NULL) {
        if (my_strlen(body[i]) == 0 || body[i][0] == COMMENT_CHAR) {
            i += 1;
            continue;
        }
        parse_body_line(app, body, i);
        i += 1;
    }
    return 0;
}
