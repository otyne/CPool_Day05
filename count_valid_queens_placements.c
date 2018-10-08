/*
** EPITECH PROJECT, 2018
** count valid queens placements
** File description:
** smae
*/

#include "my.h"

static int board_different(int *chess, int nb)
{
    int i = 0;
    int k = i + 1;

    while (i != nb - 1) {
        if (chess[k] == chess[i])
            return (0);
        k += 1;
        if (k == nb) {
            i += 1;
            k = i + 1;
        }
    }
    return (1);
}

static int left_to_right(int *chess, int nb)
{
    int i = 0;
    int k = i + 1;

    while (i != nb && k != nb) {
        if (i + chess[k] == k + chess[i])
            return (0);
        k += 1;
        if (k == nb) {
            i += 1;
            k = i + 1;
        }
    }
    return (1);
}

static int right_to_left(int *chess, int nb)
{
    int i = 0;
    int k = i + 1;

    while (i != nb && k != nb) {
        if (i - chess[k] == k - chess[i])
            return (0);
        k += 1;
        if (k == nb) {
            i += 1;
            k = i + 1;
        }
    }
    return (1);
}

static int create_possibilities(int *chess, int nb, int rec, int poss)
{
    int i = 0;

    if (rec != nb + 1) {
        for (i = 0; i != nb; i ++) {
            chess[rec] = i;
            poss = create_possibilities(chess, nb, rec + 1, poss);
        }
    }
    if (rec == nb) {
        if (board_different(chess, nb) == 1 &&
            left_to_right(chess, nb) == 1 &&
            right_to_left(chess, nb) == 1) {
            poss += 1;
        }
    }
    return (poss);
}

int count_valid_queens_placements(int nb)
{
    int poss = 0;
    int rec = 0;
    int chess[nb];

    poss = create_possibilities(chess, nb, rec, poss);
    return (poss);
}
