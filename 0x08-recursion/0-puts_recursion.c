#include "holberton.h"

/**
 * void _puts_recursion(char *s) - function that prints a string, followed by a new line.
 *
 *Return: void.
 */

void _puts_recursion(char *s)
{
	while(s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}

