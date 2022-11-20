/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** bsq
*/

#ifndef BSQ_H_
    #define BSQ_H_
    int check_file_error(const char *path);
    int bsq_gen(int size, const char *pattern);
    int bsq_file(const char *path);
    char **str_to_2d_array(char *str);
    char **load_2d_array_from_file(char const *filepath);

#endif /* !BSQ_H_ */
