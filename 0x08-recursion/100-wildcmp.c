/**
 * wildcmp - compare two strings.
 * @s1: string one, no wildcards
 * @s2: string two, can contain the special character *.
 *
 * Return: 1, 0.
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));


	return (0);
}

