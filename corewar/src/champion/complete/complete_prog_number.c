/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** complete_prog_number.c
*/

#include "../../../include/prototype.h"

STATIC int swap_champions(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (app->champions[i]->prog_number != -1) {
            swap((void **)app->champions, app->champions[i]->prog_number - 1, i);
        }
        i += 1;
    }
    return 0;

}

STATIC int complete_champions_number(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        app->champions[i]->prog_number = i + 1;
        i += 1;
    }
    return 0;
}

int complete_prog_number(app_t *app)
{
    swap_champions(app);
    complete_champions_number(app);
    for (int i = 0; i < 4; i++)
        printf("%d\n", app->champions[i]->prog_number);
    return 0;
}
