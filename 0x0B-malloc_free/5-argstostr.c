#include <stdlib.h>

int _length(char *str);

/**
 * argstostr - concatenate all arguments of your program.
 * @ac: int
 * @av: char
 *
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *s, *t;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (0);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	s = malloc(total * sizeof(char));

	if (s == NULL)
		return (0);

	t = s;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*s = av[x][y];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (t);
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

