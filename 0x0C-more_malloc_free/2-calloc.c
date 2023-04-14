#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memorry for an array
 * @nmemb: Integer
 * @size: Size of memory
 * Return: Pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
