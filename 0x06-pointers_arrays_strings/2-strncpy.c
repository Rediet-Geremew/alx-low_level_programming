#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: first string
 * @src: second string
 * @n: condition
 * Return: the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest_ptr = '\0';
		dest_ptr++;
		n--;
	}
	return dest;
}
