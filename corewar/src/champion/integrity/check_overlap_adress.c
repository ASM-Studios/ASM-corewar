/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_overlap_adress.c
*/

#include "../../../include/prototype.h"

STATIC int check_overlap_adress_unique(app_t *app, int i)
{
    int j = i + 1;

    while (app->champions[j] != NULL) {
        if (app->champions[i]->header.prog_size + app->champions[i]->
            load_adress > app->champions[j]->load_adress) {
            my_printf("Overlap detected.\n");
            return 84;
        }
        j += 1;
    }
    return 0;
}

int check_overlap_adress(app_t *app)
{
    int i = 0;

    while (app->champions[i + 1] != NULL) {
        if (check_overlap_adress_unique(app, i) == 84);
        i += 1;
    }
    return 0;
}
