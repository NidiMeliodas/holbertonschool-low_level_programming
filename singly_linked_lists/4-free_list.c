#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer to the head of the linked list
 */

void free_list(list_t *head)
{
    list_t *temp;

    for (; head != NULL; head = temp)
    {
        temp = head->next;
        free(head->str);
        free(head);
    }
}

