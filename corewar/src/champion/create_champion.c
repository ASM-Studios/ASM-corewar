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

    champion->alive = CYCLE_TO_DIE;
    champion->cd = 0;
    champion->path = NULL;
    champion->load_adress = -1;
    champion->prog_number = -1;
    champion->PC = -1;
    champion->tmp_pc = -1;
    champion->alive = CYCLE_TO_DIE;
    champion->cor_file = NULL;
    return champion;
}
