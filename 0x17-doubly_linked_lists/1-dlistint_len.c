#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Head of the linked list
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node;

	for (node = 0; h != NULL; h = (*h).next, node++)
		;

	return (node);
}
