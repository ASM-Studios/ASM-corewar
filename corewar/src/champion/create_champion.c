/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_champion.c
*/

#include "../../include/prototype.h"

champion_t *create_champion(void)
{
    champion_t *champion = malloc(sizeof(champion_t));

    champion->alive = 1;
    return champion;
}
