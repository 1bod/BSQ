/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** bsq_gen
*/

#include <stdlib.h>
#include "my.h"

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

static void put_size(int size, char **str)
{
    int pow;
    int res = size;
    int i = 0;

    if (size < 0) {
        my_putchar('-');
    }
    for (int len = my_intlen(size); len > 0; len--) {
        pow = power(10, (len - 1));
        size = res / pow;
        *str[i] = size + '0';
        res = res - (size * pow);
        i++;
    }
    //*str[i] = '\n';
}

int bsq_gen(int size, const char *pattern)
{
    int n_counter = 0;
    int total_n_counter = 0;
    char *flat_map = malloc(sizeof(char) *
        (size * size + size + my_intlen(size) + 2));

    put_size(size, &flat_map);
    if (flat_map == NULL) {
        return NULL;
    }
    for (int i = 0; i < size * size + size; i++) {
        flat_map[i] = pattern[(i - total_n_counter) % my_strlen(pattern)];
        n_counter++;
        if (n_counter == size) {
            n_counter = 0;
            total_n_counter++;
            i++;
            flat_map[i] = '\n';
        }
    }
    flat_map[size * size + size] = '\0';
    printf(flat_map);
}
