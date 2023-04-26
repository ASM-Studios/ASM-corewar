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

Test(create_resources, app) {
    app_t *app = create_app();
    cr_assert_not_null(app);
}

Test(create_resources, null_app) {
    app_t *app = create_app();
    cr_assert_not_null(app);
}
