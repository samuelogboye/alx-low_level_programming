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

	ptr = (int *)calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	free(ptr);
	return (ptr);
}
