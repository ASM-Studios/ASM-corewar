/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** basename.c
*/

#include "../../include/prototype.h"

char *get_basename(const char *path)
{
    int i = 0;
    char *copy = my_strdup(path);

    while (copy[i] != '.') {
        i += 1;
    }
    copy[i] = '\0';
    return copy;
}
