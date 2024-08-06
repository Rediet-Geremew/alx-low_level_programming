#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: pointer to the nth node or null if the node doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}

	return (NULL);
}
