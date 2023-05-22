/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** set_adress.c
*/

#include "../../include/prototype.h"

int set_address(champion_t **champions)
{
    int i = 0;
    int len = len_array((void **)champions);
    int diff = MEM_SIZE / len;

    while (champions[i] != NULL) {
        if (champions[i]->load_adress == -1) {
            champions[i]->load_adress = diff * i;
        }
        i += 1;
    }
    return 0;
}
