/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../../include/prototype.h"

STATIC int open_header(app_t *app, champion_t *champion)
{
    fread(&champion->header, sizeof(header_t), 1, champion->cor_file);
    return 0;
}

STATIC int load_champion(app_t *app, champion_t *champion)
{
    int i = 0;
    int index = champion->load_adress;

    champion->PC = index;
    fread(&(app->memory[index]), champion->header.prog_size, 1,
        champion->cor_file);
    return 0;
}

int open_file(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        app->champions[i]->cor_file = fopen(app->champions[i]->path, "rb");
        if (app->champions[i]->cor_file == NULL) {
            my_printf("Cannot open file.\n");
            return 84;
        } else {
            open_header(app, app->champions[i]);
            load_champion(app, app->champions[i]);
        }
        i += 1;
    }
    return 0;
}
