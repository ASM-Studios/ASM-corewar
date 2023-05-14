/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** champion.h
*/

#include "include.h"
#include "op.h"

#ifndef CHAMPION_H_
    #define CHAMPION_H_

    typedef struct champion {
        uint8_t reg[REG_NUMBER];
        int alive;
    } champion_t;

    champion_t *create_champion(void);
    int destroy_champion(champion_t *champion);

#endif //CHAMPION_H_
