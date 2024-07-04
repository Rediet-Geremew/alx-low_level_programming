#include <stdio.h>

/**
 * rot13 - encodes a string using ROT13 cipher
 * 
 * @str: the string to be encoded
 * Return: pointer to the resulting string
 */

char *rot13(char *str)
{
        char *ptr = str;
        char letter;

        while (*ptr != '\0')
        {
            letter = *ptr;

            if ((letter >= 'a' && letter <= 'm') || (letter >= 'A' && letter <= 'M'))
            {
                *ptr = letter + 13;
            }
            else if ((letter >= 'n' && letter <= 'z') || (letter >= 'N' && letter <= 'Z'))
            {
                *ptr = letter - 13;
            }

            ptr++;
        }
        return str;
}
