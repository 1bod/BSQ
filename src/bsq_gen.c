/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** bsq_gen
*/

#include <stdlib.h>
#include "my.h"
#include "bsq.h"

static int power(int x, int y)
{
    int result = 1;
    int i = y;

    if (y == 0) {
        return (1);
    }
    while (i > 0) {
        i = i - 1;
        result = result * x;
    }
    return (result);
}

static void put_size(int size, char *str)
{
    int pow;
    int res = size;
    int i = 0;

    for (int len = my_intlen(size); len > 0; len--) {
        pow = power(10, (len - 1));
        size = res / pow;
        str[i] = size + '0';
        res = res - (size * pow);
        i++;
    }
    str[i] = '\n';
}

static char *generate_flat_map(int size, const char *pattern)
{
    int n_counter = 0;
    int total_n = 0;
    int offset = my_intlen(size) + 1;
    char *flat_map = malloc(sizeof(char) *
        (size * size + size + offset * 2 + 1));
    if (flat_map == NULL)
        return NULL;
    put_size(size, flat_map);
    for (int i = 0; i < size * size + size + offset; i++) {
        flat_map[i + offset] = pattern[(i - total_n) % my_strlen(pattern)];
        n_counter++;
        if (n_counter == size) {
            n_counter = 0;
            total_n++;
            i++;
            flat_map[i + offset] = '\n';
        }
    }
    flat_map[size * size + size + offset] = '\0';
    return flat_map;
}

int bsq_gen(int size, const char *pattern)
{
    char *flat_map = generate_flat_map(size, pattern);
    char **map = str_to_2d_array(flat_map);
    free(flat_map);
    if (check_map(map) == 84) {
        return 84;
    }
    bsq_t bsq = run_bsq_algo(map, size, size);
    display_bsq(bsq, map, size, size);
    for (int i = 0; i <= size; i++) {
        free(map[i]);
    }
    free(map);
    return 0;
}
