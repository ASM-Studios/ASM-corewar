/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** body.c
*/

#include "../../include/prototype.h"

char **extract_body(char **array, void *ptr)
{
    int i = 0;
    int index = 0;
    int len = len_double_array(array);
    int no = get_len((void **)array, ptr, (void *)array[len - 1]);
    char **body = malloc(sizeof(char **) * (no + 2));

    while (array[i] != ptr) {
        i += 1;
    }
    i += 1;
    while (array[i] != NULL) {
        body[index] = array[i];
        index += 1;
        i += 1;
    }
    body[index] = NULL;
    return body;
}
