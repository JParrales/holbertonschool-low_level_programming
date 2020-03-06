#include "holberton.h"

int _length(char *str);

/**
 * string_nconcat - concatenates two strings.
 * @s1: String
 * @s2: String
 * @n: character string 2 to concadenate.
 *
 * Return: concadenate string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	len1 = _length(s1);
	len2 = _length(s2);

	if (n < len2)
		len2 = n;

	str = malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);

}

/**
 * _length - Length of a string
 * @str: String
 *
 * Return: Length
 */

int _length(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _length(str + 1));
}

