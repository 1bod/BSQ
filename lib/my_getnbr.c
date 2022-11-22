/*
** EPITECH PROJECT, 2022
** Day_04
** File description:
** Task 05 - my_getnbr
*/

#include <stdbool.h>
#include <stdlib.h>
#include "my.h"

bool valid_get_nbr(char c)
{
    bool is_num = (c >= '0' && c <= '9');
    bool is_sign = (c == '-' || c == '+');

    return is_num || is_sign;
}

int my_to_nbr(char const *str)
{
    int i = 0;
    int result = 0;
    bool is_positive = true;
    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') {
            is_positive = (is_positive ? false : true);
        }
        i = i + 1;
    }
    while (str[i] != '\0') {
        result = (result * 10) + (str[i] - '0');
        i = i + 1;
    }
    return (is_positive ? result : (result * -1));
}

int my_getnbr(char const *str)
{
    int i = 0;
    char *result = malloc(sizeof(char) * (my_strlen(str) + 1));
    int res;
    result[0] = '\0';
    while (str[i] != '\0' && valid_get_nbr(str[i])) {
        result[i + 1] = '\0';
        result[i] = str[i];
        i = i + 1;
    }
    res = my_to_nbr(result);
    free(result);
    return res;
}
