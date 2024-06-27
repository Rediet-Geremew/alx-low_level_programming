#include "main.h"

/**
 * print_numbers - a function that prints from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char *str = "0123456789";

	while  (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
