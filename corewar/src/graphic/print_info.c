/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** print_info.c
*/

#include "../../include/prototype.h"

int display_line_curses(void)
{
    int i = 0;

    while (i < COLS) {
        printw("_");
        i += 1;
    }
    return 0;
}

int print_champion(champion_t *champion, int offset)
{
    int value = detect_color(champion);

    if (champion->process == 1)
        return 0;
    attron(COLOR_PAIR(value));
    printw("%d - %s", champion->prog_number, champion->header.prog_name);
    attron(COLOR_PAIR(1));
    if (champion->is_dead == 0) {
        if (champion->cd > 0)
            printw(" (on cd) ");
        printw(": live");
    } else {
        printw(": dead");
    }
    offset = offset - 19 - my_strlen(champion->header.prog_name);
    for (int i = 0; i < offset; i++)
        printw(" ");
    return 0;
}

int print_footer(void)
{
    display_line_curses();
    mvprintw(LINES - 2, 0, "(C) ASM-Studios. All rights reserved.\n");
    printw("By axel.chypre@epitech.eu, mael.rabot@epitech.eu,");
    printw(" yohann.mangenot@epitech.eu, mathieu.borel@epitech.eu");
    return 0;
}

int print_header(app_t *app, int cycle)
{
    int offset = COLS / app->no_champ;

    printw("\nTotal cycle: %d\t\tCycle to die: %d\t\t",
        cycle, app->cycle_to_die);
    if (count_alive(app) == 0) {
        printw("Winner is: ");
        attron(COLOR_PAIR(detect_color(app->winner)));
        printw("%s", app->winner->header.prog_name);
        attron(COLOR_PAIR(1));
        printw(" (%s)\n\n", app->winner->header.comment);
    } else {
        printw("\n\n");
    }
    for (int i = 0; app->champions[i] != NULL; i++) {
        print_champion(app->champions[i], offset);
    }
    printw("\n");
    display_line_curses();
    return 0;
}
