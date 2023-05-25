/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.c
*/

#include "../../include/prototype.h"

STATIC int main_parser_header(app_t *app, char **array)
{
    int index = get_mid(array);
    char **header = NULL;

    if (index == -1)
        return 84;
    header = extract_header(array, array[index]);
    if (parse_header(app, header) == 84) {
        free(header);
        free_double_array(array);
        return 84;
    } else {
        free(header);
        return 0;
    }
}

STATIC int main_parser_body(app_t *app, char **array)
{
    int index = get_mid(array);
    char **body = NULL;

    if (array[index] == NULL)
        return 0;
    body = extract_body(array, array[index]);
    if (parse_body(app, body) == 84) {
        free(body);
        free_double_array(array);
        return 84;
    } else {
        free(body);
        return 0;
    }
}

int parser(app_t *app)
{
    int no_line = get_no_line(app);
    char **array = file_to_array(app, no_line);

    if (main_parser_header(app, array) == 84)
        return 84;
    if (main_parser_body(app, array) == 84)
        return 84;
    if (parse_label(app) == 84)
        return 84;
    complete_offset(app);
    if (connect_label(app) == 84)
        return 84;
    count_index(app->op);
    free_double_array(array);
    return 0;
}
