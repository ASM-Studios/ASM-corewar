/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** main
*/

#include "../include/prototype.h"

int main(const int ac, const char **av)
{
    #ifdef NO_MALLOC
        srand(time(NULL));
    #endif
    if (ac != 2)
        return 84;
    return asm_main(av[1]);
}
