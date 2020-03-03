#include <stdlib.h>

int _length(char *str);

/**
 * _strdup - opy of the string given as a parameter.
 * @str: string.
 *
 * Return: pointer to a newly allocated space in memory.
 */

char *_strdup(char *str)
{
	char *str2;
	int i, size;

	if (str == 0)
		return (NULL);

	size = _length(str);
	str2 = malloc(size * sizeof(char) + 1);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str2[i] = str[i];

	return (str2);

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

