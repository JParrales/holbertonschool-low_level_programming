#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 *@void
 *
 * Return:alphabet
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 26; i++)
	{
		char az[27] = "abcdefghijklmnopqrstuvwxyz\n";
		_putchar(az[i]);
	}
}
