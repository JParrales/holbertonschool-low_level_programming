#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: minimun int value.
 * @max: maximun int value.
 *
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		ptr[i] = min + i;

	return (arr);
}
