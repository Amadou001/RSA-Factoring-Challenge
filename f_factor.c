#include "factors.h"
#include "f_extern.h"

factors *list = NULL;
void f_factor(char *number, char **flag)
{
    unsigned long long numb;
    numb = strtoull(number, NULL, 10);
    create_node(&list, numb);
    if (*flag == NULL)
    {
        list_factors(&list);
    }

}
