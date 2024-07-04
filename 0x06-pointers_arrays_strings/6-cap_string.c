#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */

int is_separator(char c)
{
        char separators[] = " \t\n,;.!?\"(){}";
        int i;

        for (i = 0; separators[i] != '\0'; i++)
        {
            if (c == separators[i])
            {
                return (1);
            }
        }
        return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 *
 * Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
        char *ptr = str;
        int capitalize_next = 1;

        while (*ptr != '\0')
        {
            if (is_separator(*ptr))
            {
                capitalize_next = 1;
            }
            else if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
            {
                *ptr = *ptr - ('a' - 'A');
                capitalize_next = 0;
            }
            else
            {
                capitalize_next = 0;
            }
            ptr++;
        }

        return (str);
}
