/*
** EPITECH PROJECT, 2018
** my compute factorial rec
** File description:
** factorial in recursivity
*/

#include "my.h"

static int factorial_rec(int fact, int nb, int i)
{
    if (i < nb + 1)
        factorial_rec(fact * i, nb, i + 1);
    else
        return (fact);
}

int my_compute_factorial_rec(int nb)
{
    int fact = 1;
    int i = 1;
    
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (factorial_rec(fact, nb, i));
}
