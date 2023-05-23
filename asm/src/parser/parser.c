/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.c
*/

#include "../../include/prototype.h"

STATIC int main_parser_header(app_t *app, char **array, void *ptr)
{
    char **header = extract_header(array, ptr);

    if (parse_header(app, header) == 84) {
        free(header);
        free_double_array(array);
        return 84;
    } else {
        free(header);
        return 0;
    }
}

STATIC int main_parser_body(app_t *app, char **array, void *ptr)
{
    char **body = extract_body(array, ptr);

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
    void *ptr = get_mid(array);

    if (ptr == NULL)
        return 83;
    if (main_parser_header(app, array, ptr) == 84)
        return 84;
    if (main_parser_body(app, array, ptr) == 84)
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
