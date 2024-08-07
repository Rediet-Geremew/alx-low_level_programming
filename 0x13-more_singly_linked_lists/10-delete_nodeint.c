#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *to_delete;

	if (!head || !*head)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp || !(temp->next))
	{
		return (-1);
	}
	to_delete = temp->next;
	temp->next = temp->next->next;
	free(to_delete);
	return (1);
}
