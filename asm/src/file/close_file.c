/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** close_file.c
*/

#include "../../include/prototype.h"

int close_file(app_t *app)
{
    if (app->input != NULL) {
        fclose(app->input);
        app->input = NULL;
    }
    if (app->output != NULL) {
        fclose(app->output);
        app->output = NULL;
    }
    return 0;
}
