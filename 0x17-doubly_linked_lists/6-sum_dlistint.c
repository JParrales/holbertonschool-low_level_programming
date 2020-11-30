#include "lists.h"

/**
 * sum_dlistint - sum elements
 * @head: head
 * Return: sum elements of doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int result;

	for (result = 0; head != NULL; head = (*head).next)
		result += (*head).n;

	return (result);
}
