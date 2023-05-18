/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** display_help.c
*/

#include "../include/prototype.h"

int display_help(void)
{
    FILE *stream = fopen("corewar/help.txt", "r");
    size_t len;
    char *line = NULL;

    if (!stream) {
        stream = fopen("help.txt", "r");
        if (!stream)
            return 1;
    }
    while (getline(&line, &len, stream) != -1)
        my_printf(line);
    fclose(stream);
    free(line);
    return 0;
}
