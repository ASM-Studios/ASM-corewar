/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../../include/prototype.h"

int gloop_curses(app_t *app, int cycle)
{
    if (app->graphic == 0 || cycle % 100 != 0)
        return 0;
    clear();
    printw("\nTotal cycle: %d\n\n", cycle);
    for (int i = 0; i < COLS; i++)
        printw("_");
    dump_memory_curses(app);
    refresh();
    usleep(1000);
    return 0;
}
