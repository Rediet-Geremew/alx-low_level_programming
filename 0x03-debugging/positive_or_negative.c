#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/* more headers goes there */

/**
 * positive_or_negative - This is a function that prints random number
 * 
 * @i: the number to be checked
 */

void positive_or_negative(int i)
{
	if(i > 0)
	{
		printf ("%d is positive\n",i);
	}
	else if(i == 0)
	{
		printf ("%d is zero\n",i);
	}
	else 
	{
		printf ("%d is negative\n",i);
	}
}
