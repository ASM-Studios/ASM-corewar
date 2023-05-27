/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** launch_graphic.c
*/

#include "../../include/prototype.h"

int open_window(app_t *app)
{
    if (app->graphic == 0)
        return 0;
    initscr();
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    init_pair(5, COLOR_BLUE, COLOR_BLACK);
    return 0;
}
