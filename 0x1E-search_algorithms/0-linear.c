#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
