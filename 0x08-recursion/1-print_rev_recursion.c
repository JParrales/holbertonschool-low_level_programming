#include "holberton.h"

/**
 * _print_rev_recursion - prints a string, followed by a new line.
 * @s:string.
 *Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\n')
	{
		return;
	}

	_print_rev_recursion(++s);
	_putchar(*s);

}

