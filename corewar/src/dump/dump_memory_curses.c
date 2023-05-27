/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** dump_memory.c
*/

#include "../../include/prototype.h"

static int nbsize(unsigned int nb)
{
    int i = 0;

    while (nb > 16) {
        i += 1;
        nb /= 16;
    }
    return i + 1;
}

int display_hexa_curses(unsigned int nb, int complete)
{
    char tab[] = "0123456789ABCDEF";
    char result[nbsize(nb) + 1];

    result[0] = '\0';
    while (nb >= 16) {
        my_strappend(result, tab[nb % 16]);
        nb /= 16;
    }
    my_strappend(result, tab[nb % 16]);
    if (my_strlen(result) == 1 && complete == 1) {
        result[1] = '0';
        result[2] = '\0';
    }
    my_revstr(result);
    printw("%s", result);
    return my_strlen(result);
}

int dump_memory_curses(app_t *app)
{
    int i = 0;
    int j = 0;

    while (i < MEM_SIZE) {
        j = 0;
        while (j < 64) {
            display_hexa_curses(app->memory[i], 1);
            printw(" ");
            i += 1;
            j += 1;
        }
        printw("\n");
    }
    return 0;
}
