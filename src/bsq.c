/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** bsq
*/

#include "bsq.h"
#include "my.h"

static int start_bsq_file(const char *const *argv)
{
    switch (check_file_error(argv[1])) {
        case 1:
            my_perror("cannot access '");
            my_perror(argv[1]);
            my_perror("': No such file or directory\n");
            return (84);
        case 2:
            my_perror("cannot access '");
            my_perror(argv[1]);
            my_perror("': Permission denied\n");
            return (84);
        default:
            return bsq_file(argv[1]);
    }
}

static int start_bsq_gen(const char *const *argv)
{
    int arg1 = my_getnbr(argv[1]);

    if (arg1 < 1) {
        my_perror("Invalid board size\n");
        return 84;
    }
    if (argv[2][0] == '\0') {
        my_perror("Invalid pattern\n");
    }
    for (int i = 0; argv[2][i] != '\0'; i++) {
        if (argv[2][i] != '.' && argv[2][i] != 'o') {
            my_perror("Invalid pattern\n");
            return 84;
        }
    }
    return bsq_gen(arg1, argv[2]);
}

int main(int argc, char const *argv[])
{
    if (argc < 2) {
        my_perror("Usage:\t./bsq FILE\n\t./bsq SIZE PATTERN\n");
        return (84);
    }
    if (argc == 2) {
        return start_bsq_file(argv);
    }
    if (argc == 3) {
        return start_bsq_gen(argv);
    }
    if (argc > 3) {
        my_perror("Too much parameters given\n");
        return (84);
    }
    return 84;
}
