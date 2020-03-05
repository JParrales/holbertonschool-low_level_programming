#include "holberton.h"

/**
 * malloc_checked -  allocates memory.
 * @b: sizo of memory will be alloceted.
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

