/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** enum.h
*/

#ifndef ENUM_H_
    #define ENUM_H_

    typedef enum type {
        Direct = 0,
        Indirect,
        Register,
        Index
    } type_t;

    #define DIRECT_SIZE     4
    #define REGISTER_SIZE   1
    #define INDIRECT_SIZE   2
    #define INDEX_SIZE      2

#endif //ENUM_H_
