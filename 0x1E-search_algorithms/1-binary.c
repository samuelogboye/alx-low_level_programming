#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
