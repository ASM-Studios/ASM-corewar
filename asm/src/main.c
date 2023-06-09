/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** main
*/

#include "../include/prototype.h"

static int display_help(void)
{
    FILE *stream = fopen("asm/help.txt", "r");
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

int main(const int ac, const char **av)
{
    if (ac != 2)
        return 84;
    if (!my_strcmp(av[1], "-h"))
        return display_help();
    return asm_main(av[1]);
}
