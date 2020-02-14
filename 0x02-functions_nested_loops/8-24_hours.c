#include "holberton.h"

/**
 * jack_bauer - prints 00:00 to 23:59.
 *
 * Return: void.
 */

void jack_bauer(void)
{
	int i, j, k, l, s;

	for (i = '0'; i <= '2'; i++)
		for (j = '0'; j <= '9'; j++)
			for (k = '0'; k <= '5'; k++)
				for (l = '0'; l <= '9'; l++)
				{
					s++;
					if (s <= 1440)
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
					else
					{
						break;
					}
				}
}

