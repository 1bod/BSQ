/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** my_perror
*/

#include <unistd.h>

int my_strlen(char const *str);

/**
 *@brief Prints an error message
 *
 * @param str The error message to be printed
 */
void my_perror(const char *str)
{
    if (str != NULL && str[0] != '\0') {
        write(2, str, my_strlen(str));
    }
}
