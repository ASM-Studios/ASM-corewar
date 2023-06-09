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

    typedef struct mem_find {
        app_t *app;
        parameter_t *parameter;
        champion_t *champion;
    } mem_find_t;

    typedef struct mem_case {
        unsigned char value;
        champion_t *champion;
    } mem_case_t;

    typedef struct app {
        mem_case_t memory[MEM_SIZE];
        int dump_cycle;
        int live_count;
        int cycle_to_die;
        champion_t **champions;
        int no_champ;
        champion_t *winner;
        int increment;
        int graphic;
    } app_t;

    app_t *create_app(void);
    int destroy_app(app_t *app);

    int reset_memory(app_t *app);

    int arg_parser(const int ac, const char **av, app_t *app);
    int dump_cycle_condition(app_t *app, const char **av, int i);

    int load_adress(const char **av, int *i, champion_t *champion);
    int prog_number(const char **av, int *i, champion_t *champion);
    int dump_cycle(const char **av, int *i, app_t *app);
    int launch_graphic(const char **av, int *i, app_t *app);
    int gloop_curses(app_t *app, int cycle);

    int prog_number_condition(const char **av, int i, champion_t *champion);
    int load_adress_condition(const char **av, int i, champion_t *champion);

    int check_overlap_adress(app_t *app);

    int set_address(champion_t **champions);
    int complete_champion(app_t *app);
    int complete_prog_number(app_t *app);

    int instruction(app_t *app, champion_t *champion);
    parameter_t **extract_param(int bytecode);
    int extract_param_type(int *number);
    int read_value(app_t *app, champion_t *champion, parameter_t **parameters);
    int read_mem(mem_case_t *mem, int pos, int size);
    int set_mem_value_4(mem_case_t *mem, int pos, int value,
        champion_t *champion);

    int special_param(parameter_t *parameter, unsigned char instruction,
        int index);
    int special_param_zjmp(parameter_t *parameter, int index);
    int special_param_fork(parameter_t *parameter, int index);
    int special_param_lfork(parameter_t *parameter, int index);
    int special_param_ldi(parameter_t *parameter, int index);
    int special_param_lldi(parameter_t *parameter, int index);
    int special_param_sti(parameter_t *parameter, int index);

    int execute_instruction(app_t *app, champion_t *champion,
        parameter_t **parameters, int instruction);
    int load_value(mem_find_t info, int idx_mod, int size);

    int modify_carry(champion_t *champion, int res);

    int instruction_ld(app_t *, champion_t *, parameter_t **);
    int instruction_lld(app_t *, champion_t *, parameter_t **);
    int instruction_st(app_t *, champion_t *, parameter_t **);

    int instruction_ldi(app_t *, champion_t *, parameter_t **);
    int instruction_lldi(app_t *, champion_t *, parameter_t **);
    int instruction_sti(app_t *, champion_t *, parameter_t **);


    int instruction_add(app_t *, champion_t *, parameter_t **);
    int instruction_sub(app_t *, champion_t *, parameter_t **);
    int instruction_and(app_t *, champion_t *, parameter_t **);
    int instruction_or(app_t *, champion_t *, parameter_t **);
    int instruction_xor(app_t *, champion_t *, parameter_t **);

    int instruction_zjmp(app_t *, champion_t *, parameter_t **);
    int instruction_aff(app_t *, champion_t *, parameter_t **);
    int instruction_live(app_t *, champion_t *, parameter_t **);

    int instruction_fork(app_t *, champion_t *, parameter_t **);
    int instruction_lfork(app_t *, champion_t *, parameter_t **);

#endif //APP_H_
