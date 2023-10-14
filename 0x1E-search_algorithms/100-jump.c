#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to head of array
 * @size: size of list
 * @value: value to search for
 *
 * Return: pointer to first node where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t end, i;

	if (!array)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		prev += step;
	}

	end = (prev + step  < size) ? prev + step : size;
	printf("Value found between indexes [%li] and [%li]\n", prev - step, end);

	for (i = prev - step; i < end; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
