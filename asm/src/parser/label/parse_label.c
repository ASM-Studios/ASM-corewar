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
            label[index] = malloc(sizeof(label_t));
            label[index]->name = my_strndup(array[0], my_strlen(array[0]) - 1);
            label[index]->position = real_position;
            index += 1;
        }
        if (is_label(array[0]) == 1) {
            real_position = real_position + 1 + linker(array[1]).nbr_args;
            op = linker(array[1]);
        } else {
            real_position = real_position + 1 + linker(array[0]).nbr_args;
            op = linker(array[0]);
        }
        if (op.code != 1 || op.code != 9 || op.code != 12 || op.code != 15)
            real_position += 1;
        free_double_array(array);
        i += 1;
    }
    label[index] = NULL;
    return 0;
}

int parse_label(app_t *app, char **body)
{
    int no_label = get_no_label(app, body);
    app->label = malloc(sizeof(label_t) * (no_label + 1));

    fill_label(app, body, app->label);
    return 0;
}
