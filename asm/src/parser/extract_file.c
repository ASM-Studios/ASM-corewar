/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** extract_file.c
*/

#include "../../include/prototype.h"

int get_no_line(app_t *app)
{
    size_t len = 0;
    int no_line = 0;
    char *line = NULL;

    while (getline(&line, &len, app->input) != -1) {
        no_line += 1;
    }
    free(line);
    fseek(app->input, 0, 0);
    return no_line;
}

char **file_to_array(app_t *app, int no_line)
{
    int i = 0;
    size_t len = 0;
    char *line = NULL;
    char **array = malloc(sizeof(char **) * (no_line + 1));

    while (getline(&line, &len, app->input) != -1) {
        remove_trailing_space(line);
        if (my_strlen(line) > 0) {
            array[i] = my_strdup(line);
            i += 1;
        }
    }
    array[i] = NULL;
    free(line);
    return array;
}
