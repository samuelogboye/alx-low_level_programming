#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a
 * squarematrix of integers
 * @a: String to work with
 * @size: size
 * Return: Success
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - 1 - i);
	}
	printf("%d, %d\n", sum1, sum2);
}
