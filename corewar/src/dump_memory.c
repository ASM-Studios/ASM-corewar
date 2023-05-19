/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** dump_memory.c
*/

#include "../include/prototype.h"

STATIC int nbsize(unsigned int nb)
{
    int i = 0;

    while (nb > 16) {
        i += 1;
        nb /= 16;
    }
    return i + 1;
}

int display_hexa(unsigned int nb, int complete)
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
    my_printf("%s", result);
    return my_strlen(result);
}

int display_line(unsigned int i)
{
    int j = 0;
    int len = display_hexa(i, 0);

    while (j < 5 - len) {
        my_printf(" ");
        j += 1;
    }
    my_printf(": ");
    return 0;
}

int dump_memory(app_t *app)
{
    int i = 0;
    int j = 0;

    while (i < MEM_SIZE) {
        j = 0;
        display_line(i);
        while (j < 32) {
            display_hexa(app->memory[i], 1);
            my_printf(" ");
            i += 1;
            j += 1;
        }
        my_printf("\n");
    }
    return 0;
}
