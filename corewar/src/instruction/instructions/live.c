/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** live.c
*/

#include "../../../include/prototype.h"

int instruction_live(app_t *app, champion_t *champion, parameter_t **parameters)
{
    my_printf("Le joueur %d (%s) est en vie.\n", champion->prog_number,
        champion->header.prog_name);
    champion->alive = 1;
    return 0;
}
