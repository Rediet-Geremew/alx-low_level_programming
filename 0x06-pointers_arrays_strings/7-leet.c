#include "main.h"

/**
 * leet - encodes a string into "1337"
 *
 * @str: the string to be encoded
 * Return: pointer to the resulting string
 */

char *leet(char *str)
{
	char *ptr = str;
	char leet_map[] = "4433007711";
        char *letters = "aAeEoOtTlL";
        int i;

        while (*ptr != '\0')
        {
            i = 0;
            while (letters[i] != '\0')
            {
                if (*ptr == letters[i])
                {
                    *ptr = leet_map[i];
                    break;
                }
                i++;
            }
            ptr++;
        }
        return str;
}
