/*
** EPITECH PROJECT, 2018
** main .c
** File description:
** main.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
//    printf("%d\n", my_compute_square_root(atoi(av[1])));
    printf("%d\n", count_valid_queens_placements(atoi(av[1])));
}
