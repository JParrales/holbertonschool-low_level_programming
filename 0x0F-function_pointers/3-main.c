#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 *
 * Return: 0;
 */

int main(int argc, char const *argv[])
{
	int a, b, res;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[4]);
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);

	return(0);
}

