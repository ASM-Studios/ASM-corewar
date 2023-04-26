/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** extension.c
*/

#include "../../include/prototype.h"

char *change_suffix(const char *path, const char *new_suffix)
{
    char *copy = get_basename(path);
    int len = my_strlen(copy) + my_strlen(new_suffix) + 1;
    char *new_path = malloc(sizeof(char) * len);
    new_path = my_stricat(2, new_path, copy, new_suffix);
    free(copy);
    return new_path;
}
