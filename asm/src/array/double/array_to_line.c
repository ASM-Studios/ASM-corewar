/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** array_to_line.c
*/

#include "../../../include/prototype.h"

STATIC int get_total_len_array(char **array)
{
    int i = 0;
    int len = 0;

    while (array[i] != NULL) {
        len += my_strlen(array[i]) + 1;
        i += 1;
    }
    return len;
}

char *array_to_line(char **array)
{
    int i = 0;
    int len = get_total_len_array(array);
    char *line = malloc(sizeof(char) * (len + 1));

    line[0] = '\0';
    while (array[i] != NULL) {
        my_strcat(line, array[i]);
        i += 1;
    }
    return line;
}
