/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** read_value.c
*/

#include "../../include/prototype.h"

STATIC int read_unique_value_2(app_t *app, champion_t *champion,
    parameter_t *parameter)
{
    unsigned char *c = &(app->memory[champion->PC]);

    switch (parameter->type) {
        case Register:
            parameter->value = (char)(c[0]);
            champion->PC += 1;
            printf("Register: %d\n", parameter->value);
            break;
        case Index:
            parameter->value = (short)((c[0]) << 8) | (c[1]);
            champion->PC += 2;
            printf("Index: %d\n", parameter->value);
            break;
        default:
            break;
    }
    return 0;
}

STATIC int read_unique_value(app_t *app, champion_t *champion,
    parameter_t *parameter)
{
    unsigned char *c = &(app->memory[champion->PC]);

    switch (parameter->type) {
        case Direct:
            parameter->value = (int)(c[0] << 24) | ((c[1]) << 16) |
                ((c[2]) << 8) | (c[3]);
            champion->PC += 4;
            printf("Direct: %d\n", parameter->value);
            break;
        case Indirect:
            parameter->value = (short)((c[0]) << 8) | (c[1]);
            champion->PC += 2;
            printf("Indirect: %d\n", parameter->value);
            break;
        default:
            read_unique_value_2(app, champion, parameter);
            break;
    }
    return 0;
}

int read_value(app_t *app, champion_t *champion, parameter_t **parameters)
{
    int i = 0;

    while (parameters[i] != NULL) {
        read_unique_value(app, champion, parameters[i]);
        i += 1;
    }
    return 0;
}
