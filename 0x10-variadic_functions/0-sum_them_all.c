#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all of its parameters
 * @n: counter
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum =0;
	va_list nums;
	va_start(nums, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(nums, int);
			sum += x;
		}
		va_end(nums);
		return (sum);
	}
}
