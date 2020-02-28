int strlength(char *s);
int palindrome(char *s, int length);

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: 1, 0.
 */

int is_palindrome(char *s)
{
	int length;

	length = strlength(s);

	if (length <= 1)
		return (1);

	return (palindrome(s, length));
}

/**
 * strlength - returns string length.
 * @s: string to calculate length.i
 *
 * Return: lenght.
 */

int strlength(char *s)
{
	if (*s == '\0')
		return (0);

	s++;

	return (1 + strlength(s));
}

/**
 * palindrome - calculate palindrome.
 * @s: string
 * @length: length
 *
 * Return: string
 */

int palindrome(char *s, int length)
{
	if (length <= 1)
		return (1);
	else if (*s == *(s + length - 1))
		return (palindrome(s + 1, length - 2));
	else
		return (0);

}

