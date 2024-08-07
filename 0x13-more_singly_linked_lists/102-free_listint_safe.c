#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Double pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
        listint_t *current;
        listint_t **nodes;
        size_t count = 0, i;

        if (h == NULL || *h == NULL)
        {
            return (0);
        }
        nodes = malloc(sizeof(*nodes));
        if (nodes == NULL)
        {
            exit(98);
        }
        current = *h;
        while (current != NULL)
        {
            for (i = 0; i < count; i++)
            {
                if (current == nodes[i])
                {
                    *h = NULL;
                    free(nodes);
                    return (count);
                }
            }
            count++;
            nodes = realloc(nodes, count * sizeof(*nodes));
            if (nodes == NULL)
            {
                exit(98);
            }
            nodes[count - 1] = current;
            current = current->next;
            free(nodes[count - 1]);
        }
        free(nodes);
        *h = NULL;
        return (count);
}
