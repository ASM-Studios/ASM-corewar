/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** write_value.c
*/

#include "../../include/prototype.h"

int write_value(char *arg, args_type_t type, FILE *stream)
{
    int value = 0;

    if (type == T_IND) {
        value = my_atoi(arg);
        fwrite(&value, IND_SIZE, 1, stream);
    }
    if (type == T_REG) {
        value = my_atoi(&(arg[1]));
        fwrite(&value, 1, 1, stream);
    }
    if (type == T_DIR) {
        //printf("%d - %s\n", my_atoi(&(arg[1])), arg);
        value = my_atoi(&(arg[1]));
        fwrite(&value, DIR_SIZE, 1, stream);
    }
    return 0;
}
