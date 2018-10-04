/*
** EPITECH PROJECT, 2018
** my compute power it 
** File description:
** power in iterative mode
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int i = 1;
    int pow = nb;

    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    while (i != p) {
        pow *= nb;
        i += 1;
    }
    return (pow);
}
