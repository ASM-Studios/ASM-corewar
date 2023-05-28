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

int print_footer(void)
{
    display_line_curses();
    mvprintw(LINES - 2, 0, "ASM-Studios. All rights reserved.\n");
    printw("By axel.chypre@epitech.eu, mael.rabot@epitech.eu,");
    printw(" yohann.mangenot@epitech.eu, mathieu.borel@epitech.eu");
    return 0;
}

int print_header(app_t *app, int cycle)
{
    printw("\nTotal cycle: %d\t\tCycle to die: %d\n\n",
        cycle, app->cycle_to_die);
    int offset = COLS / app->no_champ;
    for (int i = 0; app->champions[i] != NULL; i++) {
        print_champion(app->champions[i], offset);
    }
    printw("\n");
    display_line_curses();
    return 0;
}
