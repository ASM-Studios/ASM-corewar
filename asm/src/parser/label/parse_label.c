/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_label.c
*/

#include "../../../include/prototype.h"

STATIC int fill_unique_label(char **body, int line_index, label_t **label,
    int *index)
{
    char **array = NULL;
    char *line = body[line_index];

    if (my_strlen(line) == 0) {
        return 0;
    }
    array = split(line, " \t");
    if (is_label(array[0]) == 1) {
        if (is_existing_label(label, array[0]) == 1)
            return 84;
        label[*index] = create_label(array[0], line_index);
        *index += 1;
    }
    free_double_array(array);
    return 0;
}

STATIC int fill_label(app_t *app, char **body, label_t **label)
{
    int i = 0;
    int index = 0;

    while (body[i] != NULL) {
        fill_unique_label(body, i, label, &index);
        i += 1;
    }
    return 0;
}

int parse_label(app_t *app, char **body)
{
    int no_label = get_no_label(app, body);

    app->label = (label_t **)alloc_double_array(no_label);
    if (fill_label(app, body, app->label) == 84)
        return 84;
    return 0;
}
