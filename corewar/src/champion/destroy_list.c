/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** destroy_champions.c
*/

#include "../../include/prototype.h"

int destroy_champions(champion_t **champions)
{
    int i = 0;

    while (champions[i] != NULL) {
        destroy_champion(champions[i]);
        i += 1;
    }
    free(champions);
    return 0;
}
