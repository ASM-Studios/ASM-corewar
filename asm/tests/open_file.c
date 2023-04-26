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
    char path[] = "./tests/test_file.s";
    int status = 0;
    app_t app = {NULL, NULL};
    status = open_file(&app, path);
    cr_assert_eq(status, 0);
}

Test(open_file, inexisting_file) {
    char path[] = "qmlskd";
    int status = 0;
    app_t app = {NULL, NULL};
    status = open_file(&app, path);
    cr_assert_eq(status, 84);
}
