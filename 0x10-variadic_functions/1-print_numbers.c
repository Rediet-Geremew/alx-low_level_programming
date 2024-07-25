#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints a number
 * @separator: the string to be printed between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print;
       	va_start(print, n);
	
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	va_end(print);
	printf("\n");
}
