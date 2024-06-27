#include <stdio.h>

/**
 * fizzbuzztest - fizz buzz test
 *
 */

void fizzbuzztest(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	fizzbuzztest();
	return (0);
}
