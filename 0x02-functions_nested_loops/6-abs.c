#include "main.h"

/**
 *_abs - a function that computes the absolute value of an integer
 *
 * @n: the number to be checked
 *
 * Return: the absolute value of an integer
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
