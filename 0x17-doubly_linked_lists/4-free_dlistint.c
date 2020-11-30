#include "lists.h"

/**
 * free_dlistint - free dlistint_t list.
 * @head: Head of the linked list
 * Return: ()
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = (*head).next;
		free((void *) head);
		head = temp;
	}

}
