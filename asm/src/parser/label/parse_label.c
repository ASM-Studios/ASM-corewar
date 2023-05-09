/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_label.c
*/

#include "../../../include/prototype.h"

STATIC int fill_label(app_t *app, char **body, label_t **label)
{
    int i = 0;
    char **array = NULL;
    int index = 0;
    int real_position = 2;
    op_t op;

    while (body[i] != NULL) {
        array = split(body[i], " \t");
        if (is_label(array[0]) == 1) {
            if (is_existing_label(label, array[0]) == 1)
                return 84;
            label[index++] = create_label(array[0], real_position);
        }
        free_double_array(array);
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
