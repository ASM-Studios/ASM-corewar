/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** my_strndup.c
*/

#include "my_string.h"

char *my_strndup(const char *src, int n)
{
    int len = my_strlen(src) + 1;
    char *buffer = malloc(sizeof(char) * len);
    int i = 0;

    buffer[0] = '\0';
    while (*(src + i) != '\0' && i != n) {
        *(buffer + i) = *(src + i);
        i += 1;
    }
    *(buffer + i) = '\0';
    return buffer;
}
