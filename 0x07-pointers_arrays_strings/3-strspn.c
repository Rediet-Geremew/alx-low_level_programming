#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * 
 * @s: character
 * @accept: the bytes
 * 
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int length = 0;
        int i, j;
        int found;

        for (i = 0; s[i] != '\0'; i++)
        {
                found = 0;
                for (j = 0; accept[j] != '\0'; j++)
                {
                if (s[i] == accept[j])
                {
                        found = 1;
                        break;
                }
                }
                if (!found)
                {
                        break;
                }
                length++;
        }
        return (length);
}
