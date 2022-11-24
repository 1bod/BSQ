/*
** EPITECH PROJECT, 2022
** Day_04
** File description:
** Task 02 - my_putstr
*/

#include "my.h"

/**
 *@brief Prints a string
 *
 * @param str The string to print
 * @return int The number of characters printed
 */
int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return i;
}
