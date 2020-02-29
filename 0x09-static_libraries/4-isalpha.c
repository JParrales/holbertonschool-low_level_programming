#include "holberton.h"

/**
 * _isalpha - function that checks for alphabetic character
 *@c: character to evaluate in ASCII code
 *
 * Return: 1 if c is s a letter, lowercase or uppercase or 0 otherwise
 *
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}

	return (0);
}
