/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_app.c
*/

#include "../../include/prototype.h"

int reset_memory(app_t *app)
{
    int i = 0;

    while (i <= MEM_SIZE) {
        app->memory[i].value = 0;
        app->memory[i].champion = NULL;
        i += 1;
    }
    return 0;
}

app_t *create_app(void)
{
    app_t *app = malloc(sizeof(app_t));

    my_memset(app->memory, 0, sizeof(app->memory));
    reset_memory(app);
    app->champions = NULL;
    app->no_champ = 0;
    app->winner = NULL;
    app->dump_cycle = -1;
    app->cycle_to_die = CYCLE_TO_DIE;
    app->live_count = 0;
    app->increment = 1;
    app->graphic = 0;
    return app;
}
