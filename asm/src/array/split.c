/*
** EPITECH PROJECT, 2023
** B-CPE-200-LYN-2-1-lemin-yohann.mangenot
** File description:
** split
*/

#include "../../include/include.h"

static int detect_start(int start, char *arg, char separator, char **token)
{
    int i = start;

    while (arg[i] == separator)
        i += 1;
    if (arg[i] == '\0')
        return -1;
    *token = my_strdup(&arg[i]);
    return i;
}

static int detect_end(char **array, int *index, char *token, char separator)
{
    int i = 0;

    while (token[i] != separator) {
        if (token[i] == '\0') {
            array[*index] = token;
            *index += 1;
            return -1;
        }
        i += 1;
    }
    token[i] = '\0';
    array[*index] = token;
    *index += 1;
    return i;
}

char **split(char *arg, char separator)
{
    int i = 0;
    int j = 0;
    int index = 0;
    char *token = NULL;
    char **array = malloc(sizeof(char *) * (my_strlen(arg) + 1));

    while (arg[i] != '\0') {
        i = detect_start(i, arg, separator, &token);
        if (i == -1)
            break;
        j = detect_end(array, &index, token, separator);
        if (j == -1)
            break;
        i += j;
    }
    array[index] = NULL;
    return array;
}
