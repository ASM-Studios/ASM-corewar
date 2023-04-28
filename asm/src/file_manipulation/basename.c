/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** basename.c
*/

#include "../../include/prototype.h"

char *get_basename(const char *path)
{
    int i = my_strlen(path) - 1;
    char *basename = my_strdup(path);

    while (i >= 0) {
        if (path[i] == '.')
            break;
        i -= 1;
    }
    if (i == 0)
        return basename;
    basename[i] = '\0';
    return basename;
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
