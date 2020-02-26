#include "holberton.h"

/**
 * void _puts_recursion(char *s) - prints a string, followed by a new line.
 *
 *Return: void.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);

}

