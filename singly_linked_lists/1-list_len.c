#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list
 * @h: Pointer to the head of the linked list
 *
 * This function traverses a linked list and counts the number of elements.
 *
 * Return: The number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		break;
	h = h->next;
	return (i);
}
