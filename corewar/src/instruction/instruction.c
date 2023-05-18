/*
** EPITECH PROJECT, 2023
** ASM-corewar
** File description:
** instruction.c
*/

#include "../../include/prototype.h"

int instruction(app_t *app, champion_t *champion)
{
    int array[4] = {0};
    unsigned char instruction = 0;
    unsigned int bytecode = 0;

    fread(&instruction, 1, 1, champion->cor_file);
    my_printf("Instruction: %d\n", instruction);
    if (instruction != 1 && instruction != 9 && instruction != 12 &&
        instruction != 15) {
        fread(&bytecode, 1, 1, champion->cor_file);
        printf("Bytecode: %d\n", bytecode);
        extract_bytecode(bytecode, array);
        for (int i = 0; i < 4; i++)
            printf("%d\n", array[i]);
    }
    return 0;
}
