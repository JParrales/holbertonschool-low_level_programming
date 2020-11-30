#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: Head of the linked list
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node;

	for (node = 0; h != NULL; h = (*h).next, node++)
		printf("%d\n", (*h).n);
}
