#include "holberton.h"

/**
 * _abs - prints the absolute value of an integer.
 * @n: number
 *
 * Return: 1 for n >= 0
 *			-1 for n < 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

