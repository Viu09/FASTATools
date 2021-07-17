/*
** EPITECH PROJECT, 2021
** FASTATools
** File description:
** check_option_four
*/

#include "../../include/struct.h"

int check_option_four(char **av)
{
    if (strlen(av[1]) != 1 || av[1][0] != '4')
        return (84);
    if (verif_if_there_is_only_number(av[2]) == 84)
        return (84);
    return (0);
}