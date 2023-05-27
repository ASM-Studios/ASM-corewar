/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** detect_pc.c
*/

#include "../../include/prototype.h"

int start_dump_color(int color)
{
    return 0;
}

STATIC int detect_color(champion_t *champion)
{
    switch(champion->prog_number) {
        case 1:
            attron(COLOR_PAIR(2));
            return 0;
        case 2:
            attron(COLOR_PAIR(3));
            return 0;
        case 3:
            attron(COLOR_PAIR(4));
           return 0;
        case 4:
            attron(COLOR_PAIR(5));
            return 0;
    }
    return 0;
}

int show_pc(app_t *app, int cycle)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (cycle == app->champions[i]->PC) {
            detect_color(app->champions[i]);
            return 1;
        }
        i += 1;
    }
    return 0;
}
