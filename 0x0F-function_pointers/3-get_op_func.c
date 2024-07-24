#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @s: a pointer to the the operator
 *
 * Return: a pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] =
		{
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
	       	{
       			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
			
