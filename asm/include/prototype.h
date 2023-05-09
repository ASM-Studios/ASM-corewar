/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** prototype
*/

#ifndef PROTOTYPE_H_
    #define PROTOTYPE_H_

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

    int program_size(op_constructor_t *op);
    int get_len_instruction(op_constructor_t *op);

    int write_file(app_t *app);
    int write_value(char *arg, type_t type, FILE *stream, int value);
    int little_endian_converter(int number);
    int remove_trailing_space(char *line);
    void *my_malloc(size_t sz);

    /* file */
    char *get_filename(const char *path);
    char *get_basename(const char *path);
    char *get_suffix(const char *path);

    char *change_suffix(const char *path, const char *new_suffix);

    int open_file(app_t *app, const char *path);
    int close_file(app_t *app);

#endif //PROTOTYPE_H_
