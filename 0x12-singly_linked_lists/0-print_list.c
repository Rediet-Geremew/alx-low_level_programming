#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
