#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: Integer
 * Return: a pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);

	if (result == NULL)
	{
		exit(98);
	}
	return (result);
}
