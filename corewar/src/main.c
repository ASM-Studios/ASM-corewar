/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** main
*/

#include "../include/prototype.h"

int main(const int ac, const char **av)
{
    if (ac == 1)
        return 84;
    if (!my_strcmp(av[1], "-h"))
        return display_help();
    return corewar(ac, av);
}
