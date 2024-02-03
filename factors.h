#ifndef FACTORS_H
#define FACTORS_H
#define MAX_BUFFER_SIZE 1024
#include <stdio.h>
#include <stdlib.h>

typedef struct factors
{
    unsigned long long int number;
    struct factors *next;
    struct factors *prev;
}factors;

void f_factor(char *number, char **flag);
void list_factors(factors **head);
void create_node(factors **head, unsigned long long int number);


#endif