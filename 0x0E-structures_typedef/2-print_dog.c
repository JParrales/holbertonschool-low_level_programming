#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: Dog pointer.
 *
 * Retur: void.
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", (*d).name == NULL ? "(nil)" : (*d).name );
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner == NULL ? "(nil)" : (*d).owner );
}

