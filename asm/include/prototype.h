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
    #include "array.h"
    #include "app.h"

    #ifdef NO_MALLOC
        #define malloc(size)    my_malloc(size)
    #endif

    #define MAX_MALLOC 10
    #define MIN_MALLOC 0

    #ifdef UNIT_TEST
        #define STATIC
    #else
        #define STATIC  static
    #endif

    int asm_main(const char *path);
    int remove_trailing_space(char *line);
    void *my_malloc(size_t sz);

    void do_nothing(void);

    /* file */
    char *get_basename(const char *path);
    char *get_suffix(const char *path);

    char *change_suffix(const char *path, const char *new_suffix);

    int open_file(app_t *app, const char *path);
    int close_file(app_t *app);

#endif //BASE_REPO_PROTOTYPE_H
