/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** main
*/

#include "../include/prototype.h"

int get_arg(int bytecode, int index)
{
    int mask = (1 << ((4 - index) * 2)) - 1;
    printf("%d\n", mask);
    printf("%d\n", bytecode & mask);
    return 0;
}

int main(const int ac, const char **av)
{
    if (ac == 1)
        return 84;
    if (!my_strcmp(av[1], "-h"))
        return display_help();
    return corewar(ac, av);
}
