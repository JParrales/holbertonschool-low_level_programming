int cal_sqrt(int n, int x);

/**
 * _sqrt_recursion - returns natural square root of a number.
 * @n: input integer.
 *
 * Return: returns the integer natural square root; -1 otherwise.
 */

int _sqrt_recursion(int n)
{
	return (cal_sqrt(n, 1));
}

/**
 * cal_sqrt - calculate the natural sqrt of a number
 * @n: input integer.
 * @x: inicial integer.
 *
 * Return: returns x if is natural sqrt; -1 otherwise
 */

int cal_sqrt(int n, int x)
{
	if (n < x * x)
		return(-1);

	if (n == x * x)
		return (x);

	return (cal_sqrt(n, x + 1));
}
