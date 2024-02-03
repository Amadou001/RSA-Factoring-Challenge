#include "factors.h"


void create_node(factors **head, unsigned long long int number)
{
    factors *temp, *new_node;
    new_node = (factors *)malloc(sizeof(factors));
    if (new_node == NULL)
    {
        fprintf(stderr, "node creation failed");
        exit(EXIT_FAILURE);
    }
    new_node->number = number;
    new_node->next = NULL;
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return;
    }
    temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->prev = temp;
    temp->next = new_node;
}
