/*
** EPITECH PROJECT, 2018
** my compute factorial it .c
** File description:
** return factorial
*/

#include "my.h"

int my_compute_factorial_it(int nb)
{
    int i = 1;
    int fact = 1;
    
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    while (i != nb + 1) {
        fact *= i;
        i+=1;
    }
    return (fact);
}
