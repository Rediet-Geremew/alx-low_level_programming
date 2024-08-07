#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the address of memory
 * @b: the character to be filled
 * @n: size of the memory
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
