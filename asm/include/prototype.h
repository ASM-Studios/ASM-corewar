/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** prototype
*/

#ifndef BASE_REPO_PROTOTYPE_H
    #define BASE_REPO_PROTOTYPE_H

    #include "include.h"
    #include "macros.h"
    #include "parser.h"
    #include "app.h"

    #ifdef NO_MALLOC
        #define malloc(size)    NULL
    #endif

    int asm_main(const char *path);
    int remove_trailing_space(char *line);

    /* file */
    char *get_basename(const char *path);
    char *get_suffix(const char *path);

    char *change_suffix(const char *path, const char *new_suffix);

    int open_file(app_t *app, const char *path);
    int close_file(app_t *app);

#endif //BASE_REPO_PROTOTYPE_H
