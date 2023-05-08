/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** is_label.c
*/

#include "../../../include/prototype.h"

int is_label(char *exp)
{
    int len = my_strlen(exp);

    if (exp[len - 1] == LABEL_CHAR) {
        return 1;
    } else {
        return 0;
    }
}
