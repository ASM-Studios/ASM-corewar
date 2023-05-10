/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** app.h
*/

#include "include.h"
#include "champion.h"

#ifndef APP_H_
    #define APP_H_

    typedef struct app {
        unsigned char memory[MEM_SIZE];
        int nbr_cycle;
        champion_t **champions;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

#endif //APP_H_
