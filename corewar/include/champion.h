/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** champion.h
*/

#include "include.h"
#include "op.h"
#include "enum.h"

typedef struct app app_t;

#ifndef CHAMPION_H_
    #define CHAMPION_H_

    typedef struct parameter {
        type_t type;
        int value;
    } parameter_t;

    typedef struct champion {
        header_t header;
        char *path;
        FILE *cor_file;
        int reg[REG_NUMBER];
        int alive;
        int PC;
        int prog_number;
        int load_adress;
    } champion_t;

    champion_t *create_champion(void);
    int destroy_champion(champion_t *champion);
    int destroy_champions(champion_t **champions);

    int open_file(app_t *app);

    int check_integrity(app_t *app);
    int check_load_adress(app_t *app);
    int check_prog_number(app_t *app);

    parameter_t *create_parameter(type_t type);
    int destroy_parameter(parameter_t *parameter);

#endif //CHAMPION_H_
