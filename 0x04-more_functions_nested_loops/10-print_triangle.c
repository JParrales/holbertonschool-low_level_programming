#include "holberton.h"

/**
 * print_triangle - print a triangle on the terminal.
 * @size: number of times the character \ should be printed.
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int n = size;

	if (n > 0)
	{
		int i, j;

		for (i = 1 ; i <= n; i++)
		{
			for (j = n; j > 0; j--)
			{
				if (j > i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

