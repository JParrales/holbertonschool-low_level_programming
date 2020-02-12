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
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 0; i <= 26; i++)
		{
			char az[27] = "abcdefghijklmnopqrstuvwxyz\n";

			_putchar(az[i]);
		}
	}
}
