/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bsq_algo
*/

#include <unistd.h>
#include <stdbool.h>
#include "bsq.h"

bool is_valid_square_line(char **map, int line, int x, int size)
{
    for (int ch = x; ch <= x + size - 1; ch++) {
        if (map[line][ch] != '.') {
            return false;
        }
    }
    return true;
}

/**
 *@brief assetrs if a square exists
 *
 * @param map
 * @param y
 * @param x
 * @param size
 * @return bool
 */
bool is_square_of_size(char **map, int y, int x, int size)
{
    for (int line = y; line <= (y + size - 1); line++) {
        if ((!is_valid_square_line(map, line, x, size))
            || map[line][0] == '\0') {
            return false;
        }
    }
    return true;
}

/**
 *@brief Finds the biggest square in a map at a given position
 *
 * @param map
 * @param row
 * @param col
 * @return int
 */
int find_biggest_square(char **map, int row, int col)
{
    int size = 1;

    while (is_square_of_size(map, row, col, size)) {
        size++;
    }
    return size - 1;
}

void compare_squares(bsq_t *biggest_square, int y, int x, int new_size)
{
    if (new_size > biggest_square->size) {
        biggest_square->pos_y = y;
        biggest_square->pos_x = x;
        biggest_square->size = new_size;
    }
}

bsq_t run_bsq_algo(char **map, int nb_rows, int nb_cols)
{
    bsq_t biggest_square = {0, 0, 0};

    for (int y = 1; y < nb_rows; y++) {
        for (int x = 0; x < nb_cols; x++) {
            compare_squares(&biggest_square, y, x,
                            find_biggest_square(map, y, x));
        }
    }
    return biggest_square;
}
