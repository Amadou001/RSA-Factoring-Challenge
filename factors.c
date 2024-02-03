#include "factors.h"

int main(int ac, char **av)
{
    FILE *file;
    char *flag = NULL;
    char buffer[MAX_BUFFER_SIZE];
    if (ac != 2)
    {
        fprintf(stderr, "USAGE: factors file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(av[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "File opening failed\n");
        exit(EXIT_FAILURE);
    }
    while((flag = fgets(buffer, sizeof(buffer), file)) != NULL)
    {
         if (buffer[0] != '\n')
        {
             f_factor(buffer, &flag);
        }

    }
    f_factor(buffer, &flag);
    fclose(file);
    return 0;
}
