/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** prototype
*/

#ifndef BASE_REPO_PROTOTYPE_H
    #define BASE_REPO_PROTOTYPE_H

    #include "app.h"
    #include "include.h"
    #include "array.h"

    #ifdef UNIT_TEST
        #define STATIC
    #else
        #define STATIC  static
    #endif

    int corewar(const int ac, const char **av);

    /* file */
    char *get_suffix(const char *path);

#endif //BASE_REPO_PROTOTYPE_H
