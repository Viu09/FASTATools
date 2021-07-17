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

#endif /* !STRUCT_H_ */