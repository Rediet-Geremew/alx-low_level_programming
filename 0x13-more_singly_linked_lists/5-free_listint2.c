#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list and setsthe head to NULL
 * @head: double pointer to the head of the list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
