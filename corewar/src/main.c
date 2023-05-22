/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** main
*/

#include "../include/prototype.h"

int main(const int ac, const char **av)
{
    unsigned char mem[5] = {4, 3, 2, 1};
    int value = read_mem_value(mem, 0, 4);
    printf("%d\n", value);
    return 0;
    if (ac == 1)
        return 84;
    if (!my_strcmp(av[1], "-h"))
        return display_help();
    return corewar(ac, av);
}
