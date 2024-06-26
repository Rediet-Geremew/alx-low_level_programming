#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @dest: buffer point
 * @src: where the strings are copied
 * Return: dest_start
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
