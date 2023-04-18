#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - a function that frees dog
 * @d: an element
 * Return: pointer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
