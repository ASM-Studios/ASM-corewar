/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** check_integrity.c
*/

#include "../../../include/prototype.h"

STATIC int check_no_champ(app_t *app)
{
    int len = len_array((void *)app->champions);

    if (len <= 1) {
        display_help();
        return 84;
    }
    if (len > 4) {
        my_printf("The number of champion load is above the limit.\n");
        return 84;
    }
    return 0;
}

int check_integrity(app_t *app)
{
    if (check_no_champ(app) == 84)
        return 84;
    if (check_adress(app) == 84)
        return 84;
    return 0;
}
