/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../../include/prototype.h"

int open_file(app_t *app, const char *path)
{
    char *dest = change_suffix(path, ".cor");

    app->input = fopen(path, "r");
    app->output = fopen(dest, "wb");
    free(dest);
    if (app->input == NULL || app->output == NULL)
        return 84;
    return 0;
}
