#include "holberton.h"

/**
 * _isdigit - function that checks for a digit through (0 -9)
 *@c: character to evaluate in ASCII code
 *
 * Return: 1 if c is a digit or 0 otherwise
 *
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}

	return (0);
}
