/*
** EPITECH PROJECT, 2021
** FASTA [WSL: Ubuntu-20.04]
** File description:
** main
*/

#include "include/struct.h"

int main(int ac, char **av)
{
    data_t data;
    if (ac == 2 && (strcmp(av[1], "-h") == 0)) {
        display_usage();
        return (0);
    }
    if (check_error(ac, av) == 84)
        return (84);
    data = init_struct(av, data);
    return (0);
}