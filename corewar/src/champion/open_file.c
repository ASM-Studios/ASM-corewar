/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../../include/prototype.h"

int open_file(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        app->champions[i]->cor_file = fopen(app->champions[i]->path, "rb");
        if (app->champions[i]->cor_file == NULL) {
            my_printf("Cannot open file\n");
            return 84;
        }
        i += 1;
    }
    return 0;
}
