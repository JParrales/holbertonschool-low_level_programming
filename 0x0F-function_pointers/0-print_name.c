#include "function_pointers.h"

/**
 * print_name - poiter functon
 * @name: pointer name.
 * @f: pointer to function.
 * Return. void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

