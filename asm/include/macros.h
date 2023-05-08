/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** macros.h
*/

#ifndef MACROS_H_
    #define MACROS_H_

    #define MAX_SIZE    224

    #define LEN(x)  my_strlen(x)
    #define END(x)  x[my_strlen(x) - 1]

    #define LEN_LIVE        1
    #define LEN_LD          2
    #define LEN_ST          2
    #define LEN_ADD         2
    #define LEN_SUB         2
    #define LEN_AND         2
    #define LEN_OR          2
    #define LEN_XOR         2
    #define LEN_ZJMP        1
    #define LEN_LDI         2
    #define LEN_STI         2
    #define LEN_FORK        1
    #define LEN_LLD         2
    #define LEN_LLDI        2
    #define LEN_LFORK       1
    #define LEN_AFF         2

#endif //MACROS_H_
