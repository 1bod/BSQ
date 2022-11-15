/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** my_strlen
*/

#include <unistd.h>

/**
 *@brief Returns the length of a string
 *
 * @param str The string to be measured
 * @return int The length of the string
 */
int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0' && str != NULL) {
        i++;
    }
    return (i);
}
