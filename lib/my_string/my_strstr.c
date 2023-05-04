/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_strstr.c
*/

#include "my_string.h"

int my_strstr(const char *fullstring, const char *substring)
{
    int i = 0;
    int len = my_strlen(substring);

    while (fullstring[i] != '\0') {
        if (my_strncmp(&fullstring[i], substring, len) == 0)
            return i;
        i += 1;
    }
    return -1;
}
