/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../../include/prototype.h"

STATIC int little_endian_converter_4(int number)
{
    int swapped = 0;

    swapped = ((number >> 24)&0xff) |
        ((number << 8)&0xff0000) |
        ((number >> 8)&0xff00) |
        ((number << 24)&0xff000000);
    return swapped;
}

STATIC int open_header(champion_t *champion)
{
    fread(&champion->header, sizeof(header_t), 1, champion->cor_file);
    champion->header.prog_size = little_endian_converter_4(
        champion->header.prog_size);
    if (champion->header.prog_size >= MEM_SIZE) {
        my_printf("Fais un régime mgl.\n");
        return 84;
    }
    return 0;
}

STATIC int load_champion(app_t *app, champion_t *champion)
{
    int index = champion->load_adress;

    champion->PC = index;
    while (fread(&(app->memory[index]), 1, 1, champion->cor_file) != 0) {
        index += 1;
    }
    return 0;
}

int open_file(app_t *app)
{
    int i = 0;

    while (app->champions[i] != NULL) {
        app->no_champ += 1;
        app->champions[i]->cor_file = fopen(app->champions[i]->path, "rb");
        if (app->champions[i]->cor_file == NULL) {
            my_printf("Cannot open file.\n");
            return 84;
        }
        if (open_header(app->champions[i]) == 84)
            return 84;
        load_champion(app, app->champions[i]);
        i += 1;
    }
    return 0;
}
