#include "holberton.h"

/**
 * _islower - function that checks for lowercase character
 *@c: character to evaluate in ASCII code
 *
 * Return: 1 if c is lowercase or 0 otherwise
 *
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}

	return (0);
}
