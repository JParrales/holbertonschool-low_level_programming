#include "holberton.h"

/**
 * _calloc - allocates memory for an array using 2 arguments.
 * @nmemb: array.
 * @size: size of array.
 *
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem  = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		mem[i] = 0;

	return (mem);
}

