/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_label.c
*/

#include "../../../include/prototype.h"

label_t *create_label(char *name)
{
    int len_name = my_strlen(name);
    label_t *label = malloc(sizeof(label_t));

    if (name[len_name - 1] == ':') {
        label->name = my_strndup(name, len_name - 1);
    } else {
        label->name = my_strdup(name);
    }
    return label;
}
