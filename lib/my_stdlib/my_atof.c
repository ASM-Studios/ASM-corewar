/*
** EPITECH PROJECT, 2023
** base_repo
** File description:
** my_atof
*/

#include "prototype.h"

static int my_atof_extract_decimal(const char *src, const char **decimal)
{
    int i = 0;

    while (*(src + i) != '.') {
        i += 1;
    }
    *decimal = &src[i + 1];
    return i;
}

double my_atof(const char *src)
{
    int left_part = my_atoi(src);
    const char *str_right_part;
    int right_part = 0;
    int size_right_part = 0;
    double result = 0;

    my_atof_extract_decimal(src, &str_right_part);
    right_part = my_atoi(str_right_part);
    size_right_part = nb_size(right_part);
    result = (double)right_part;
    if (check_sanity_number(src) == 0)
        return 0;
    for (int i = 0; i < size_right_part; i++) {
        result /= 10;
    }
    result += (double)left_part;
    return result;
}
