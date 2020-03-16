#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: Types of argument passed to the function.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0, ing = 0;
	char *varg;
	va_list PrintList;

	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
		i++;
	va_start(PrintList, format);
	while (j <= i)
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
				printf("%s", varg  != NULL ? varg : "(nil)");
				break;
			default:
				ing = 1;
				break;
		}
		j++;
		if (j != i && ing == 0)
			printf(", ");
		ing = 0;
	}
	printf("\n");
	va_end(PrintList);
}

