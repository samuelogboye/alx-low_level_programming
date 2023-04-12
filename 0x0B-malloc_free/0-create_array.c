#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * and initilizes it with a specific char
 * @c: Character
 * @size: size
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
