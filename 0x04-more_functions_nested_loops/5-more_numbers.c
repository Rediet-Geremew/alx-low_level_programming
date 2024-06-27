#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;
	char *str = "01234567891011121314";

	for (i = 0; i < 10; i++)
	{
		while (*str)
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
		str = "01234567891011121314";
	}
}
