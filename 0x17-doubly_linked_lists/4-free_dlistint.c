#include "lists.h"

/**
 * free_dlistint - free dlistint_t list.
 * @head: Head of the linked list
 * Return: ()
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = (*head).next;
		head = (*head).next;
		free(temp);
	}
	
}
