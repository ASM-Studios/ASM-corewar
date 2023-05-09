/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instruction.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(fork, basic) {
    parameter_t *param = create_parameter("%215", Direct);
    check_param(param, 12, 0);
    cr_assert_eq(param->is_index, 1);
}

Test(lfork, basic) {
    parameter_t *param = create_parameter("%215", Direct);
    check_param(param, 15, 0);
    cr_assert_eq(param->is_index, 1);
}

Test(zjmp, basic) {
    parameter_t *param = create_parameter("%215", Direct);
    check_param(param, 9, 0);
    cr_assert_eq(param->is_index, 1);
}

Test(ld, basic) {
    parameter_t *param = create_parameter("r5", Register);
    int status = check_param(param, 2, 1);
    cr_assert_eq(status, 0);
}

Test(ld, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 2, 1);
    cr_assert_eq(status, 84);
}

Test(ldi, basic) {
    parameter_t *param = create_parameter("r5", Register);
    parameter_t *param_2 = create_parameter("%215", Direct);
    check_param(param, 10, 0);
    check_param(param_2, 10, 1);
    cr_assert_eq(param->is_index, 0);
    cr_assert_eq(param_2->is_index, 1);
}

Test(ldi, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 10, 2);
    cr_assert_eq(status, 84);
}
