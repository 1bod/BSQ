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

static int free_and_exit(char **map, char *message)
{
    for (int i = 0; map[i][0] != '\0'; i++) {
        free(map[i]);
    }
    free(map);
    my_perror("Invalid map format\n");
    return (84);
}

static int check_char(char **map, char c)
{
    if (c != '.' && c != 'o' && c != '\0') {
        return 84;
    }
    return 0;
}

int check_map(char **map)
{
    int row_count = 0;
    int col_count;
    int err = 0;
    if (map[0][0] == '\0' || map[0][0] == '\n') {
        return free_and_exit(map, "Invalid map format\n");
    }
    for (int y = 1; map[y][0] != '\0'; y++) {
        row_count++;
        col_count = 0;
        while (map[y][col_count] != '\0') {
            err += check_char(map, map[y][col_count++]);
        }
        if (col_count != my_strlen(map[1]) || err != 0) {
            return free_and_exit(map, "Invalid map format\n");
        }
    }
    if (row_count != my_getnbr(map[0])) {
        return free_and_exit(map, "Invalid map format\n");
    }
    return 0;
}
