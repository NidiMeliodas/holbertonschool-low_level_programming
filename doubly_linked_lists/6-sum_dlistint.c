#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t
 * linked list.
 * @head: A pointer to the head of the doubly linked list.
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	for (current = head; current != NULL; current = current->next)
	{
		sum += current->n;
	}

	return (sum);
}
