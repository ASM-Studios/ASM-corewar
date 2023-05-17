/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** detect_champion.c
*/

#include "../../include/prototype.h"

int detect_champion(app_t *app, champion_t *champion, const char *path)
{
    champion->cor_file = fopen(path, "r");
    fread(&(champion->header), sizeof(header_t), 1, champion->cor_file);
    printf("%s\n", champion->header.comment);
    return 0;
}
