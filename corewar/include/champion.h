/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** champion.h
*/

#include "include.h"
#include "op.h"

typedef struct app app_t;

#ifndef CHAMPION_H_
    #define CHAMPION_H_

    typedef struct champion {
        header_t header;
        FILE *cor_file;
        int reg[REG_NUMBER];
        int alive;
        int PC;
    } champion_t;

    champion_t *create_champion(void);
    int destroy_champion(champion_t *champion);
    int detect_champion(app_t *app, champion_t *champion, const char *path);

#endif //CHAMPION_H_
