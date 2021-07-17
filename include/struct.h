/*
** EPITECH PROJECT, 2021
** FASTA [WSL: Ubuntu-20.04]
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct data_s
{
    int option;
    char *content;
    char *seq1;
    char *seq2;
    int kmers;
} data_t;

// src/display/

void display_usage(void);

// src/error/

int check_error(int ac, char **av);
int check_option_four(char **av);
int verif_if_there_is_only_number(char *kmers);
int check_almost_every_option(char **av);

// src/run/

data_t init_struct(char **av, data_t data);

#endif /* !STRUCT_H_ */