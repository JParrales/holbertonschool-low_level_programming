#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: Numbers of columns
 * @height: Numbers of rows
 *
 * Return: 2 dimensional array of integers
 **/

int **alloc_grid(int width, int height)
{
	int **arr, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(width * sizeof(int));

		if (arr[x] == NULL)
			return (NULL);
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			arr[x][y] = 0;

	return (arr);

}

