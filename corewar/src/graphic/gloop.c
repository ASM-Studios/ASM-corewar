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
        my_memset(app->memory, '0', MEM_SIZE);
    return 0;
}

static int print_champion(champion_t *champion, int offset)
{
    if (champion->process == 1)
        return 0;
    detect_color(champion);
    printw("%s", champion->header.prog_name);
    attron(COLOR_PAIR(1));
    if (champion->is_dead == 0) {
        if (champion->cd > 0)
            printw(" (on cd) ");
        printw(": live");
    } else {
        printw(": dead");
    }
    offset = offset - 15 - my_strlen(champion->header.prog_name);
    for (int i = 0; i < offset; i++)
        printw(" ");
    return 0;
}

static int print_header(app_t *app, int cycle)
{
    printw("\nTotal cycle: %d\t\tCycle to die: %d\n\n",
        cycle, app->cycle_to_die);
    int offset = COLS / app->no_champ;
    for (int i = 0; app->champions[i] != NULL; i++) {
        print_champion(app->champions[i], offset);
    }
    printw("\n");
    for (int i = 0; i < COLS; i++)
        printw("_");
    return 0;
}

int gloop_curses(app_t *app, int cycle)
{
    if (app->graphic == 0 || cycle % 100 != 0)
        return 0;
    clear();
    if (get_input(app) == 1)
        return 1;
    print_header(app, cycle);
    dump_memory_curses(app);
    refresh();
    usleep(100000);
    return 0;
}
