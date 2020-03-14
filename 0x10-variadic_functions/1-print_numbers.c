#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 *
 * Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list PrintList;
	unsigned int i;

	va_start(PrintList, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(PrintList, int));

		if (separator != NULL && i < n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(PrintList);

}

