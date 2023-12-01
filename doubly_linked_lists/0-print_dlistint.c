#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb_node = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nb_node++;
	}

	return (nb_node);
}
