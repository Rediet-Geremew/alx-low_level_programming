#include "main.h"

/**
 * sqrt_helper - find the square root recursively
 * @n: The number to find the square root of
 * @i: The current number to check as a possible square root
 *
 * Return: The square root of n, or -1 if n don't have
 */
int sqrt_helper(int n, int i)
{
        if (i * i > n)
        {
            return (-1);
        }
        if (i * i == n)
        {
            return (i);
        }
        
        return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - find the square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if n does not have square root
 */
int _sqrt_recursion(int n)
{
        if (n < 0)
        {
            return (-1);
        }

        return (sqrt_helper(n, 0));
}
