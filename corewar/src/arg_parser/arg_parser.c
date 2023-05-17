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

STATIC int prog_number(const char **av, int *i, app_t *app,
    champion_t *champion)
{
    if (my_strcmp(av[*i], "-n") == 0) {
        if (prog_number_condition(app, av, *i, champion) == 84)
            return 84;
        else
            *i += 1;
    }
    return 0;
}

STATIC int load_adress(const char **av, int *i, app_t *app,
    champion_t *champion)
{
    if (my_strcmp(av[*i], "-a") == 0) {
        if (load_adress_condition(app, av, *i, champion) == 84)
            return 84;
        else
            *i += 1;
    }
    return 0;
}

STATIC int detect_cor(const char **av, int *i, app_t *app, champion_t **champion)
{
    char *suffix = get_suffix(av[*i]);
    if (my_strcmp(suffix, ".cor") == 0) {
        app->champions = (void *)add_in_array((void *)app->champions, *champion);
        *champion = create_champion();
    }
    free(suffix);
    return 0;
}

int arg_parser(const int ac, const char **av, app_t *app)
{
    int i = 1;
    champion_t *champion = create_champion();

    while (i < ac) {
        if (dump_cycle(av, &i, app) == 84)
            return 84;
        if (prog_number(av, &i, app, champion) == 84)
            return 84;
        if (load_adress(av, &i, app, champion) == 84)
            return 84;
        if (detect_cor(av, &i, app, &champion) == 84)
            return 84;
        i += 1;
    }
    destroy_champion(champion);
    return 0;
}
