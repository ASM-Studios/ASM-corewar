/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** app.h
*/

#include "include.h"
#include "champion.h"

#ifndef APP_H_
    #define APP_H_

    typedef struct app {
        unsigned char memory[MEM_SIZE];
        int nbr_cycle;
        champion_t **champions;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

    int arg_parser(const int ac, const char **av, app_t *app);
    int dump_cycle_condition(app_t *app, const char **av, int i);

    int prog_number_condition(const char **av, int i, champion_t *champion);
    int load_adress_condition(const char **av, int i, champion_t *champion);

    int complete_champion(app_t *app);
    int complete_prog_number(app_t *app);

    int instruction(app_t *app, champion_t *champion);
    parameter_t **extract_param(int bytecode);
    int extract_param_type(int *number);
    int read_value(app_t *app, champion_t *champion, parameter_t **parameters);

    int special_param(parameter_t *parameter, unsigned char instruction,
        int index);
    int special_param_zjmp(parameter_t *parameter, int index);
    int special_param_fork(parameter_t *parameter, int index);
    int special_param_lfork(parameter_t *parameter, int index);
    int special_param_ldi(parameter_t *parameter, int index);
    int special_param_lldi(parameter_t *parameter, int index);
    int special_param_sti(parameter_t *parameter, int index);
    int instruction_fork(app_t *app, champion_t *champion, parameter_t **parameters);

#endif //APP_H_
