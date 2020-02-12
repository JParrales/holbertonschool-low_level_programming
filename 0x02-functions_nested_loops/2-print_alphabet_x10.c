#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *@void
 *
 * Return:alphabet
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			char az[27] = "abcdefghijklmnopqrstuvwxyz\n";

			_putchar(az[j]);
		}
	}
}
