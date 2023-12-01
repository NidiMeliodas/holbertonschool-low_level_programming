#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: A pointer to the head of the doubly linked list.
 * Return: The number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nb_element;

	for (nb_element = 0; h != NULL; h = h->next)
	{
		nb_element++;
	}

	return (nb_element);
}
