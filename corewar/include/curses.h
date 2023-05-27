/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** curses.h
*/

typedef struct app app_t;

#ifndef CURSES_H_
    #define CURSES_H_

    int open_window(app_t *app);
    int close_window(app_t *app);

#endif //CURSES_H_
