#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i, j, u, d;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			char FB[8] = "FizzBuzz";

			for (j = 0; j < 8; j++)
			{
				_putchar(FB[j]);
			}
		}
		else if ((i % 3) == 0)
		{
			char F[4] = "Fizz";

			for (j = 0; j < 4; j++)
			{
				_putchar(F[j]);
			}
		}
		else if ((i % 5) == 0)
		{
			char B[4] = "Buzz";

			for (j = 0; j < 4; j++)
			{
				_putchar(B[j]);
			}
		}
		else if (i < 10)
		{
			char unit[10] = "0123456789";

			_putchar(unit[i]);
		}
		else
		{
			d = (i / 10) + '0' ;
			_putchar(d);
			u = (i % 10) + '0';
			_putchar(u);
		}

		if (i != 100)
		{
			_putchar(' ');
		}
	}
	return (0);
}

