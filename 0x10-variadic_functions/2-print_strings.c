#include "variadic_functions.h"

/**
 * print_stringss - Prints strings, followed by a new line
 * @separator: String to be printed between strings.
 * @n: Number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list StringList;
	unsigned int i;
	char* varg;

	va_start(StringList, n);

	for (i = 1; i <= n; i++)
	{
		varg = va_arg(StringList, char*);
		printf("%s", varg  != NULL ? varg : "(nil)");

		if (separator != NULL && i < n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(StringList);

}

