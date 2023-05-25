/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_body.c
*/

#include "../../../include/prototype.h"

STATIC parameter_t **detect_parameter(char **arg, op_t op)
{
    int i = 0;
    parameter_t **parameters = NULL;

    if (len_double_array(arg) != op.nbr_args) {
        my_printf("%s: Invalid number of arguments", op.mnemonique);
        return NULL;
    }
    parameters = (parameter_t **)alloc_double_array(5);
    while (arg[i] != NULL) {
        type_t type = get_parameter_type(arg[i]);
        parameters[i] = create_parameter(arg[i], type);
        if (check_param(parameters[i], op, i) == 84)
            return NULL;
        i += 1;
    }
    return parameters;
}

STATIC int parse_instructions(app_t *app, char **label, char *exp,
    char **arg)
{
    op_t op = linker(exp);

    if (op.mnemonique == 0)
        return 84;
    parameter_t **parameters = detect_parameter(arg, op);
    if (parameters == NULL) {
        return 84;
    }
    op_constructor_t *op_c = append_node(&(app->op), op, parameters);
    op_c->size = get_len_instruction(op_c);
    if (*label != NULL) {
        op_c->label = create_label((*label));
    }
    calcul_bytecode(op_c);
    free(*label);
    *label = NULL;
    return 0;
}

STATIC int parse_body_line(app_t *app, char **body, int i, char **label)
{
    char *line = body[i];
    char **array = split(line, " ,\t");
    char *exp = (is_label(array[0]) == 1) ? array[1] : array[0];
    char **arg = (is_label(array[0]) == 1) ? &array[2] : &array[1];

    if (exp[0] == '#') {
        free_double_array(array);
        return 0;
    }
    if (is_label(array[0]) == 1)
        (*label) = my_strdup(array[0]);
    if (exp != NULL) {
        if (parse_instructions(app, label, exp, arg) == 84) {
            free_double_array(array);
            return 84;
        }
    }
    free_double_array(array);
    return 0;
}

int parse_body(app_t *app, char **body)
{
    int i = 0;
    char *label = NULL;

    while (body[i] != NULL) {
        if (my_strlen(body[i]) == 0 || body[i][0] == COMMENT_CHAR) {
            i += 1;
            continue;
        }
        if (parse_body_line(app, body, i, &label) == 84) {
            close_app(app);
            return 84;
        }
        i += 1;
    }
    return 0;
}
