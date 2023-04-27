/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** open_file.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void);

Test(open_file, basic) {
    char path[] = "./tests/tests_file/basic.s";
    int status = 0;
    app_t app = {NULL, NULL};
    status = open_file(&app, path);
    cr_assert_eq(status, 0);
}

Test(open_file, invalid_extension) {
    char path[] = "./tests/tests_file/no_extension";
    FILE *fp = fopen(path, "r");
    cr_assert_not_null(fp);
    int status = 0;
    app_t app = {NULL, NULL};
    status = open_file(&app, path);
    cr_assert_eq(status, 84);
}

Test(open_file, inexisting_file) {
    char path[] = "qmlskd";
    int status = 0;
    app_t app = {NULL, NULL};
    status = open_file(&app, path);
    cr_assert_eq(status, 84);
}

Test(close_file, no_file) {
    app_t app = {NULL, NULL};
    int status = close_file(&app);
    cr_assert_eq(status, 0);
}

Test(close_file, basic) {
    FILE *fp_1 = fopen("./tests/tests_file/basic.s", "r");
    FILE *fp_2 = fopen("./tests/tests_file/basic.s", "r");
    cr_assert_not_null(fp_1);
    cr_assert_not_null(fp_2);
    app_t app = {fp_1, fp_2};
    int status = close_file(&app);
    cr_assert_null(app.input);
    cr_assert_null(app.output);
    cr_assert_eq(status, 0);
}
