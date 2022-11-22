/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** 2d_array_tools
*/

#include <stdlib.h>
#include <unistd.h>

int get_line_count(const char *str)
{
    int line_count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            line_count++;
        }
    }
    return line_count;
}

int *get_line_length(char *str)
{
    int *lines_length = malloc(sizeof(int) * get_line_count(str));
    int current_len = 0;
    int line_index = 0;

    if (lines_length == NULL) {
        return NULL;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            lines_length[line_index] = current_len;
            current_len = 0;
            line_index++;
        } else {
            current_len++;
        }
    }
    return lines_length;
}

char **alloc_2d_array(char *str)
{
    int *lines_length = get_line_length(str);
    int lines = get_line_count(str);
    char **result = malloc(sizeof(char *) * (lines + 1));
    int line_index = 0;

    if (result == NULL) {
        return NULL;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            result[line_index] = malloc(
                    sizeof(char) * (lines_length[line_index] + 1));
            line_index++;
        }
    }
    result[lines] = "\0";
    free(lines_length);
    return result;
}

char **str_to_2d_array(char *str)
{
    char **result = alloc_2d_array(str);
    int i = 0;

    for (int pos_y = 0; str[i] != '\0'; pos_y++) {
        for (int pos_x = 0; str[i] != '\0' && str[i] != '\n'; pos_x++) {
            result[pos_y][pos_x] = str[i];
            result[pos_y][pos_x + 1] = '\0';
            i++;
        }
        i++;
    }
    return result;
}
