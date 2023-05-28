/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** arg_parser.c
*/

#include "../../include/prototype.h"

STATIC int detect_cor(const char **av, int *i, app_t *app,
    champion_t **champion)
{
    char *suffix = get_suffix(av[*i]);

    if (my_strcmp(suffix, ".cor") == 0) {
        (*champion)->path = my_strdup(av[*i]);
        app->champions = (void *)add_in_array((void *)app->champions,
            *champion);
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
        if (prog_number(av, &i, champion) == 84)
            return 84;
        if (load_adress(av, &i, champion) == 84)
            return 84;
        if (detect_cor(av, &i, app, &champion) == 84)
            return 84;
        if (launch_graphic(av, &i, app) == 84)
            return 84;
        i += 1;
    }
    destroy_champion(champion);
    if (set_address(app->champions) == 84)
        return 84;
    return 0;
}
