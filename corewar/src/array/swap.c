/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** swap.c
*/

int swap(void **array, int f1, int f2)
{
    void *tmp = array[f1];

    array[f1] = array[f2];
    array[f2] = tmp;
    return 0;
}
