#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next_node;

	for (current = head; current != NULL; current = next_node)
	{
		next_node = current->next;
		free(current);
	}
}
