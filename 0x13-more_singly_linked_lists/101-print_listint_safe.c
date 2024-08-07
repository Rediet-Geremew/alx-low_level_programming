#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (can print lists with loops)
 * @head: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
        const listint_t *current = head;
        const listint_t **nodes;
        size_t count = 0, i;

        nodes = malloc(sizeof(*nodes));
        if (nodes == NULL)
        {
            exit(98);
        }
        while (current != NULL)
        {
            for (i = 0; i < count; i++)
            {
                if (current == nodes[i])
                {
                    printf("-> [%p] %d\n", (void *)current, current->n);
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
            printf("[%p] %d\n", (void *)current, current->n);
            current = current->next;
        }
        free(nodes);
        return (count);
}
