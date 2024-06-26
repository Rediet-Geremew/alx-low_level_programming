#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.*
 * Return: void
 */

void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 10; i++)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
		str = "abcdefghijklmnopqrstuvwxyz";
	}
}
