/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** array_manipulation.h
*/

#ifndef ARRAY_H_
    #define ARRAY_H_

    int free_double_array(char **array);
    int len_double_array(char **array);
    int print_double_array(char **array);
    int free_triple_array(char ***array);
    int len_triple_array(char ***array);
    int print_triple_array(char ***array);
    char **split(char *arg, char separator);

#endif //ARRAY_H_
