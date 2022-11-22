/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** file_loading
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "bsq.h"


/**
 *@brief Load the map in memory
 *
 * @param filepath The path to the map
 * @return char* The map in memory
 */
char *load_file_in_mem(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat st;
    char *map;

    if (fd < 0) {
        return NULL;
    }
    stat(filepath, &st);
    map = malloc(sizeof(char) * (st.st_size + 1));
    if (map == NULL) {
        return NULL;
    }
    read(fd, map, st.st_size);
    map[st.st_size] = '\0';
    close(fd);
    return map;
}

char **load_2d_array_from_file(char const *filepath)
{
    char *flat_file = load_file_in_mem(filepath);
    char **file = str_to_2d_array(flat_file);
    free(flat_file);
    return file;
}
