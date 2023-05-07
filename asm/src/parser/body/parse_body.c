/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_body.c
*/

#include "../../../include/prototype.h"

STATIC int is_label(char *exp)
{
    int len = my_strlen(exp);

    if (exp[len - 1] == LABEL_CHAR) {
        return 1;
    } else {
        return 0;
    }
}

STATIC parameter_t **detect_parameter(app_t *app, char **arg, op_t op)
{
    int i = 0;
    parameter_t **parameters = create_parameter_list();

    while (arg[i] != NULL) {
        args_type_t type = get_parameter_type(arg[i]);
        parameters[i] = create_parameter(arg[i], type);
        i += 1;
    }
    return parameters;
}

STATIC int parse_body_line(app_t *app, char **body, int i)
{
    char *line = body[i];
    char **array = split(line, " ,\t");
    char *exp = (is_label(array[0]) == 1) ? array[1] : array[0];
    char **arg = (is_label(array[0]) == 1) ? &array[2] : &array[1];

    if (exp != NULL) {
        op_t op = linker(exp);
        parameter_t **parameters = detect_parameter(app, arg, op);
        op_constructor_t *op_c = append_node(&(app->op), op, parameters);
        calcul_bytecode(op_c);
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
