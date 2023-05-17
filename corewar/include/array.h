/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** array_manipulation.h
*/

#ifndef ARRAY_H_
    #define ARRAY_H_

    int is_number(const char *str);
    int is_in(const char character, const char *separator);
    char **split(char *arg, char *separator);
    char *array_to_line(char **array);

    int free_double_array(char **array);
    int len_double_array(char **array);
    int print_double_array(char **array);
    int free_triple_array(char ***array);
    int len_triple_array(char ***array);
    int print_triple_array(char ***array);
    void **alloc_double_array(int no_line);

#endif //ARRAY_H_
