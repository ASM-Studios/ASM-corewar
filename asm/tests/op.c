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

Test(op_linked_list, creation) {
    op_constructor_t *initial_node = NULL;
    op_t op = linker("live");
    append_node(&initial_node, op);
    cr_assert_not_null(initial_node);
    cr_assert_null(initial_node->next);
    cr_assert_eq(initial_node->op.code, 1);
}

Test(op_linked_list, append) {
    op_constructor_t *initial_node = NULL;
    op_t op = linker("live");
    append_node(&initial_node, op);
    op = linker("ld");
    append_node(&initial_node, op);
    cr_assert_not_null(initial_node);
    cr_assert_not_null(initial_node->next);
    cr_assert_null(initial_node->next->next);
    cr_assert_eq(initial_node->op.code, 1);
    cr_assert_eq(initial_node->next->op.code, 2);
}

Test(op_linked_list, append_big) {
    op_constructor_t *initial_node = NULL;
    op_t op = linker("live");
    append_node(&initial_node, op);
    op = linker("ld");
    append_node(&initial_node, op);
    op = linker("st");
    append_node(&initial_node, op);

    cr_assert_not_null(initial_node);
    cr_assert_not_null(initial_node->next);
    cr_assert_not_null(initial_node->next->next);
    cr_assert_null(initial_node->next->next->next);
    cr_assert_eq(initial_node->op.code, 1);
    cr_assert_eq(initial_node->next->op.code, 2);
    cr_assert_eq(initial_node->next->next->op.code, 3);
}
