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

    void **add_in_array(void **array, void *memb);
    void **alloc_array(int no_line);
    int free_array(void **array);
    int len_array(void **array);
    int swap(void **array, int f1, int f2);

    int print_double_array(char **array);
    int free_triple_array(char ***array);
    int len_triple_array(char ***array);
    int print_triple_array(char ***array);

#endif //ARRAY_H_
