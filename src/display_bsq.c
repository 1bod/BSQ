/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** display_bsq
*/

#include "bsq.h"
#include "my.h"

void set_bsq_char(char *c, bsq_t *bsq, int x, int y)
{
    if (y >= bsq->pos_y && y < bsq->pos_y + bsq->size) {
        if (x >= bsq->pos_x && x < bsq->pos_x + bsq->size) {
            *c = 'x';
        }
    }
}

void display_bsq(bsq_t bsq, char **map, int nb_rows, int nb_cols)
{
    for (int y = 1; y <= nb_rows; y++) {
        for (int x = 0; x < nb_cols; x++) {
            set_bsq_char(&map[y][x], &bsq, x, y);
        }
        my_putstr(map[y]);
        my_putchar('\n');
    }
}
