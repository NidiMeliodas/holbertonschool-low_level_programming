#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}

	return (new_node);
}
