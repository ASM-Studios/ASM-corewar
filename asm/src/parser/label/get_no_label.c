/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_no_label.c
*/

#include "../../../include/prototype.h"

int get_no_label(app_t *app, char **body)
{
    int i = 0;
    char **array = NULL;
    int no_label = 0;

    while (body[i] != NULL) {
        if (my_strlen(body[i]) == 0) {
            i += 1;
            continue;
        }
        array = split(body[i], " \t");
        no_label += (is_label(array[0]) == 1) ? 1 : 0;
        free_double_array(array);
        i += 1;
    }
    return no_label;
}
