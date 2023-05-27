/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../../include/prototype.h"

static int get_input(app_t *app)
{
    char character = getch();

    if (character == 32)
        app->increment = 1 - app->increment;
    if (character == 'q')
        return 1;
    return 0;
}

int gloop_curses(app_t *app, int cycle)
{
    if (app->graphic == 0 || cycle % 10 != 0)
        return 0;
    clear();
    if (get_input(app) == 1)
        return 1;
    printw("\nTotal cycle: %d\n\n", cycle);
    for (int i = 0; i < COLS; i++)
        printw("_");
    dump_memory_curses(app);
    refresh();
    usleep(100000);
    return 0;
}
