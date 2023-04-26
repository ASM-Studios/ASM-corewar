/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** file_manipulation.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void);

Test(get_basename, basic) {
    char path[] = "basename.s";
    char *base = get_basename(path);
    cr_assert_str_eq(base, "basename");
}

Test(get_basename, no_suffix) {
    char path[] = "basename";
    char *base = get_basename(path);
    cr_assert_str_eq(base, "basename");
}

Test(get_basename, only_suffix) {
    char path[] = ".s";
    char *base = get_basename(path);
    cr_assert_str_eq(base, "");
}

Test(change_suffix, basic) {
    char path[] = "basename.s";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, "basename.cor");
}

Test(change_suffix, no_suffix) {
    char path[] = "basename";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, "basename.cor");
}

Test(change_suffix, only_suffix) {
    char path[] = "";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, ".cor");
}
