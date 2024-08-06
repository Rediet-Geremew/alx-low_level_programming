#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: string to be duplicated and added to the new node
 *
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int str_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		return (NULL);
	}
	while (str[str_len])
	{
		str_len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
