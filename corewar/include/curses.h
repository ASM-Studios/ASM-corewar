/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** curses.h
*/

typedef struct app app_t;
typedef struct champion champion_t;

#ifndef CURSES_F_H_
    #define CURSES_F_H_

    int open_window(app_t *app);
    int close_window(app_t *app);

    int detect_color(champion_t *champion);
    int set_color(app_t *app, int i);

    int show_pc(app_t *app, int cycle);
    int start_dump_color(int color);

    int print_header(app_t *app, int cycle);
    int print_footer(void);
    int print_champion(champion_t *champion, int offset);
    int display_line_curses(void);
    int put_offset(int size);

#endif //CURSES_H_
