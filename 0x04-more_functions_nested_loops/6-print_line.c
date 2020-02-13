#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal n times.
 * @n: number of times line will be repeat.
 *
 * Return: 0
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
			_putchar('-');

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

