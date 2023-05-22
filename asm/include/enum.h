/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** enum.h
*/

#include "op.h"

#ifndef ENUM_H_
    #define ENUM_H_

    typedef enum type {
        Direct = T_DIR,
        Indirect = T_IND,
        Register = T_REG,
        Index = T_LAB
    } type_t;

    #define DIRECT_SIZE     4
    #define REGISTER_SIZE   1
    #define INDIRECT_SIZE   2
    #define INDEX_SIZE      2

#endif //ENUM_H_
