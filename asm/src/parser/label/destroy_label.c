/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_label.c
*/

#include "../../../include/prototype.h"

int destroy_label(label_t *label)
{
    free(label->name);
    free(label);
    return 0;
}
