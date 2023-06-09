#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: integer
 * @max: Max integer
 * Return: Pointer to the newyly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
