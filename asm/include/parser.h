/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.h
*/

#include "app.h"

#ifndef PARSER_H_
    #define PARSER_H_

    int parser(app_t *app);
    int header(app_t *app, char *line);
    int comment(app_t *app, char *line);
    int parse_line(app_t *app, char *line);

#endif //PARSER_H_
