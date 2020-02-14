#include "holberton.h"

/**
 * print_diagonal - raws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1 ; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

