/*
** EPITECH PROJECT, 2022
** Libmy
** File description:
** my_putchar
*/

#include <unistd.h>

/**
 *@brief Prints a character
 *
 * @param c The character to print
 */
void my_putchar(char c)
{
    write(1, &c, 1);
}
