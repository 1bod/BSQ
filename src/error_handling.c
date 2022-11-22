/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** error_handling
*/

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int check_file_error(const char *path)
{
    int fd = open(path, O_RDONLY);
    close(fd);

    if (fd == -1 && (errno == ENOENT || errno == EBADF)) {
        return 1;
    }
    if (fd == -1 && errno == EACCES) {
        return 2;
    }
    return 0;
}

static int simple_getnbr(const char *str)
{
    int result = str[0] - '0';

    for (int i = 1; str[i] != '\0'; i++) {
        result = result * 10 + (str[i] - '0');
    }
    return result;
}

void check_map(char **map)
{
    int row_count = 0;
    int real_col_count = my_strlen(map[1]);
    int col_count;

    for (int y = 1; map[y][0] != '\0'; y++) {
        row_count++;
        col_count = 0;
        while (map[y][col_count] != '\0') {
            col_count++;
        }
        if (col_count != real_col_count) {
            my_perror("Invalid map format\n");
            exit(84);
        }
    }
    if (row_count != simple_getnbr(map[0])) {
        my_perror("Invalid map format\n");
        exit(84);
    }
}
