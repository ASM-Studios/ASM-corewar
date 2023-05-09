/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** write_value.c
*/

#include "../../include/prototype.h"

int write_value(char *arg, type_t type, FILE *stream)
{
    int value = 0;

    if (type == Direct) {
        value = little_endian_converter(my_atoi(&arg[1]));
        fwrite(&value, DIRECT_SIZE, 1, stream);
    }
    if (type == Register) {
        value = little_endian_converter(my_atoi(&(arg[1])));
        fwrite(&value, REGISTER_SIZE, 1, stream);
    }
    if (type == Indirect) {
        value = little_endian_converter(my_atoi(arg));
        fwrite(&value, INDIRECT_SIZE, 1, stream);
    }
    if (type == Index) {
        value = little_endian_converter(my_atoi(arg));
        fwrite(&value, INDEX_SIZE, 1, stream);
    }
    return 0;
}
