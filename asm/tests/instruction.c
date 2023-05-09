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

Test(lld, basic) {
    parameter_t *param = create_parameter("r5", Register);
    int status = check_param(param, 13, 1);
    cr_assert_eq(status, 0);
}

Test(lld, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 13, 1);
    cr_assert_eq(status, 84);
}

Test(lldi, basic) {
    parameter_t *param = create_parameter("r5", Direct);
    parameter_t *param_2 = create_parameter("%215", Direct);
    parameter_t *param_3 = create_parameter("%215", Register);
    int status = check_param(param, 14, 0);
    cr_assert_eq(status, 0);
    status = check_param(param_2, 14, 1);
    cr_assert_eq(status, 0);
    status = check_param(param_3, 14, 2);
    cr_assert_eq(status, 0);
    cr_assert(param_2->is_index = 1);
}

Test(lldi, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 14, 2);
    cr_assert_eq(status, 84);
}

Test(bop, basic) {
    parameter_t *param = create_parameter("r5", Register);
    int status = check_param(param, 4, 0);
    cr_assert_eq(status, 0);
}

Test(bop, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 4, 2);
    cr_assert_eq(status, 84);
}

Test(st, basic) {
    parameter_t *param = create_parameter("r5", Register);
    int status = check_param(param, 3, 0);
    cr_assert_eq(status, 0);
}

Test(st, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 3, 0);
    cr_assert_eq(status, 84);
}

Test(sti, basic) {
    parameter_t *param = create_parameter("r5", Register);
    parameter_t *param_2 = create_parameter("%215", Direct);
    parameter_t *param_3 = create_parameter("%215", Register);
    int status = check_param(param, 11, 0);
    cr_assert_eq(status, 0);
    status = check_param(param_2, 11, 1);
    cr_assert_eq(status, 0);
    status = check_param(param_3, 11, 2);
    cr_assert_eq(status, 0);
    cr_assert(param_2->is_index = 1);
}

Test(sti, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 3, 0);
    cr_assert_eq(status, 84);
}

Test(aff, basic) {
    parameter_t *param = create_parameter("r5", Register);
    int status = check_param(param, 16, 0);
    cr_assert_eq(status, 0);
}

Test(aff, bad_args) {
    parameter_t *param = create_parameter("r5", Direct);
    int status = check_param(param, 16, 0);
    cr_assert_eq(status, 84);
}
