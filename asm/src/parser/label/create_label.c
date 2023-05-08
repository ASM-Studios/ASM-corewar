/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_label.c
*/

#include "../../../include/prototype.h"

label_t *create_label(char *name, int position)
{
    label_t *label = malloc(sizeof(label_t));
    label->name = my_strdup(name);
    label->position = position;
    return label;
}
