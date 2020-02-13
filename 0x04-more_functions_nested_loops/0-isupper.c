#include "holberton.h"

/**
 * _isuper - function that checks for uppercase character
 *@c: character to evaluate in ASCII code
 *
 * Return: 1 if c is uppercase or 0 otherwise
 *
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}

	return (0);
}
