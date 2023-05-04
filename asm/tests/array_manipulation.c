/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** split.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(trailing_space, no_return) {
    char line[] = "this is line";
    remove_trailing_space(line);
    cr_assert_str_eq(line, "this is line");
}

Test(trailing_space, with_return) {
    char line[] = "    this is line\n";
    remove_trailing_space(line);
    cr_assert_str_eq(line, "this is line");
}

Test(trailing_space, empty) {
    char string[] = "";
    int status = remove_trailing_space(string);
    cr_assert_str_eq(string, "");
}

Test(split, basic) {
    char line[] = "this is line";
    char **array = split(line, ' ');
    cr_assert_str_eq(array[0], "this");
    cr_assert_str_eq(array[1], "is");
    cr_assert_str_eq(array[2], "line");
    cr_assert_null(array[3]);
    free_double_array(array);
}

Test(split, multiple_space) {
    char line[] = "  hello   this  ";
    char **array = split(line, ' ');
    cr_assert_str_eq(array[0], "hello");
    cr_assert_str_eq(array[1], "this");
    cr_assert_null(array[2]);
    free_double_array(array);
}

Test(split, empty) {
    char line[] = "";
    char **array = split(line, ' ');
    cr_assert_null(array[0]);
    free_double_array(array);
}



Test(len_array, basic) {
    char *array[10] = {"this", "is", "a", "line", NULL};
    int len = len_double_array(array);
    cr_assert_eq(len, 4);
}

Test(len_array, null) {
    char **array = NULL;
    int len = len_double_array(array);
    cr_assert_eq(len, 0);
}

Test(free_array, basic) {
    char **array = malloc(sizeof(char *) * 2);
    array[0] = my_strdup("test");
    array[1] = NULL;
    int status = free_double_array(array);
    cr_assert_eq(status, 0);
}

Test(free_array, null) {
    char **array = NULL;
    int status = free_double_array(array);
    cr_assert_eq(status, 0);
}

Test(print_array, basic, .init = redirect_all_std) {
    char *array[10] = {"this", "is", NULL};
    print_double_array(array);
    cr_assert_stdout_eq_str("this\nis\n");
}

Test(print_array, null) {
    char **array = NULL;
    int status = print_double_array(array);
    cr_assert_eq(status, 0);
}


Test(triple_len_array, basic) {
    char **array[10] = {{"this", "is", "a", NULL},
        {"this", "is", "a", NULL}, NULL};
    int len = len_triple_array(array);
    cr_assert_eq(len, 2);
}

Test(triple_len_array, null) {
    char **array = NULL;
    int len = len_double_array(array);
    cr_assert_eq(len, 0);
}

Test(triple_free_array, basic) {
    char **array = malloc(sizeof(char *) * 2);
    array[0] = my_strdup("test");
    array[1] = NULL;
    int status = free_double_array(array);
    cr_assert_eq(status, 0);
}

Test(triple_free_array, null) {
    char **array = NULL;
    int status = free_double_array(array);
    cr_assert_eq(status, 0);
}

Test(triple_print_array, basic, .init = redirect_all_std) {
    char *array[10] = {"this", "is"};
    print_double_array(array);
    cr_assert_stdout_eq_str("this\nis\n");
}

Test(triple_print_array, null) {
    char **array = NULL;
    int status = print_double_array(array);
    cr_assert_eq(status, 0);
}
