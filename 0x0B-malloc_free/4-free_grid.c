#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - a function that frees a 2 dimentional grid
 * @grid: of the array
 * @height: of the array
 * Return: NULL on failure
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
