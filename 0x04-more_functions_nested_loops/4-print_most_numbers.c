#include "holberton.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from [0 -9] - [2, 4].
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		char numbers[9] = "01356789\n";

		_putchar(numbers[i]);

	}
}

