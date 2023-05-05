/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** header.c
*/

#include "../../include/prototype.h"

char **extract_header(char **array, void *ptr)
{
    int i = 0;
    int no = get_len((void **)array, array[0], ptr);
    char **header = malloc(sizeof(char **) * (no + 1));

    while (array[i] != ptr) {
        header[i] = array[i];
        i += 1;
    }
    header[i] = NULL;
    return header;
}
