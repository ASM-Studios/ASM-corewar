/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_adress.c
*/

#include "../../../include/prototype.h"

STATIC int check_prog_number_compare(app_t *app, int i)
{
    int j = i + 1;

    while (app->champions[j] != NULL) {
        if (app->champions[i]->prog_number == -1 ||
            app->champions[j]->prog_number == -1) {
            j += 1;
            continue;
        }
        if (app->champions[i]->prog_number == app->champions[j]->prog_number) {
            my_printf("Overlap detected !\n");
            return 84;
        } else {
            j += 1;
        }
    }
    return 0;
}

int check_prog_number(app_t *app)
{
    int i = 0;

    while (app->champions[i + 1] != NULL) {
        if (check_prog_number_compare(app, i) == 84) {
            return 84;
        } else {
            i += 1;
        }
    }
    return 0;
}
