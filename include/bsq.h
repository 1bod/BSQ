/*
** EPITECH PROJECT, 2022
** B-CPE-110-BDX-1-1-BSQ-maxence.raynal
** File description:
** bsq
*/

#ifndef BSQ_H_
    #define BSQ_H_

    typedef struct bsq_s {
        int pos_y;
        int pos_x;
        int size;
    } bsq_t;


    int check_file_error(const char *path);
    int bsq_gen(int size, const char *pattern);
    int bsq_file(const char *path);
    char **str_to_2d_array(char *str);
    char **load_2d_array_from_file(char const *filepath);
    bsq_t run_bsq_algo(char **map, int nb_rows, int nb_cols);

#endif /* !BSQ_H_ */
