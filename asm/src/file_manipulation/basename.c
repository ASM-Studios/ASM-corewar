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

    while (copy[i] != '.' && copy[i] != '\0') {
        i += 1;
    }
    copy[i] = '\0';
    return copy;
}

char *get_suffix(const char *path)
{
    int i = my_strlen(path) - 1;
    char *suffix = NULL;
    while (i >= 0) {
        if (path[i] == '.')
            break;
        i -= 1;
    }
    if (i == 0)
        return NULL;
    suffix = my_strdup(&path[i]);
    return suffix;
}
