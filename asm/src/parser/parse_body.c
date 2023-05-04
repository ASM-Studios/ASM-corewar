/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_body.c
*/

#include "../../include/prototype.h"

//TODO change split function to admit char * & not only char

STATIC int is_label(char *exp)
{
    int len = my_strlen(exp);

    if (exp[len - 1] == ':') {
        return 1;
    } else {
        return 0;
    }
}

STATIC int parse_body_line(app_t *app, char **body, int i)
{
    char *line = body[i];
    char **array = split(line, ' ');
    char *exp = (is_label(array[0]) == 1) ? array[1] : array[0];

    if (exp != NULL) {
        printf(">%s\n", exp);
        op_t op = linker(exp);
        fwrite(&op, sizeof(op), 1, app->output);
    }
    free_double_array(array);
    return 0;
}

int parse_body(app_t *app, char **body)
{
    int i = 0;

    while (body[i] != NULL) {
        if (my_strlen(body[i]) == 0) {
            i += 1;
            continue;
        }
        parse_body_line(app, body, i);
        i += 1;
    }
    return 0;
}
