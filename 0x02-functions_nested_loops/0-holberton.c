#include "holberton.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Return:  Always 0 (Success)
 */

int main(void)
{
	int i;

	char Holberton[11] = "Holberton";

	for (i = 0; i <= 10; i++)
	{
		_putchar(Holberton[i]);
	}
	_putchar('\n');

	return (0);
}
