#include "main.h"

/**
 * _pow_recursion - Returns the value of x^y
 * @x: the base number
 * @y: the exponent
 *
 * Return: The value of x^y, or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
        if (y < 0)
        {
            return (-1);
        }
        if (y == 0)
        {
            return (1);
        }
        return (x * _pow_recursion(x, y - 1));
}
