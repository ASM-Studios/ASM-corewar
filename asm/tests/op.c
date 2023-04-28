/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** op.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/prototype.h"

void redirect_all_std(void);

Test(op, create_node) {
    op_t op = linker("live");
    op_constructor_t *node = create_node(op);
    cr_assert_not_null(node);
    destroy_node(node);
}

Test(op, linker) {
    op_t op = linker("live");
    cr_assert_eq(op.code, 1);
    cr_assert_str_eq(op.comment, "alive");
}

Test(op, no_link) {
    op_t op = linker("ratio");
    cr_assert_eq(op.code, 0);
    cr_assert_eq(op.comment, 0);
}
