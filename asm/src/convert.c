/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** convert.c
*/

#include "../include/prototype.h"

STATIC int little_endian_converter_2(int number)
{
    int swapped = 0;

    swapped = (((number & 0xFF) << 8) |
        ((number & 0xFF00) >> 8));
    return swapped;
}

STATIC int little_endian_converter_4(int number)
{
    int swapped = 0;

    swapped = ((number >> 24)&0xff) |
        ((number << 8)&0xff0000) |
        ((number >> 8)&0xff00) |
        ((number << 24)&0xff000000);
    return swapped;
}

int little_endian_converter(int number, int size)
{
    switch (size) {
        case 2:
            return little_endian_converter_2(number);
        case 4:
            return little_endian_converter_4(number);
        default:
            return 0;
    }
    return 0;
}
