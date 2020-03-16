#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: Types of argument passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *varg;

	va_list PrintList;

	while(format[i] != '\0')
	{
		i++;
	}

	va_start(PrintList, format);

	while(j <= i)
	{

		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(PrintList, int));
				break;

			case 'i':
				printf("%i", va_arg(PrintList, int));
				break;

			case 'f':
				printf("%f", va_arg(PrintList, double));
				break;

			case 's':

				varg = va_arg(PrintList, char *);

				if (varg == NULL)
					printf("(nil)");

				printf("%s", varg);
				break;

			default:
				break;
		}

		if (i != j)
			printf(", ");

		j++;

	}

	printf("\n");

	va_end(PrintList);
}

