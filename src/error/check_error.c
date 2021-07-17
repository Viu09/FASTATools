/*
** EPITECH PROJECT, 2021
** FASTATools
** File description:
** check_error
*/

#include "../../include/struct.h"

int check_error(int ac, char **av)
{
    int result = 0;

    switch (ac) {
    case 2:
        result = check_almost_every_option(av);
        break;
    case 3:
        result = check_option_four(av);
        break;
    default:
        result = 84;
        break;
    }
    return (result);
}