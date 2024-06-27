#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 except 2&4
 *
 */

void print_most_numbers(void)
{
	char *str = "01356789";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
