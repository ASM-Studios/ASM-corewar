/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** detect_pc.c
*/

#include "../../include/prototype.h"

int detect_color(champion_t *champion)
{
    switch (champion->prog_number) {
        case 1:
            return 2;
        case 2:
            return 4;
        case 3:
            return 6;
        case 4:
            return 8;
    }
    return 0;
}

int set_color(app_t *app, int i)
{
    int value = 0;

    if (app->memory[i].champion != NULL) {
        value = detect_color(app->memory[i].champion);
        attron(COLOR_PAIR(value));
    }
    value = show_pc(app, i);
    if (value != 0) {
        attron(COLOR_PAIR(value + 1));
    }
    return 0;
}

int show_pc(app_t *app, int cycle)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        if (cycle == app->champions[i]->PC) {
            return detect_color(app->champions[i]);
        }
        i += 1;
    }
    return 0;
}
