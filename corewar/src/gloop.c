/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** gloop.c
*/

#include "../include/prototype.h"

int gloop(app_t *app)
{
    int is_running = 1;

    (void)app;
    while (is_running == 0) {
        my_printf("a\n");
    }
    return 0;
}
