/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** parser.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void);

Test(parser, basic) {
    app_t *app = create_app();
    open_file(app, "./tests/tests_file/basic.s");
    int status = parser(app);
    cr_assert_eq(status, 0);
}
