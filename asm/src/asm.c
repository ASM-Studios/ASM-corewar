/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.c
*/

#include "../include/prototype.h"

int asm_main(const char *path)
{
    app_t *app = create_app();
    if (app == NULL)
        return 84;
    if (open_file(app, path) == 84)
        return 84;
    close_file(app);
    destroy_app(app);
    return 0;
}
