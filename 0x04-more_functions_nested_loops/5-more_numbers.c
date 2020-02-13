#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14 ten times.
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 20; j++)
		{
			char numbers[21] = "01234567891011121314\n";

			_putchar(numbers[j]);
		}
	}
}

