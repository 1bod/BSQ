/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** bsq_file
*/

#include <fcntl.h>
#include "bsq.h"
#include "my.h"

static int simple_getnbr(const char *str)
{
    int result = str[0] - '0';

    for (int i = 1; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

int bsq_file(const char *path)
{
    char **full_file = load_2d_array_from_file(path);
    check_map(full_file);
    int nb_rows = simple_getnbr(full_file[0]);
    int nb_cols = my_strlen(full_file[1]);
    bsq_t bsq = run_bsq_algo(full_file, nb_rows, nb_cols);
    display_bsq(bsq, full_file, nb_rows, nb_cols);
    return 0;
}
