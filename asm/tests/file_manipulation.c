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
    free(base);
}

Test(get_basename, no_suffix) {
    char path[] = "basename";
    char *base = get_basename(path);
    cr_assert_str_eq(base, "basename");
    free(base);
}

Test(get_basename, not_in_dir) {
    char path[] = "./tests/tests_file/basic.s";
    char *base = get_basename(path);
    cr_assert_str_eq(base, "./tests/tests_file/basic");
    free(base);
}

Test(get_basename, no_file_no_extension) {
    char path[] = "./tests/tests_file/basic";
    char *base = get_basename(path);
    cr_assert_str_eq(base, "./tests/tests_file/basic");
    free(base);
}

Test(change_suffix, basic) {
    char path[] = "basename.s";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, "basename.cor");
    free(new_path);
}

Test(change_suffix, no_suffix) {
    char path[] = "basename";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, "basename.cor");
    free(new_path);
}

Test(change_suffix, not_in_dir) {
    char path[] = "./tests/file";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, "./tests/file.cor");
    free(new_path);
}

Test(change_suffix, only_suffix) {
    char path[] = "";
    char *new_path = change_suffix(path, ".cor");
    cr_assert_str_eq(new_path, ".cor");
    free(new_path);
}

Test(get_suffix, basic) {
    char path[] = "test.s";
    char *suffix = get_suffix(path);
    cr_assert_str_eq(suffix, ".s");
    free(suffix);
}

Test(get_suffix, not_in_dir) {
    char path[] = "./test/test.s";
    char *suffix = get_suffix(path);
    cr_assert_str_eq(suffix, ".s");
    free(suffix);
}

Test(get_suffix, hidden_file) {
    char path[] = ".git";
    char *suffix = get_suffix(path);
    cr_assert_null(suffix);
}

Test(get_suffix, no_suffix) {
    char path[] = "./test/test";
    char *suffix = get_suffix(path);
    cr_assert_null(suffix);
}

Test(get_filename, basic) {
    char path[] = "./test/test.s";
    char *new_path = get_filename(path);
    cr_assert_str_eq(new_path, "test.s");
}

Test(get_filename, no_folder) {
    char path[] = "test.s";
    char *new_path = get_filename(path);
    cr_assert_str_eq(new_path, "test.s");
}
