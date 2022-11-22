/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bsq_algo
*/

#include <unistd.h>
#include <stdbool.h>
#include "bsq.h"

bool is_valid_square_line(char **map, int line, int x, int size) {
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
    for (int line = y; line <= (y + size - 1) ; line++) {
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

}

bsq_t run_bsq_algo(char **map, int nb_rows, int nb_cols)
{
    bsq_t biggest_square = { 0, 0, 0 };

    int x = 2;
    int y = 3;

    //printf("is_square_of_size(x=%i, y=%i) = %i\n", x, y, is_square_of_size(map, y, x, 4));
    //printf("pos_y: %i; pos_x: %i; size: %i\n", biggest_square.pos_y,
    //       biggest_square.pos_x, biggest_square.size);
}
