/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** modify_carry.c
*/

#include "../../../include/prototype.h"

int modify_carry(champion_t *champion, int res)
{
    if (res == 0) {
        champion->carry = 1;
    } else {
        champion->carry = 0;
    }
    return 0;
}
