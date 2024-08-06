#include "lists.h"

/**
 * list_len _ returns the number of elements in a list
 * @h: pointer to the list
 *
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		node_count++;
		current = current->next;
	}
	return (node_count);
}
