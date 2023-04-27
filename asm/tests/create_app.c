/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** create_app.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void);

Test(create_app, app) {
    app_t *app = create_app();
    cr_assert_not_null(app);
    destroy_app(app);
}

Test(create_app, null_app) {
    app_t *app = create_app();
    cr_assert_not_null(app);
    destroy_app(app);
}

Test(destroy_app, basic) {
    app_t *app = create_app();
    int status = destroy_app(app);
    cr_assert_eq(status, 0);
}
