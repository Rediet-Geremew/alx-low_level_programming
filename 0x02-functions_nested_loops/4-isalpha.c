#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 * 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
