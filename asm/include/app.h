/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.h
*/

#include "include.h"

#ifndef ASM_H_
    #define ASM_H_

    typedef struct app {
        FILE *input;
        FILE *output;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

    int open_file(app_t *app, const char **av);
    int close_file(app_t *app);

#endif //ASM_H_
