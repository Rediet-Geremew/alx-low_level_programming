#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 */
char *_strdup(char *str)
{
        char *dup;
        unsigned int i, length;

        if (str == NULL)
        {
            return (NULL);
        }
        for (length = 0; str[length] != '\0'; length++)
        {    
            ;
        }
        dup = malloc((length + 1) * sizeof(char));
        if (dup == NULL)
        {
            return (NULL);
        }
        for (i = 0; i <= length; i++)
        {
            dup[i] = str[i];
        }

        return (dup);
}
