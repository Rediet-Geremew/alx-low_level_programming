#include "main.h"

/**
 * factorial - the factorial of a given number
 * @n: The number to calculate the factorial
 *
 * Return: factorial of the number, or -1 if n is lower than 0.
 */
int factorial(int n)
{
        if (n < 0)
        {
            return (-1);
        }
        if (n == 0)
        {
            return (1);
        }
        
        return (n * factorial(n - 1));
}
