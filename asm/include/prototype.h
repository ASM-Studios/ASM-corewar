/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** prototype
*/

#ifndef BASE_REPO_PROTOTYPE_H
    #define BASE_REPO_PROTOTYPE_H

    #include "include.h"
    #include "app.h"

    int asm_main(const int ac, const char **av);

    /* file */
    char *get_basename(const char *path);
    char *change_suffix(const char *path, const char *new_suffix);

    int open_file(app_t *app, const char *path);
    int close_file(app_t *app);

#endif //BASE_REPO_PROTOTYPE_H