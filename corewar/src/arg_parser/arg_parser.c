/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** arg_parser.c
*/

#include "../../include/prototype.h"

STATIC int dump_cycle(const char **av, int *i, app_t *app)
{
    if (my_strcmp(av[*i], "-dump") == 0) {
        if (dump_cycle_condition(app, av, *i) == 84)
            return 84;
        else
            *i += 1;
    }
    return 0;
}

STATIC int detect_cor(const char **av, int *i, app_t *app)
{
    char *suffix = get_suffix(av[*i]);
    if (my_strcmp(suffix, ".cor") == 0) {
        champion_t *champion = create_champion();
        app->champions = (void *)add_in_array((void *)app->champions, champion);
    }
    free(suffix);
    return 0;
}

int arg_parser(const int ac, const char **av, app_t *app)
{
    int i = 1;

    while (i < ac) {
        if (dump_cycle(av, &i, app) == 84)
            return 84;
        if (detect_cor(av, &i, app) == 84)
            return 84;
        i += 1;
    }
    return 0;
}
