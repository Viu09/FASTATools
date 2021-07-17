/*
** EPITECH PROJECT, 2021
** FASTATools
** File description:
** init_struct
*/

#include "../../include/struct.h"

data_t init_struct(char **av, data_t data)
{
    data.option = atoi(av[1]);
    data.content = NULL;
    data.seq1 = NULL;
    data.seq2 = NULL;

    if (data.option == 4)
        data.kmers = atoi(av[2]);
    else
        data.kmers = 0;
    return (data);
}