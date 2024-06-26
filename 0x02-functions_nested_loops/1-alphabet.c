#include "main.h"

/**
 *print_alphabet - it prints a to z in lowercase*
 *Return: void
 */

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
