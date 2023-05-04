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

Test(parser, no_line) {
    app_t *app = create_app();
    open_file(app, "./tests/tests_file/basic.s");
    int no_line = get_no_line(app);
    cr_assert_eq(no_line, 7);
}

Test(parser, no_comment) {
    app_t *app = create_app();
    open_file(app, "./tests/tests_file/no_comment.s");
    int status = parser(app);
    cr_assert_eq(status, 84);
}

Test(parser, bad_comment) {
    app_t *app = create_app();
    open_file(app, "./tests/tests_file/bad_comment.s");
    int status = parser(app);
    cr_assert_eq(status, 84);
}
