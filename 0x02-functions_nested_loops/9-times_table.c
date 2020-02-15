#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */

void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;

			if (r >= 10)
			{
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
				j == 9 ? j == j : _putchar(',');
			}
			else if (r > 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
				j == 9 ? j == j : _putchar(',');
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0');
					j == 9 ? j == j : _putchar(',');
				}
				else
				{
					_putchar('0');
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}

