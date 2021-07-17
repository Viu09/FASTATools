/*
** EPITECH PROJECT, 2021
** FASTATools
** File description:
** verif_if_there_is_only_number
*/

#include "../../include/struct.h"

int verif_if_there_is_only_number(char *kmers)
{
    int i = 0;

    for (; kmers[i] != '\0'; i++)
        if (kmers[i] < '0' || kmers[i] > '9')
            return (84);
    return (0);
}