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

    while (nb != 0) {
        i += 1;
        nb /= 10;
    }
    return i;
}

int display_hexa(unsigned int nb)
{
    int len = 0;
    char tab[] = "0123456789ABCDEF";
    char result[nbsize(nb)];
    result[0] = '\0';
    while (nb > 16) {
        my_strappend(result, tab[nb % 16]);
        nb /= 16;
    }
    my_strappend(result, tab[nb % 16]);
    if (my_strlen(result) == 1) {
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
    int len = display_hexa(i);

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

    display_line(i);
    while (i < MEM_SIZE) {
        display_hexa(app->memory[i]);
        if (i % 32 == 0 && i != 0) {
            my_printf("\n");
            display_line(i);
        }
        else
            my_printf(" ");
        i += 1;
    }
    return 0;
}
