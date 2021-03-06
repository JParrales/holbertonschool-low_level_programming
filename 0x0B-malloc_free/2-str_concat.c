#include <stdlib.h>

int _length(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return:string concatenate.
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = 0;
	}

	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = 0;
	}

	len1 = _length(s1);
	len2 = _length(s2);

	str = malloc(len1 + len2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	return (str);
}

/**
 * _length - Length of a string
 * @str: String
 *
 * Return: Length
 **/

int _length(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _length(str + 1));
}

