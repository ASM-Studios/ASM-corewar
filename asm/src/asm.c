/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.c
*/

#include "../include/prototype.h"

int asm_main(const int ac, const char **av)
{
    app_t *app = create_app();
    open_file(app, av[1]);
    char *path = change_suffix(av[1], ".cor");
    printf("%s\n", path);
    free(path);
    close_file(app);
    destroy_app(app);
    return 0;
}