/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** asm.c
*/

#include "../include/prototype.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void);

Test(asm, basic) {
    char path[] = "./tests/test_file.s";
    int status = asm_main(path);
    cr_assert_eq(status, 0);
}

Test(asm, bad_file) {
    char path[] = "./tests/test_file";
    int status = asm_main(path);
    cr_assert_eq(status, 84);
}

Test(asm, bad_extension) {
    char path[] = "./tests/test_file.c";
    int status = asm_main(path);
    cr_assert_eq(status, 84);
}
