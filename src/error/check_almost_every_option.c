/*
** EPITECH PROJECT, 2021
** FASTATools
** File description:
** check_almost_every_option
*/

#include "../../include/struct.h"

int check_almost_every_option(char **av)
{
    if (strlen(av[1]) != 1)
        return (84);
    if (av[1][0] < '1' || av[1][0] > '7' || av[1][0] == '4')
        return (84);
    return (0);
}