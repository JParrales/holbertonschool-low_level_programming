int prime(int n, int i, int l);

/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: input integer.
 *
 * Return: 1 if n is a prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (prime(n, 2, n / 2));
}

/**
 * prime - Calcul a prime number.
 * @n: input integer.
 * @i: ++.
 * @l: limiter.
 *
 * Return: 1, 0.
 */

int prime(int n, int i, int l)
{
	if ((n % i == 0 && i <= l) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= l)
		return (prime(n, i + 1, l));
	else
		return (1);
}

