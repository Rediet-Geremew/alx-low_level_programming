#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: first string
 * @src: second string
 * @n: condition
 * Return: resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}
	if (n > 0)
	{
		*dest_ptr = '\0';
	}
	return dest;
}
