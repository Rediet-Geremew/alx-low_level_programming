#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the concatenated string or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
        char *result;
        int i, j, k, len = 0;

        if (ac == 0 || av == NULL)
        {
            return (NULL);
        }
        for (i = 0; i < ac; i++)
        {
            for (j = 0; av[i][j] != '\0'; j++)
            {
                len++;
            }
            len++;
        }
        len++;
        result = malloc(len * sizeof(char));
        if (result == NULL)
        {
            return (NULL);
        }
        k = 0;
        for (i = 0; i < ac; i++)
        {
            for (j = 0; av[i][j] != '\0'; j++)
            {
                result[k] = av[i][j];
                k++;
            }
            result[k] = '\n';
            k++;
        }
        result[k] = '\0';
        return (result);
}
