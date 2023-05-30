/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** put_offset.c
*/

#include "../../include/prototype.h"

int put_offset(int size)
{
    for (int k = 0; k < ((COLS - (size * 3))) / 2 - 1; k += 1)
        printw(" ");
    return 0;
}
