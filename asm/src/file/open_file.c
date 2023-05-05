/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../../include/prototype.h"

FILE *open_input_file(const char *path)
{
    char *suffix = get_suffix(path);
    FILE *input = NULL;

    if (suffix == NULL)
        return NULL;
    if (my_strcmp(suffix, ".s") != 0) {
        free(suffix);
        return NULL;
    }
    input = fopen(path, "r");
    free(suffix);
    return input;
}

FILE *open_output_file(const char *path)
{
    char *dest = change_suffix(path, ".cor");
    char *filename = get_filename(dest);
    FILE *output = fopen(filename, "wb");

    free(dest);
    free(filename);
    return output;
}

int open_file(app_t *app, const char *path)
{
    app->input = open_input_file(path);
    if (app->input == NULL)
        return 84;
    app->output = open_output_file(path);
    if (app->output == NULL)
        return 84;
    return 0;
}
