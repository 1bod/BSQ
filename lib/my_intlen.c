/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_intlen
*/

int my_intlen(int number)
{
    int len = 1;
    number = (number > 0 ? number : number * -1);

    for (unsigned int i = 0; number >= 10; i = i + 1) {
        number = number / 10;
        len = len + 1;
    }
    return len;
}
