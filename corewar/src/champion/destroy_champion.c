/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_champion.c
*/

#include "../../include/prototype.h"

int destroy_champion(champion_t *champion)
{
    if (champion->cor_file != NULL)
        fclose(champion->cor_file);
    if (champion->path != NULL)
        free(champion->path);
    free(champion);
    return 0;
}
