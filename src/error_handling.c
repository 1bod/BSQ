/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** error_handling
*/

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

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
