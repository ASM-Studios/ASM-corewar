/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** prototype
*/

#ifndef BASE_REPO_PROTOTYPE_H
    #define BASE_REPO_PROTOTYPE_H

    #include "app.h"
    #include "enum.h"
    #include "include.h"
    #include "array.h"
    #include "curses.h"

    #ifdef UNIT_TEST
        #define STATIC
    #else
        #define STATIC  static
    #endif

    #pragma GCC diagnostic ignored "-Wunused-parameter"

    int corewar(const int ac, const char **av);
    int dump_memory(app_t *app);
    int display_help(void);
    int close_app(app_t *app);
    int gloop(app_t *app);
    int count_alive(app_t *app);
    int detect_alive(app_t *app);

    int count_champion(const int ac);

    /* file */
    char *get_suffix(const char *path);

#endif //BASE_REPO_PROTOTYPE_H
