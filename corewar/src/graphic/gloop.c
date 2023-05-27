/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../../include/prototype.h"

int gloop_curses(app_t *app)
{
    if (app->graphic == 0)
        return 0;
    clear();
    dump_memory_curses(app);
    getch();
    refresh();
    return 0;
}
