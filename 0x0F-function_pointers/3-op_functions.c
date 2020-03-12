#include "3-calc.h"

/**
 * op_add - Sum of a and b.
 * @a: a
 * @b: b
 *
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of a and b.
 * @a: a
 * @b: b
 *
 * Return: Difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of a and b.
 * @a: a
 * @b: b
 *
 * Return: Product.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of a and b.
 * @a: a
 * @b: b
 *
 * Return: Division.
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);

	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Division of a and b.
 * @a: a
 * @b: b
 *
 * Return: Eemainder of the division.
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Error\n");
	exit(100);
}

