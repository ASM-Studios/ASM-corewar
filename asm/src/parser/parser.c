/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.c
*/

#include "../../include/prototype.h"

int get_no_line(app_t *app)
{
    size_t len = 0;
    int no_line = 0;
    char *line = NULL;

    while (getline(&line, &len, app->input) != -1) {
        no_line += 1;
    }
    free(line);
    fseek(app->input, 0, 0);
    return no_line;
}

char **file_to_array(app_t *app, int no_line)
{
    int i = 0;
    size_t len = 0;
    char *line = NULL;
    char **array = malloc(sizeof(char **) * (no_line + 1));

    while (getline(&line, &len, app->input) != -1) {
        remove_trailing_space(line);
        array[i] = my_strdup(line);
        i += 1;
    }
    array[i] = NULL;
    free(line);
    return array;
}

int free_parser_array(char **header, char **body, char **array)
{
    free_double_array(array);
    free(header);
    free(body);
    return 0;
}

int parser(app_t *app)
{
    int no_line = get_no_line(app);
    char **array = file_to_array(app, no_line);
    void *ptr = get_mid(array);
    char **header = extract_header(array, ptr);
    char **body = extract_body(array, ptr);

    if (ptr == NULL)
        return 84;
    if (parse_header(app, header) == 84)
        return 84;
    if (parse_body(app, body) == 84)
        return 84;
    if (parse_label(app, body) == 84)
        return 84;
    complete_offset(app);
    connect_label(app);
    free_parser_array(header, body, array);
    count_index(app->op);
    return 0;
}
