#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: of the array
 * @height: of the array
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(*array));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(*array[i]));
	}
	return (array);
}
