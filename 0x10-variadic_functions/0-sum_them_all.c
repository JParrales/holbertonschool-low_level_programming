#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters.
 *
 * Return: 0 if n = 0, sum parameters.
 */
int sum_them_all(const unsigned int n, ...)
{



	va_list SumList;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(SumList, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(SumList, unsigned);
	}

	va_end(SumList);

	return(sum);
}

