/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** linker.c
*/

#include "../../include/prototype.h"

op_t linker(char *mnemonique)
{
    int i = 0;
    op_t default_op;
    my_memset(&default_op, '0', sizeof(op_t));

    while (op_table[i].mnemonique != 0) {
        if (my_strcmp(op_table[i].mnemonique, mnemonique) == 0)
            return op_table[i];
        i += 1;
    }
    printf("%s\n", mnemonique);
    return default_op;
}
