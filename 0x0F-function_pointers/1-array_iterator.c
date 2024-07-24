#include "function_pointers.h"

/**
 * array_iterator - a function that excutes a function
 * @array: a pointer to the array
 * @size: size of the array
 * @action: a pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
