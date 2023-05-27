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

    my_memset(&(champion->header), '0', sizeof(header_t));
    champion->cor_file = NULL;
    champion->path = NULL;
    my_memset(&(champion->reg), '0', sizeof(champion->reg));
    champion->alive = 0;
    champion->is_dead = 0;
    champion->PC = -1;
    champion->tmp_pc = -1;
    champion->load_adress = -1;
    champion->prog_number = -1;
    champion->cd = 0;
    champion->carry = 0;
    champion->process = 0;
    return champion;
}
