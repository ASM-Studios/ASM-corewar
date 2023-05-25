/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** get_mid.c
*/

#include "../../include/prototype.h"

int get_mid(char **array)
{
    if (array[0] == NULL || array[1] == NULL)
        return -1;
    if (my_strncmp(array[0], ".name", 5) == 0 &&
        my_strncmp(array[1], ".comment", 8) == 0)
        return 2;
    else
        return -1;
}
