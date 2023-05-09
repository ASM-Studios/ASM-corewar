/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** existing_label.c
*/

#include "../../../include/prototype.h"

int is_existing_label(label_t **label, char *name)
{
    int i = 0;
    char *copy = my_strndup(name, my_strlen(name) - 1);

    while (label[i] != NULL) {
        if (my_strcmp(label[i]->name, copy) == 0) {
            my_printf("Double definiition of: %s\n", copy);
            free(copy);
            return 1;
        } else {
            i += 1;
        }
    }
    free(copy);
    return 0;
}
