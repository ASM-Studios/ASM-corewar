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

    if (character == ' ')
        app->increment = 1 - app->increment;
    if (character == 'q' || character == 'Q')
        return 1;
    if (character == 'a')
        reset_memory(app);
    return 0;
}

int gloop_curses(app_t *app, int cycle)
{
    if (app->graphic == 0 || cycle % CYCLE_TO_SHOW != 0)
        return 0;
    if (get_input(app) == 1)
        return 1;
    clear();
    print_header(app, cycle);
    dump_memory_curses(app);
    print_footer();
    refresh();
    usleep(100000);
    return 0;
}
