#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Head of the linked list
 * @n: Value new node.
 * Return: address of the new element (pointer), or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *prev;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	for (prev = NULL; *head != NULL; head = &(*head)->next)
		prev = *head;

	(*new_node).n = n;
	(*new_node).prev = prev;
	(*new_node).next = NULL;

	*head = new_node;

	return (new_node);
}
