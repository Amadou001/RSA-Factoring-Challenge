#include "factors.h"

void list_factors(factors **head)
{
    unsigned long long int i, j;
    factors *temp;

    if (*head == NULL)
    {
        fprintf(stderr, "List is empty\n");
        return; // Return or handle the error appropriately
    }

    temp = *head;

    while (temp != NULL)
    {

        for (i = 2; i * i <= temp->number; i++)
        {
            if (temp->number % i == 0)
            {
                j = temp->number / i;
                printf("%llu=%llu*%llu\n", temp->number, j, i);
                break;
            }
        }

        temp = temp->next;
    }
}
