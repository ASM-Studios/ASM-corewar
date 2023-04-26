/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** close_file.c
*/

#include "../../include/prototype.h"

int close_file(app_t *app)
{
    fclose(app->input);
    fclose(app->output);
    return 0;
}
