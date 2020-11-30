#include "lists.h"

/**
 * get_dnodeint_at_index - print the nth node of a dlistint_t linked list.
 * @head: head
 * @index: index
 * Return:  the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx;

	for (idx = 0; head != NULL; head = head->next, idx++)
	{
		if (idx == index)
			return (head);
	}

	return (NULL);
}
