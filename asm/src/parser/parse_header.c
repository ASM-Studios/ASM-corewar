/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parse_header.c
*/

#include "../../include/prototype.h"

STATIC int detect_start_end(int *r_start, int *r_end, int i)
{
    if (*r_start == -1) {
        *r_start = i + 1;
        return 0;
    } else {
        *r_end = i;
        return 0;
    }
}

STATIC char *extract_header_text_born(char *line, int start, int end)
{
    int i = start;
    int r_start = -1;
    int r_end = -1;
    char *text = NULL;

    while (i <= end && line[i] != '\0') {
        if (line[i] == '"')
            detect_start_end(&r_start, &r_end, i);
        i += 1;
    }
    if (r_start == -1 || r_end == -1)
        return NULL;
    text = my_strndup(&line[r_start], r_end - r_start);
    return text;
}

STATIC int extract_header_text(app_t *app, char *line)
{
    int name = my_strstr(line, ".name");
    int comment = my_strstr(line, ".comment");
    char *name_t = NULL;
    char *comment_t = NULL;

    if (name == -1 || comment == -1)
        return 84;
    name_t = extract_header_text_born(line, name + 5, comment - 1);
    comment_t = extract_header_text_born(line, comment + 8, my_strlen(line));
    if (name_t == NULL || comment_t == NULL)
        return 84;
    my_strcpy(app->header->prog_name, name_t);
    my_strcpy(app->header->comment, comment_t);
    free(name_t);
    free(comment_t);
    return 0;
}

int parse_header(app_t *app, char **header)
{
    char *line = array_to_line(header);

    if (extract_header_text(app, line) == 84)
        return 84;
    free(line);
    return 0;
}
