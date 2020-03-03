/**
 * create_array - creates an array of chars.
 * @size: size of array.
 * @c: character.
 *
 * Return: character.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	if (arr == NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

}

