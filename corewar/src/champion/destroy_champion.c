/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_champion.c
*/

#include "../../include/prototype.h"

int destroy_champion(champion_t *champion)
{
    free(champion);
    return 0;
}
