/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** launch_graphic.c
*/

#include "../../include/prototype.h"

static int init_curse_color(void)
{
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_WHITE, COLOR_RED);
    init_pair(4, COLOR_GREEN, COLOR_BLACK);
    init_pair(5, COLOR_WHITE, COLOR_GREEN);
    init_pair(6, COLOR_YELLOW, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_YELLOW);
    init_pair(8, COLOR_BLUE, COLOR_BLACK);
    init_pair(9, COLOR_WHITE, COLOR_BLUE);
    return 0;
}

int open_window(app_t *app)
{
    if (app->graphic == 0)
        return 0;
    initscr();
    nodelay(stdscr, TRUE);
    noecho();
    start_color();
    init_curse_color();
    return 0;
}
