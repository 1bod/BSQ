/*
** EPITECH PROJECT, 2022
** BSQ [WSL: fedora]
** File description:
** tests_bsq_gen
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"
#include "bsq.h"

static void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(bsq_gen, size10_cover30, . init = redirect_all_std) {
    bsq_gen(10, "...ooo...");
    cr_assert_stdout_eq_str(
        "...oooxxx.\n"
        "..ooo.xxx.\n"
        ".ooo..xxx.\n"
        "ooo......o\n"
        "oo......oo\n"
        "o......ooo\n"
        "......ooo.\n"
        ".....ooo..\n"
        "....ooo...\n"
        "...ooo....\n");
}

Test(bsq_gen, size70_cover10101010, . init = redirect_all_std) {
    bsq_gen(70, ".o.o.o.o.");
    cr_assert_stdout_eq_str(
        "xo.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n"
        ".o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o\n"
        ".o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o.\n"
        ".o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.\n"
        "o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.\n"
        "o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.\n"
        "o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..\n"
        "o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o\n"
        "..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o\n"
        ".o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o.o.o..o.o\n");
}

Test(bsq_gen, fail1, . init = redirect_all_std) {
    bsq_gen(70, ".o.d.o.o.");
    cr_assert_stderr_eq_str("Invalid map format\n");
}
