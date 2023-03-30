#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of intgers
 * @a: array
 * @n: number of character in the string
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right;

	while (left < n--)
	{
		right = a[left];
		a[left] = a[n];
		a[n] = right;
		left++;
	}
}
